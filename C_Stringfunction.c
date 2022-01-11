#include<stdio.h>
#include<string.h>

int main()
{
    char str1[10]={"Hitendra"};
    char str2[10]={"Sisodia"};
    char str3[10];
    int len;
    
    strcpy(str3,str2);
    printf("New string:%s\n",str3);
    
    strcat(str1,str2);
    printf("New string:%s\n",str1);

    len=strlen(str2);
    printf("Len of string is:%d\n",len);

    
    printf("Reverse string:%s\n",strrev(str2));

    return 0;
}