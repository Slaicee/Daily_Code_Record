int removeDuplicates(int* nums, int numsSize) 
{
    if(nums == NULL)
    return 0;
    int i = 0;
    int count = 0;
    for(i = 1;i < numsSize;i++)
    {
        if(nums[count] != nums[i])
        {
            count++;
            nums[count] =  nums[i];
        }
    }  
    return count + 1; 
}