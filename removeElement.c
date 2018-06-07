/*
**********************************************************************
* name:removeElement.c
* author:Stove
* brief:给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。
        不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
* date:2018/6/5
* log:
**********************************************************************
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int removeElement(int* nums, int numsSize, int val)
{
    int number;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i]!=val)
        {
            nums[number++]=nums[i];
        }
    }
    return number;
    
}



int main(int argc, char const *argv[])
{
    int max=1000;
    int test_array[max];
    for (int i = 0; i < max; i++)
    {
        time_t t;
        srand((unsigned)time(&t));
        test_array[i]=rand()%100+1;
        
    printf("%d\t",test_array[i]);
    }
    printf("\n\n\n");

    printf("%d\n",test_array[3]);
    //int result_number=removeElement(test_array,1000,30);
    // for (int j = 0; j < result_number; j++)
    // {
    //     printf("%d\t",test_array[j]);
    // }


    return 0;
}
