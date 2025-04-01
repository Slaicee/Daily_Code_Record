int searchInsert(int* nums, int numsSize, int target) 
{
    int left = 0;
    int right = 0;
    right = numsSize - 1;
    int mid = 0;
    int ans = 0;
    mid = (left + right) / 2;
    while(left <= right)
    {   
        mid = (right - left) / 2 + left;
        if(target <= nums[mid])
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            ans = mid + 1;
            left = mid + 1;
        }
    }
    return ans;
}