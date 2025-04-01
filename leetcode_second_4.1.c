int lengthOfLastWord(char* s) 
{
    int length = 0;
    int ans = 0;
    while(*s != '\0')
    {  
        if(*s != ' ')
        {
            length++;
            ans = length;
        }
        else
            length = 0;
            s++;
    }
    return ans;
}