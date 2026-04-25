#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void compare(FILE *fp1,FILE *fp2)
{
    char ch1 = getc(fp1);
    char ch2 = getc(fp2);

    int error=0,pos=0,line=1;

    while (fp1 !=EOF && fp2 !=EOF)
    {
        pos++;

        if (ch1=='\n'||ch2=='\n')
        {
            pos=0;
            line++;
        }

        if (ch1 != ch2)
        {
            error++;
            printf("Line Number : %d \tError"
               " Position : %d \n", line, pos);
        }
        ch1=getc(fp1);
        ch2=getc(fp2);
        
    }
    printf("total error %d",error);
    
}
int main()
{
    FILE *fp1 = fopen("compare.bin","r");
    FILE *fp2 = fopen("compair.bin","r");

    if (fp1==NULL||fp2==NULL)
    {
        printf("error opening file");
        exit(1);
    }

    compare(fp1,fp2);
    
    fclose(fp1);
    fclose(fp2);

    
    return 0;
}
