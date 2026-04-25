#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[1000];
    int i,count[435]={0};

    printf("enter a string");
    gets(str);

    char* p=str;
    while (*p)
    
        ++count[*p++];
        p=str;
    
    while (*p)
    {
        if (1==count[*p])
        {
            printf("the non repeating character in the string is %c\n",*p);
            break;
        }
        p++;
        
    }
    

    

    
    return 0;
}
