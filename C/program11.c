// factor  of 6
#include <stdio.h>

void DisplayFactor(int iNo)
{
    int icnt = 0;

    for(icnt = 1 ; icnt < iNo ; icnt++)
    {
        if( (iNo %  icnt )== 0)
           {
                printf("%d",icnt);
           }
    }
}

int main()
{ 
    int iValue= 0 ;

    printf("enter the first no :");
    scanf("%d",iValue);
    
    DisplayFactor(iValue);
    

    return 0;
}