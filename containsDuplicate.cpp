/*
**********************************************************************
* name:containsDuplicate.cpp
* author:Stove
* brief:给定一个整数数组，判断是否存在重复元素。
        如果任何值在数组中出现至少两次，函数返回 true。
        如果数组中每个元素都不相同，则返回 false
        Given an array of integers, find if the array contains any duplicates.
        Your function should return true if any value appears at least twice in the array, 
        and it should return false if every element is distinct.
* date:2018/6/7
* log:
    1)  bug_2018/6/7
        input:[3,1]
        reason:
        1."return flag" instead "return false" int the end of function;
    2)  bug_2018/6/7
        for (int  i = 0; i < numsSize ; i++)
                                     ^
                                     I    
        {
            /code.../
        }
        reason:should be "i < numsSize-1"

**********************************************************************
*/
#include<iostream>
#include <cstdlib>
/*
**********************************************************************
* name:bool containsDuplicate_first(int *nums,int numsSize)
* brief:this is a bad function
        reason1:\没有考虑到数组不一定有序
**********************************************************************
*/

// bool  containsDuplicate_first(int* nums, int numsSize)
// {
//     if(numsSize<2)
//         return false;
//     for (int i = 0; i < numsSize; i++)
//     {
//       if (nums[i]==nums[i+1])
//       {
//           return true;
//       }
//     }
//     return false;
// }



/*
**********************************************************************
* name:bool  containsDuplicate_temp(int* nums, int numsSize)
* brief:按照自己理解打，出现有bug
**********************************************************************
*/
bool  containsDuplicate_temp(int* nums, int numsSize)
{
    if (numsSize<2)
    {
        return  false;
    }
    bool flag=false;
    while(flag!=true)
    {
        //flag=false;
        //for(int i=0;i<numsSize;i++)   bug_2018/6/7
        for (int i = 0; i < numsSize-1; i++)
        {
            if (nums[i]==nums[i+1])
            {
                return true;
            }
            else if (nums[i]>nums[i+1])
            {
                int temp;
                temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
                flag=true;

            }
        }
    }
    
    return false;
    //return flag;//bug_2018/6/7
}

/*
**********************************************************************
* name:bool  containsDuplicate(int* nums, int numsSize)
* brief:参考代码，完美运行
**********************************************************************
*/
bool  containsDuplicate(int* nums, int numsSize)
{
    if (numsSize<2)
    {
        return  false;
    }
    bool flag=false;
    do
    {
        flag=false;
        for (int i = 0; i < numsSize-1; i++)
        {
            if (nums[i]==nums[i+1])
            {
                return true;
            }
            else if (nums[i]>nums[i+1])
            {
                int temp;
                temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
                flag=true;

            }
        }
    } while (flag==true);
    
    return false;
}

//===============================test==============================================
int main(int argc, char const *argv[])
{
    using namespace std;
    int array[2]={3,1};
    if (containsDuplicate_temp(array,2))
    {
        std::cout << "into if" << '\n';
        std::cout << "有重复项" << '\n';
    }
    else
    {
        std::cout << "无重复项" << '\n';
    }
    return 0;
}
