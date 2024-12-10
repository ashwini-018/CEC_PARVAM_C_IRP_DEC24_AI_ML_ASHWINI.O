#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    int count;
    printf("Enter your name: ");
    scanf("%s", &name);
    
    // printf("%d",size);

    // if(size%2 ==0)
    //     printf("\n Name HAS Even Characters.");
    //     printf("\n Name Has Odd Characters.");

     for(int i=0; name[i]!='\0'; i++)
     {
        count++;
        }
     

     if (count%2 ==0)
        printf("your name has a even " );


    return 0;
}