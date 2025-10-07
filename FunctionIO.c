#include<stdio.h>
float Multi(float fno1 ,float fno2)
{
   float fSum=0;
   fSum = fno1*fno2;

   return fSum;

}

int main()

{
 float fValue1=0, fValue2=0 ,fAns=0;
  
 printf("Enter first number:\n");
 scanf("%f",&fValue1);

 printf("enter Secound Number:\n");
 scanf("%f",&fValue2);

  fAns=Multi(fValue1,fValue2);

  printf("Multiplication is :%f",fAns);
 return 0;
}
