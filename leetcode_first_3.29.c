int strStr(char* haystack, char* needle) 
{
    int l1 = strlen(haystack);
    int l2 = strlen(needle);
    int i = 0;
    int j = 0;
    for(i = 0;i <= l1 - l2;i++)
    {
        int flag = 1;
        for(j = 0;j < l2;j++)
        {
            if(haystack[i + j] != needle[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        return i;
    }
    return -1;
}