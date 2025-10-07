#include<stdio.h>


int circle(double ino1,float ino2)

{

    double isum=0;
    isum = ino1*ino1*ino2;


    return isum;

}

double main ()
{
    double R=0 , Area=0;
   const float PI = 3.14;

    printf("enter redis  :\n");
    scanf("%lf",&R);
   // printf("enter const pi value :\n");
  //  scanf("%lf",&PI);

    Area = circle (R,PI);
    printf("Area is  :%lf",Area);


    return 0;
}