#include<stdio.h>
 int main()
 {
    int iArry[5] ={10,20,30,40,50};
     
    printf("%d\n ",iArry);
    printf("%d \n",&iArry);
    printf("%d \n",iArry[2]);
    printf("%d\n",sizeof(iArry));
    printf("%d\n",iArry+1);
 printf("%d\n",&iArry+1);
    return 0;
 }