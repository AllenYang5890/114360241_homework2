#include<stdio.h>
int main() 
{
    int a,b,i,j;                            //砞俱计跑计         
    printf("Enter length: ");               //块a 
    scanf("%d", &a);                  
    printf("Enter width: ");                //块糴b 
    scanf("%d", &b);
    for (i=1;i<=a;i++)                      //北 
	{               
        for (j=1;j<=b;j++)                  //北糴 
		{  
            if (i == 1 || i == a || j == 1 || j == b)//材程┪–材程じ常 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");                               // 传︽
    }
    return 0;                                       //ヴ龄 
}
