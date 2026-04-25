#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int i,flag=0,len;
    char str[50];

    printf("enter the string you want to check\n");
    gets(str);

    len=strlen(str);
    for ( i = 0; i < len; i++)
    {
        if (str[i]!=str[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("your string is palindrome");
    }
    else{
        printf("your string is not palindrome");

    }
    
        
    return 0;
}
