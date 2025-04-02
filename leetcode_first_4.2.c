/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) 
{
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] != 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }

    // 如果所有元素都是9，我们需要返回一个新的数组
    int* newDigits = (int*)malloc((digitsSize + 1) * sizeof(int));
    if (!newDigits) {
        *returnSize = 0;
        return NULL; // 内存分配失败
    }

    newDigits[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        newDigits[i] = 0;
    }

    *returnSize = digitsSize + 1;
    return newDigits;
    
}