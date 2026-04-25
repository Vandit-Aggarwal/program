#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char s1[]="hello";
    char s2[]="hello";

    int rep=strcmp(s1,s2);

    if (rep<0)
    {
        printf("%s is smaller then %s",s1,s2);
    }
    else if (rep>0)
    {
        printf("%s is grater then %s",s1,s2);
    }
    else
    {
        printf("%s is equal to %s",s1,s2);   
    }
    
    
    return 0;

}
