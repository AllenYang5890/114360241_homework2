#include<stdio.h>
int main()             //主程式開始 
{
	float a,b,c,d;       //設四個浮點數變數 
	while (1)            //開始無限迴圈 
	{
		printf("Eater loan principal (-1 to end): ");           //讓使用者選擇是否結束或是繼續輸入 
		scanf("%f",&a);                                         //數值存入a 
		if  (a==-1) break;                                      //如果使用者輸入(-1)就跳出迴圈 
		else
			printf("Enter interest rate: ");                        //使用者輸入數值並存入b 
			scanf("%f",&b);
			printf("Enter term of the loan in days: ");             //使用者輸入數值並存入c 
			scanf("%f",&c);                                               
			printf("The interest charge is $%.2f\n\n",a*c*b/365);   //計算並輸出最終利息        
	} 
	return 0;                                                //輸入任一鍵反回 
}
