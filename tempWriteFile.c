#include <stdio.h>
#include <stdlib.h>
struct person{
    int id;
    char firstname[20];
    char lastname[20];
};
int main()
{
    FILE *tempfile;
    tempfile = fopen("temp.bin","wb");

    if (tempfile==NULL)
    {
        fprintf(stderr,"error opened file\n");
        exit(1);
    }
    
    struct person input1 = {1, "rohan", "sharma"};
    struct person input2 = {2, "pawan", "prajapati"};
    int flag=0;
    flag=fwrite(&input1,sizeof(struct person),1, tempfile);
    flag=fwrite(&input2,sizeof(struct person),1, tempfile);

    if(flag)
    {
        printf("Contents of the structure written sucessfully");
    }
    else{
        printf("error written to the file");
    }
    fclose(tempfile);
    
    
    return 0;
}