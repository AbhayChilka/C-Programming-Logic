#include<stdio.h>

//accept number and print even factors of number 

void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for (i = 1; i < iNo; i++)
    {
        if ((iNo % i == 0 ))
        {
            printf("%d\t", i);           
        }
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return(0);
}