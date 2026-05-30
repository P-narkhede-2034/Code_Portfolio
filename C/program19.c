// check prime or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime( int ino)
{
     int iCnt = 0; 
     bool bFlag = false;

     if(ino < 0)
     {
        ino = -ino;
     }
     
    
     for (iCnt = 2 , bFlag = true; iCnt<=(ino / 2); iCnt ++)
     {
         if((ino % iCnt ) == 0)
         {
            bFlag = false;
            break;                      
         }
     }
    
     return bFlag;
}

int main()
{
    int iValue  = 0 , bRet = false;

    printf("Enter the no :");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    
    if(bRet == true)
    {
        printf("%d is prime no ", iValue);
    }
    else
    {
        printf("%d is not a prime no ", iValue);
    }

    return 0;
}