//pointers in string//

#include<stdio.h>
int main()
{
    char string[]="hitendra sisodia";      //in string array pointers print the string till \0;
    char *ptr=&string[0];
    printf("%s\n",ptr);

    *ptr++;
    ptr++;
    printf("%s\n",ptr);
    printf("%c\n",*ptr);
    printf("%d",&ptr);

    return 0;
}