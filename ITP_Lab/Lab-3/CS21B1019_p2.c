#include <stdio.h>


void func_0(int *state) {
    switch (*state) {
        case 0:
            *state = 0;
            break;
        case 1:
            *state = 1;
            break;
    }
}

void func_1(int *state) {
    switch (*state) {
        case 0:
            *state = 2;
            break;
        case 1:
            *state = 3;
            break;
    }
}

void func_2(int *state) {
    switch (*state) {
        case 0:
            *state = 4;
            break;
        case 1:
            *state = 0;
            break;
    }
}

void func_3(int *state) {
    switch (*state) {
        case 0:
            *state = 1;
            break;
        case 1:
            *state = 2;
            break;
    }
}

void func_4(int *state) {
    switch (*state) {
        case 0:
            *state = 3;
            break;
        case 1:
            *state = 4;
            break;
    }
}

int main() {
    int state = 0;
    long long input;
    scanf("%lld", &input);
    while (input > 0) {
        int digit = input % 10; 
        switch (digit) {
            case 0:
                func_0(&state);
                break;
            case 1:
                func_1(&state);
                break;
        }
        
        input /= 10;  
    }

   printf("%d",state);

    return 0;
}
