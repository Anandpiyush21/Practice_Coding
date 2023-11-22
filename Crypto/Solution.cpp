#include "cryptlib.h"
#include "rijndael.h"
#include "modes.h"
#include "files.h"
#include "osrng.h"
#include "rsa.h"
#include "hex.h"
#include <random> 
#include <iostream>
#include<stdio.h>
#include <string>
#include <x509cert.h>
#include <pem.h>
using namespace CryptoPP;
using namespace std; 



const std::string pemCertificate;
class TA {
public:
    int veh1;
    int veh2;
    int secretkey;
    X509Certificate certificate;
};

class RSU {
public:
    int veh1;
    int veh2;
    int secretkey;
};

class Vehicle{
public:
    int pseudonym;
    int sending_secretkey;
    int receiving_secretkey;
    string msg_sending;
    string msg_receiving;
    X509Certificate certificate;
};

int GeneratePseudonym()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(1, std::numeric_limits<int>::max());

    return distribution(gen);
}

int GenerateSecretKey()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(1, std::numeric_limits<int>::max());

    return distribution(gen);
}



std::string EncryptMessage(const std::string& message, const SecByteBlock& key, const SecByteBlock& iv)
{
    std::string cipher;
    using namespace CryptoPP;

    try
    {
        CBC_Mode<AES>::Encryption e;
        e.SetKeyWithIV(key, key.size(), iv);

        StringSource s(message, true,
            new StreamTransformationFilter(e,
                new StringSink(cipher)
            )
        );
    }
    catch (const Exception& e)
    {
        std::cerr << e.what() << std::endl;
        exit(1);
    }

    return cipher;
}

std::string DecryptMessage(const std::string& cipher, const SecByteBlock& key, const SecByteBlock& iv)
{
    std::string recovered;

    try
    {
        CBC_Mode<AES>::Decryption d;
        d.SetKeyWithIV(key, key.size(), iv);
        StringSource s(cipher, true,
            new StreamTransformationFilter(d,
                new StringSink(recovered)
            )
        );
    }
    catch (const Exception& e)
    {
        std::cerr << e.what() << std::endl;
        exit(1);
    }

    return recovered;
}


bool ValidateKeys(int act_pseudonym,int giv_pseudonym)
{
    return (act_pseudonym == giv_pseudonym);
}

int main(int argc, char* argv[])
{
    TA ta;
    RSU rsu;
    Vehicle v1;
    Vehicle v2;
    AutoSeededRandomPool prng;

    //Vehicle 1
    v1.pseudonym = GeneratePseudonym();

    //Vehicle 2
    v2.pseudonym = GeneratePseudonym();

    rsu.veh1= v1.pseudonym;// Vehicle 1 sends its pseudonym to RSU
    ta.veh1 = rsu.veh1;//RSU to TA Veh-1
    
    rsu.veh2= v2.pseudonym;// Vehicle 2 sends its pseudonym to RSU
    ta.veh2 = rsu.veh2; //RSU to TA Veh- 2





    int v_no;
    cout << "Enter the vehicle from which you want to transfer ( 1 or 2 ) \n";
    cin >> v_no;
    if (v_no == 1) {
        string msge;
        cout << "Data Going from " << v1.pseudonym <<" to "<<v2.pseudonym <<" . . \n";
        cout << "Enter the message you want to transfer  : ";
        //char msge[1000];
        //scanf_s("%s", msge, sizeof(msge));
        //scanf(“ % [^ \n]s”, msg)
        //getline(cin, msge);
        //msge = " Hello World ";
        cin >> msge;
        v1.msg_sending = msge;
        SecByteBlock key(AES::DEFAULT_KEYLENGTH);
        SecByteBlock iv(AES::BLOCKSIZE);
        string cipher =  EncryptMessage(v1.msg_sending, key, iv); //Encrypting the message
        ta.secretkey = GenerateSecretKey();//Generating secret Key 
        rsu.secretkey = ta.secretkey;//TA gives superkey to RSU
        v1.sending_secretkey = rsu.secretkey; //Shares the secret Key 
        v2.receiving_secretkey = rsu.secretkey; //Shares the secret key
        //v1.sending_secretkey = 9298;//For altering
        v2.receiving_secretkey = 3323;//For altering
        if (ValidateKeys(v1.sending_secretkey, v2.receiving_secretkey)) {
            v2.msg_receiving = DecryptMessage(cipher, key, iv);
            cout << "\n\nConnection sucessful.....\n\nTransmitting the data \n\n";//Connnection Successful
            cout << "Cipher Text Generated \n" << cipher << " \n\n";
            cout << "\nDecoding Cipher Text  . . . . . . . \n\n";
            cout << "Message is . . .  " << v2.msg_receiving << "\n\n";
            cout << "Message transmitted successfully\n\n";
        }
        else cout << "Connection Unsuccessful , aborting the transmission \n\n\n"; //Unsucessful
        
    }
    else {
        string msge;
        cout << "Data Going from " << v2.pseudonym << " to " << v1.pseudonym << " . . \n";
        cout << "Enter the message you want to transfer  : ";
        //msge = " Hello Atharva ";
        cin >> msge;
        v2.msg_sending = msge;
        SecByteBlock key(AES::DEFAULT_KEYLENGTH);
        SecByteBlock iv(AES::BLOCKSIZE);
        string cipher = EncryptMessage(v2.msg_sending, key, iv); //Encrypting the message
        ta.secretkey = GenerateSecretKey(); //Generating secret Key
        rsu.secretkey = ta.secretkey; //TA gives superkey to RSU
        //RSU shares secretkey with the vehicles
        v2.sending_secretkey = rsu.secretkey;  
        v1.receiving_secretkey = rsu.secretkey; 
        //v2.sending_secretkey = 3344345; //For altering
        //v1.receiving_secretkey = 341333; //Fpr Altering
        if (ValidateKeys(v1.receiving_secretkey, v2.sending_secretkey)) {
            v1.msg_receiving = DecryptMessage(cipher, key, iv);
            cout << "\n\nConnection sucessful.....\nTransmitting the data \n\n";//Connnection Successful
            cout << "Cipher Text Generated\n\n" << cipher;
            cout << "\nDecoding Cipher Text  . . . . . . . \n\n";
            cout << "Message is . . .  " << v1.msg_receiving << "\n\n\n";
            cout << "Message transmitted successfully";
        }
        else cout << "Connection Unsuccessful , aborting the transmission \n\n\n"; //Unsucessful
        
    }

    return 0;
}

