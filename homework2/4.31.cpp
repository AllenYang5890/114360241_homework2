#include <stdio.h>
int main() 
{
    int a,b,c;                  //砞﹚俱计跑计 
    for (a=1;a<=5;a++)          // 场 
	{
        for (b=5;b>a;b--)       // フ 
		{    
            printf(" ");
        }
        for (c=1;c<=2*a-1;c++)  // 琍腹
		{
            printf("*");
        }
        printf("\n");           //北︽  
    }                           // 场 
    for (a=4;a>=1;a--) 
	{
        for (b=5;b>a;b--)       // フ
		{
            printf(" ");
        }
        for (c=1;c<=2*a-1;c++) // 琍腹
		{
            printf("*");
        }
        printf("\n");          //北︽ 
    }
    return 0;                  //ヴ龄 
}
