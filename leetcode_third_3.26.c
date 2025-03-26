bool isValid(char* s) 
{
    if(strlen(s) % 2 == 1)
    return false;
    int i = 0;
    int top = 0;
    char* stack = (char*)malloc(strlen(s) * sizeof(char));
    for (int i = 0; i < strlen(s); i++) 
    {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{') 
            stack[top++] = ch;
        else 
        {
            if (top == 0) 
            {
                free(stack);
                return false;
            }
            char last = stack[--top];
            if ((ch == ')' && last != '(') ||(ch == ']' && last != '[') ||(ch == '}' && last != '{')) 
            {
                free(stack);
                return false;
            }
        }
    }

    free(stack);
    return top == 0;    
}
