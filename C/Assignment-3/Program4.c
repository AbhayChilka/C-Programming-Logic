#include<stdio.h>

//accept character and convert case of character

void Display(char CValue)
{
    if (CValue  >= 'A' && CValue<= 'Z')
    {
        printf("%c", CValue+32);
    }
    else if (CValue >= 'a' && CValue <= 'z')
    {
        printf("%c", CValue-32);
    }
    
}

int main()
{
    char cValue = '\0';

    printf("Enter character :");
    scanf("%c", &cValue);

    Display(cValue);

    return(0);
}