/*
**********************************************************************
* name:removeDuplicates.c
* author:Stove 
* brief:给定一个排序数组，你需要在原地删除重复出现的元素，
        使得每个元素只出现一次，返回移除后数组的新长度。
        不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 
        额外空间的条件下完成。
* example:给定 nums = [0,0,1,1,1,2,2,3,3,4],
函数应该返回新的长度 5, 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4。
* date: 2018/6/5
* log:
**********************************************************************
*/
#include <stdio.h>
int removeDuplicates(int* nums, int numsSize)
{
    /*出错代码*/
    // int i=0;
    // int j=0;
    // int element_number=numsSize;
    // for (int  j = i+1; i < numsSize; j++)
    // {
    //     if (nums[i]==nums[j])
    //     {
    //         j++;
    //         nums[i+1]=nums[j];
    //         element_number--;
    //     }
    //     i++;
    // }
    // return element_number;

    //标准答案
    if (numsSize==0)
    {
        return 0;
    }
    int j=0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[j]!=nums[i])
        {
            nums[++j]=nums[i];
        }
    }
    return j+1;
    
}

int main(int argc, char const *argv[])
{
    int test_array[6]={-1,-1,1,2,2,3};
    int number=removeDuplicates(test_array,6);
    printf("修改后\n");
    for (int i = 0; i < number; i++)
    {
    printf("%d",test_array[i]); 
    }
    return 0;
}
