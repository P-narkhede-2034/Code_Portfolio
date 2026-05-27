#include <stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int ino)
{    
    int iRem = 0;

    if((ino % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter NO :");
    scanf("%d",&iValue);

   bRet = CheckEvenOdd(iValue);
 
   if (bRet == true)
   {
        printf("%d is Even Number\n",iValue);
   }else
   {
        printf("%d is odd NUmber\n ",iValue);
   }

    return 0;
}