#include<stdio.h>

//Accept number from user and print that number of * on screen

/*
    Function : Display
    Description : Accept number and Print  * on console still that number
    Input : Number
    Output : Print * till that number
*/
void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    while (iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }   
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return(0);
}