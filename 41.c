#include<stdio.h>
int main()
{
    //number, counting variable
    int num,i;

    printf("\nEnter number: ");
    scanf("%d", &num);
    
    printf("\nThe factors are:\n");
    
    for(i=1;i<=num;i++)
    {
        if (num%i == 0)
        printf("%d ", i);
    }
}
