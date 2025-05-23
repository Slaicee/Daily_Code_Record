int** generate(int numRows, int* returnSize, int** returnColumnSizes) 
{
    int** ret = malloc(sizeof(int*) * numRows);
    *returnSize = numRows;
    *returnColumnSizes = malloc(sizeof(int) * numRows);
    int i = 0;
    int j = 0;
    for(i = 0;i < numRows;i++)
    {
        ret[i] = malloc(sizeof(int) * (i + 1));
        (*returnColumnSizes)[i] = i + 1;
        ret[i][0] = ret[i][i] = 1;
        for(j = 1;j < i;j++);
        ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
    }
    return ret;
}