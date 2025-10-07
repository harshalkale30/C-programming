#include<stdio.h>


int Addition(int no1 ,int no2)
  {   

      int iSum=0;
      iSum=no1+no2;

      return iSum;

  }    


int main()
{

    int iValue1 =0; 
    int iValue2 =0;
    int iAns =0;

    printf("enter first number:\n");
    scanf("%d",&iValue1);

    printf("enter Secound number:\n");
    scanf("%d",&iValue2);

    iAns=Addition(iValue1,iValue2);

    printf("additin is %d ",iAns);


    return 0;

}