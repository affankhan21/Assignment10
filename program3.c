#include<stdio.h>
int KToM(int iNo)
{
int iConvert=0;
iConvert=iNo*1000;
return iConvert;


}



int main()
{

int iValue=0,iRet=0;
printf("enter distance in kilometre:\n");
scanf("%d",&iValue);
iRet=KToM(iValue);
printf("the distance of %d kilometetre is %d metres",iValue,iRet);


    return 0;
}