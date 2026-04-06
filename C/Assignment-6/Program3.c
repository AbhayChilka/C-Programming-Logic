#include<stdio.h>
#include<stdbool.h>

// input from user and return factorial
/*input : 5
  output : 1 * 2 * 3 * 4 * 5 = 120
*/

int Factorial(int iNo)
{
    int i = 0;
    int ifact=1;    
  
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(i=1; i<=iNo; i++)
    {    
      ifact = ifact*i;    
    }    
    return ifact;
}

int main()
{
    int iValue= 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is: %d",iRet);        
   
    return(0);
}