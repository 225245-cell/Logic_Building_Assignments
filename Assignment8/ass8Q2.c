//Write a program which accept width & height of rectangle from user and calculate its area. (Area Width * Height)
#include<stdio.h>
double RectArea(float fWidth, float fHeight)
{
    double fArea = 0.0;
    fArea = fWidth * fHeight;
    return fArea;
}
int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet=0.0;

    printf("Enter the Width and Height: ");
    scanf("%f %f",&fValue1,&fValue2);

    dRet=RectArea(fValue1,fValue2);
    printf("Area Of Rectangle is: %f ",dRet);
    return 0;
}