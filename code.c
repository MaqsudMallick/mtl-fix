#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f;
    FILE *f2;
    f= fopen("read.txt", "r");
    f2= fopen("write.txt", "w");
    if(!f || !f2)
    printf("File system failed");
    else
    {
        // printf("Hellow");
        char str[6000];
        while(fgets(str,6000, f))
        {
            // printf("%s",str);
        int length;
        for(length=0; str[length]!='\0'; length++);
        {
        
        if(length && str[0]==' ')
        {
            for(int i=1; i<=length; i++)
            {
                
                str[i-1]=str[i];
                
            }
        }
        }
        if(strcmp(str,"\n"))
        fputs(str, f2);
        // fputs("\n",f2);
        }
    }
    fclose(f);
    fclose(f2);
}