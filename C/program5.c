/*
   Step1: understand the problem statement 
   Step2: write the algortim
   Step3: decide the programming language
   Step4:write the program
   Step5: test the program
*/

/*
  ALGORITHM
    START
       Accept first no as no1
       Accept secound no as no2
       If the input as negative then convert it into positive
       Perform addition of no and no2
       Display the addition of screen 
    STOP
*/

////////////////////////////////////////////////////////////////////////
//
//    REUIRED HEADER FILE 
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//      Function Name : AdditionTwoNumber
//      Description:    It is used to perform addition
//      Input:          Float , Float
//      Output:         Float
//      Author:         Pranav Manoj Narkhede
//      Date:           09/10/2025
////////////////////////////////////////////////////////////////////////

float AdditionTwoNumber(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    
    //Updator
    if(fNo1 < 0.0f)
    {
         fNo1 = -fNo1;
    }

     if(fNo2 < 0.0f)
    {
         fNo2 = -fNo2;
    }

     fSum = fNo1 + fNo2;   //business logic
    return fSum;
}

////////////////////////////////////////////////////////////////////////
//  ENTRY POINT FUNCTION FOR THE APPLICATION
////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f , fRet = 0.0f;         
    
    printf("Enter first no :- ");
    scanf("%f",&fValue1);

    printf("Enter second no :- ");
    scanf("%f",&fValue2);

     fRet = AdditionTwoNumber(fValue1,fValue2);
    printf("addition is : %f\n",fRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////
//
//    TESTCASES SUCCESFULLY HANDELED BY THE APPLICATION
//
//   INPUT1 : 10.5        INPUT2 : 3.2     OUTPUT : 13.7
//   INPUT1 : -10.5       INPUT2 : 3.2     OUTPUT : 13.7
//   INPUT1 : 10.5        INPUT2 : -3.2    OUTPUT : 13.7
//   INPUT1 : 10.5        INPUT2 : 0.0     OUTPUT : 10.5
////////////////////////////////////////////////////////////////////////