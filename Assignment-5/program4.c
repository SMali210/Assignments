#include<stdio.h>

int SumNonFactor(int iNo)
{
      int iCnt = 0;
      int iSum = 0;
      for(iCnt = 1; iCnt <= iNo;iCnt++)
      {
            if((iNo % iCnt) != 0)
            {
                  iSum = iSum + iCnt;
            }
      }
      return iSum;
}
int main()
{
      int iValue = 0;
      int iRet = 0;
      printf("Enter the Number :");
      scanf("%d",&iValue);

     iRet = SumNonFactor(iValue);

     printf("Summation of Non factors are : %d\n",iRet);
      return 0;
}
