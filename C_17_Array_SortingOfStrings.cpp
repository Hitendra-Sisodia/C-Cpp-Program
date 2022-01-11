#include<stdio.h>
#include<string.h>

void charsorting()
{
    char name[5][20];
    char temp[10];
    for(int i=0;i<=4;i++){
        printf("Enter %d name:",i+1);
        scanf("%s",&name[i]);
    }

    //sorting of array
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            int r=strcmp(name[i],name[j]);
            if(r>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

    printf("            Sorted Names\n");

    for(int j=0;j<5;j++){
        printf("Name %d:%s ",j+1,name[j]);
    }
    
    printf("\n");
    char key[10];
    printf("Input an key to search in Names");
    scanf("%s",&key);
    
    for(int i=0;i<5;i++){
        int m=strcmp(name[i],key);
        if(m==0){
            printf("Name Found! Name is:%s",name[i]);
            break;
        }
        else if(i==4){
            printf("Name %s Not found",key);
        }
    }

}
int main()
{
    charsorting();
    return 0;
}