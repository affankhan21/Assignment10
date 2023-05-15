#include<stdio.h>
double SquareMetre(int iNo)
{


double dResult=0.0;
dResult=iNo*0.0929;
return dResult;
}

int main()
{

int iValue=0;
double dRet=0.0;
printf("enter area in square feet:\n");
scanf("%d",&iValue);
dRet=SquareMetre(iValue);
printf("the coversion of %d square feet into square meter is %lf",iValue,dRet);
return 0;


}