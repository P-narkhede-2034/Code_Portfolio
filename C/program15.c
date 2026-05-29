// count the factor 

#include<stdio.h>

int CountNonFactor( int ino)
{
     int iCnt = 0; 
     int  iFrequency = 0;

     if(ino < 0)
     {
        ino = -ino;
     }

     for (iCnt = 1; iCnt < ino; iCnt ++)
     {
         if((ino % iCnt ) != 0)
         {
            iFrequency ++;
         }
     }
    
     return iFrequency;
}

int main()
{
    int iValue  = 0 , iRet = 0;

    printf("Enter the no :");
    scanf("%d",&iValue);

    iRet = CountNonFactor(iValue);
    printf("NON factors are : %d\n",iRet);

    return 0;
}