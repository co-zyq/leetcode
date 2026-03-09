#include<stdio.h>
#include<stdlib.h>
int main(void){
    int nums[4]={2,7,11,15};
    int target = 9;
    int numSize = sizeof(nums)/sizeof(nums[0]);
    int signal=0;
    for(int i=0;i<=3;i++)
    {
        for(int x=i+1;x<=3;x++)
        {
            if (nums[i]+nums[x]==target){
                printf("[%d,%d]",i,x);
                signal=1;
                break;
            }
        }
        if (signal==1) break;
    }
}

