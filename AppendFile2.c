#include <stdio.h>
#include <stdlib.h>
struct person{
    int id;
    char firstname[20];
    char lastname[20];
};
int main()
{
    FILE *outfile;
    outfile = fopen("file2.txt","w");

    if (outfile==NULL)
    {
        fprintf(stderr,"error opened file\n");
        exit(1);
    }
    

    struct person input2 = {2, "pawan", "prajapati"};
    int flag=0;
    flag=fwrite(&input2,sizeof(struct person),1, outfile);

    if(flag)
    {
        printf("Contents of the structure written sucessfully");
    }
    else{
        printf("error written to the file");
    }
    fclose(outfile);
    
    
    return 0;
}