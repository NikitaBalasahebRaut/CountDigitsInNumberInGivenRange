/*
Problem statement : 7.3
Accept number from user and count digits in between 3 to 7.
 
 Input : 1278   Output : 0
 Input : 45228   Output : 2
 Input : 1078   Output : 0
 Input : 22222   Output : 0
 Input : 5379   Output : 1

 */
#include<stdio.h>

int CountRang(int iValue)
{
	int iDigit = 0;
	int iCnt = 0;
	
  if(iValue < 0)
  {
      iValue = -iValue;
  }
 
  while(iValue != 0)
  {
     iDigit = iValue % 10;
	 
	 if((iDigit > 3)&& (iDigit <7))
	 {
		 iCnt++;
	 }
	 
	 iValue = iValue / 10;
  }	  
  return iCnt;
}

int main()
{
 int iNo = 0;
 int iRet = 0;
 
 printf("Enter The Number \n");
 scanf("%d",&iNo);
 
 iRet = CountRang(iNo);
 
 printf("Number of elements between given range: %d \n",iRet);


return 0;
}

/*

D:\ProgramTopicWise\LB\ProblemsOnDigits\CountDigitsInRange>myexe
Enter The Number
1278
Number of elements between given range: 0

D:\ProgramTopicWise\LB\ProblemsOnDigits\CountDigitsInRange>myexe
Enter The Number
5379
Number of elements between given range: 1

*/