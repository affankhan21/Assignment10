#include<stdio.h>

double CircleArea(float fNo)
{
double dArea=0.0;
float fPi=3.14;

dArea=fPi*fNo*fNo;

return dArea;

}




int main()
{
float fValue=0.0;
double dRet=0.0;
printf("ENTER RADIUS FOR CIRCLE:\n");
scanf("%f",&fValue);
dRet=CircleArea(fValue);
printf("Area of circle is %lf",dRet);


    return 0;
}