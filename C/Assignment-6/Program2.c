#include<stdio.h>

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    switch (iNo)
    {
    case 1:
        if (iNo == 1)
        {
            printf("One");
        }       
        break;
    case 2:
        if (iNo == 2)
        {
            printf("Two");
        }       
        break;
    case 3:
        if (iNo == 3)
        {
            printf("Three");
        }       
        break;
    case 4:
        if (iNo == 4)
        {
            printf("Four");
        }       
        break;
    case 5:
        if (iNo == 5)
        {
            printf("Five");
        }       
        break;
    case 6:
        if (iNo == 6)
        {
            printf("Six");
        }       
        break;
    case 7:
        if (iNo == 7)
        {
            printf("Seven");
        }       
        break;
    case 8:
        if (iNo == 8)
        {
            printf("Eight");
        }       
        break;
    case 9:
        if (iNo == 9)
        {
            printf("Nine");
        }       
        break;
    case 10:
        if (iNo == 10)
        {
            printf("Ten");
        }       
        break;
    
    default:
        printf("Invalid Number");
        break;
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