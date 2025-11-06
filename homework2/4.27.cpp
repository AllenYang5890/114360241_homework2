#include<stdio.h>
int main()
{
	int a,b,c;                      //設三個整數 
	for(a=1;a<=500;a++)             //決定a數值(從1到500)暴力測試 
		for(b=1;b<=500;b++)         //決定b數值(從1到500)暴力測試 
			for(c=1;c<=500;c++)     //決定c數值(從1到500)暴力測試  
				if(a*a+b*b==c*c && c>b && b>a ) //要滿足畢氏定理的條件並且c>b>a避免重複組合 
				printf("%d\t%d\t%d\n",a,b,c);   //上述條件滿足就輸出一行值 
	return 0;                       //按任一鍵返回 
}
