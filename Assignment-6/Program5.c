#include<stdio.h>

//table reverse

void Table(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
        
    for ( iCnt = 10; iCnt > 0; iCnt--)
    {
        printf("%d\t", (iCnt * iNo));
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return(0);
}