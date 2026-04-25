#include <stdio.h>
#include <stdlib.h>
struct person{
    int id;
    char firstname[20];
    char lastname[20];
}p1;
int main()
{
    int n, count=1;
    FILE *infile, *temp;
    infile = fopen("person.bin","rb");
    temp = fopen("temp.bin","wb");

    if (infile==NULL||temp==NULL)
    {
        fprintf(stderr,"error input file");
        exit(1);
    }

    printf("which line you want to delete\n");
    printf("enter 1,2,3 ... any line\n");
    scanf("%d",&n);
    while (fread(&p1,sizeof(struct person),1,infile)==1)  
    {
        if (count !=n)
        {
            fwrite(&p1,sizeof(struct person),1,temp);
        }
        count++;
    }
    

    fclose(infile);
    fclose(temp);

    remove("person.bin");
    rename("temp.bin", "person.bin");
    printf("record deleted sucessfully\n");


    
    return 0;
}