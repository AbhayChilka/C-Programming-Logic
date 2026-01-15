#include<stdio.h>

//accept number from user and return difference between summation of all factors and non factors

int FactDiff(int iNo)
{
    int iCnt = 0;
    int Fact = 0;
    int NonFact = 0;
    int difference = 0;

    for(iCnt =1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            Fact = Fact + iCnt;
        }
        else
        {
            NonFact = NonFact + iCnt;
        }
    }

    difference = Fact-NonFact;
    return difference;  
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return(0);
}