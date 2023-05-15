#include<stdio.h>
double FHTCS(float fNo1)
{
double dResult=0.0;
 dResult = ( (fNo1-32) * 5)/9;
 return dResult;

}

int main()
{
float fValue=0.0;
double dRet=0.0;
printf("enter value in fahrenheit:\n");
scanf("%f",&fValue);
dRet=FHTCS(fValue);
printf("the coversion of %f fahrenheit into celsius is  %lf",fValue,dRet);
    return 0;
}