#include<stdio.h>
int main()             //主程式開始 
{
	int a;             //設一個整數變數 
	float b,c,d,e,f;   //設五個浮點數變變數 
	while (1)          //開始無限迴圈 
	{
 		printf("Eater account number (-1 to end): ");     //讓使用者選擇是否結束或是繼續輸入 
 		scanf("%d",&a);                                   //數值存入a 
 	 	if  (a==-1) break;                                //如果使用者輸入(-1)就跳出迴圈 
  		else
  			printf("Enter beginning balance: ");              //輸入數值 
  			scanf("%f",&b);                                   //存入b 
  			printf("Enter total charges: ");                  //輸入數值 
			scanf("%f",&c);                                   //存入c 
  			printf("Enter total credits: ");                  //輸入數值 
 			scanf("%f",&d);                                   //存入d      
  			printf("Enter credit limit: ");                   //輸入數值 
  			scanf("%f",&e);                                   //存入e 
  			f=b+c-d;                                   //計算new balance
  			if (f>e)                                          //如果此數值大於限制 
  			{
  				printf("Account:      %d\nCredit limit: %.2f\nBalance:      %.2f\n",a,e,f);
   				printf("Credit Limit Exceeded.\n");           //輸出帳號詳情並印出信用額度 
  			}
  			else
  				printf("\n");                                  
 	} 
	return 0;                                             //輸入任一鍵反回 
}
