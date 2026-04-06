#include<stdio.h>

//accept number from user and print its number line

void Display(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
        
    for ( i = -iNo; i <= iNo; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return(0);
}