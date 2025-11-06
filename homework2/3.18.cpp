#include<stdio.h>
int main()             //主程式開始 
{
	float a;             //設一個浮點數變數 
	while (1)            //開始無限迴圈 
	{
		printf("Eater sales in dollars (-1 to end): ");     //讓使用者選擇是否結束或是繼續輸入 
		scanf("%f",&a);                                      //數值存入a 
		if  (a==-1) break;                                   //如果使用者輸入(-1)就跳出迴圈 
		else
			a=a*0.09+200; 
			printf("Salar is: $%.2f\n\n",a);                     //輸出薪水                 
	} 
	return 0;                                             //輸入任一鍵反回 
}
