// count the factor  and non factor

#include<stdio.h>

void CountFactorNonFactor( int ino)
{
     int iCnt = 0; 
     int  iFrequency1 = 0 , iFrequency2 = 0;

     if(ino < 0)
     {
        ino = -ino;
     }

     for (iCnt = 1; iCnt < ino; iCnt ++)
     {
         if((ino % iCnt ) == 0)
         {
            iFrequency1++;
         }
         else
         {
            iFrequency2++;
         }
     }
    
     printf("NO of factor are :%d\n",iFrequency1);
     printf("NO of non factor are :%d\n",iFrequency2);
}

int main()
{
    int iValue  = 0 ;

    printf("Enter the no :");
    scanf("%d",&iValue);


    CountFactorNonFactor(iValue);

    return 0;
}