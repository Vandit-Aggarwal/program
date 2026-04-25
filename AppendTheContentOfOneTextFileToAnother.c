#include <stdio.h>
void appendfile(char source[],char destination[])
{
    FILE *fp1;
    FILE *fp2;
    
    fp1=fopen(source,"r");
    fp2=fopen(destination,"a");

    if (fp1==NULL || fp2==NULL)
    {
        printf("error opening file");
        return;
    }

    char buf[100];

    while (fgets(buf, sizeof(buf), fp1) != NULL)
    { 
        fprintf(fp2,"%s",buf);
        printf("%s", buf);
    }
}
int main()
{
    char source[]="file1.txt";
    char destination[]="file2.txt";

    appendfile(source, destination);


    return 0;
}

