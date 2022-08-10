#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,number[10];
    printf("JAY BANKOTI - 121A8022");
    printf("\nENTER 10 NO'S:");
    for(i=0;i<10;i++)

        scanf("%d",&number[i]);
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {

            if(number[i]>number[j])
        {
            a=number[i];
            number[i]=number[j];
            number[j]=a;
        }
        }
    }
        printf("NO'S IN ASCENDING ORDER: \n");
        for(i=0;i<10;i++)
        {
            printf("%d \n",number[i] );
        }
        return 0;

    }

