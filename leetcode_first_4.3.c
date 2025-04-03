char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLength = (lenA > lenB ? lenA : lenB) + 1;
    char* result = (char*)malloc((maxLength + 1) * sizeof(char));
    
    // 手动循环赋值
    for (int i = 0; i < maxLength; ++i) {
        result[i] = '0';
    }
    result[maxLength] = '\0';

    int carry = 0;
    for (int i = lenA - 1, j = lenB - 1, k = maxLength - 1; i >= 0 || j >= 0 || carry; --i, --j, --k) 
    {
        int sum = carry;
        if (i >= 0) sum += a[i] - '0';
        if (j >= 0) sum += b[j] - '0';
        carry = sum / 2;
        result[k] = (sum % 2) + '0';
    }

    if (result[0] == '0') 
    return result + 1;

    return result;
}