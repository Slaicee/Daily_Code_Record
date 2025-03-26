bool isPalindrome(int x) {
    const int MAXSIZE = 100;
    int size = 0;
    int i = 0;
    int j = 0;
    int *arr = (int *)malloc(MAXSIZE * sizeof(int));
    if(x < 0)
    return false;
    else
    {
        while (x > 0) 
        {
            arr[size] = x % 10;
            x = x / 10;
            size++;
        }
        for (int i = 0; i < size / 2; i++) 
        {
            if (arr[i] != arr[size - i - 1]) 
            {
                free(arr);
                return false;
            }
        }
        return true;
    }
    free(arr);
    return true;
}
