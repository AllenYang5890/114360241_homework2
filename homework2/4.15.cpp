#include<stdio.h>
#include<math.h> 
int main()
{
	int a,y;                 //設兩個整數變數 
	float r,s;               //設兩個浮點變數 
	printf("依序輸入本金及存放年數，程式將換算出利率10%%到12%%的複利結果 : \n");
	scanf("%d%d",&a,&y);     //使用者輸入數值並存入a、y 
	for(r=10;r<=12;r=r+0.5)  //利率循環的迴圈，每次讓利率多0.5% 
	{
		s=a*pow(1+r/100,y);  //計算複利 
		printf("%d元放%d年後的複利結果為%.0f(%.1f%%)\n",a,y,s,r);//印出結果 
	} 
	return 0;                //任一鍵返回 
} 
