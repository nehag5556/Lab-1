#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;

    char data[70] = "Hello! this is the content of the file i have created on 3rd of June";

    fp = fopen("3june.txt","w");

    if(fp == NULL){
        printf("File 3june.txt failed to open \n");
    }
    else{
        printf("file is now opened \n");

        if(strlen(data)>0){
            fputs(data,fp);
            fputs("\n",fp);
        }

        fclose(fp);

        printf("data successfully written in the file \n");
        printf("file closed \n");
    }

    return 0;
}
