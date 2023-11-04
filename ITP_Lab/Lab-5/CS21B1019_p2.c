#include <stdio.h>
void countHillValley(int* nums, int numsSize){
    int sameHill;
    int i, before, after;
    int valley = 0;
    int hill = 0;

    for (i = 1 ; i < (numsSize - 1) ; i++){
        before = i - 1;
        after = i + 1;
        sameHill = 0;

        if (nums[before] == nums[i]){       
            sameHill = 1;
        }

        if (sameHill == 0){

            while (nums[after] == nums[i]){     
                if ((after + 1) < numsSize){
                    after = after + 1;
                }
                else break;
            }

            if (nums[i] > nums[before] && nums[i] > nums[after]){   
                hill++;
            }

            else if (nums[i] < nums[before] && nums[i] < nums[after]){  
                valley++;
            }
        }
    }

    printf("%d",hill+valley);
}

int main() {
    int size;
    scanf("%d", &size);

    int nums[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
     countHillValley(nums,size);
    return 0;
}
