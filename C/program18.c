// count prime or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime( int ino)
{
     int iCnt = 0; 
     int  iFrequency = 0;

     if(ino < 0)
     {
        ino = -ino;
     }

     for (iCnt = 2; iCnt<=(ino / 2); iCnt ++)
     {
         if((ino % iCnt ) == 0)
         {
            iFrequency ++;
            break;                         // optimazation
         }
     }
    
     if(iFrequency == 0)         //no facor
     {
        return true;
     } 
     else                       // atleat one factor
     {
        return false;
     }
}

// TIME COMPLEXITY
// EVEN NUMBER  O(1)
// ODD NUMBER  O(2)
// prime NUMBER  O(N/2)

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