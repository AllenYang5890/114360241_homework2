#include<stdio.h>
int main() 
{
    int a,b;                    //宣告兩個整數變數 
    printf("(A)           (B)          (C)           (D)\n");//印出題號 
    for (a=1;a<=10;a++)         //控制要印幾列 
	{
        for (b=1;b<=a;b++)      //印出(A)圖形，第一列一顆第二列兩顆依此類推 
		{
            printf("*");        
        }
        for (b=a;b<10;b++)      //填補與(B)之間的空格 
		{
            printf(" ");        
        }
        printf("    ");           //(A)和(B)間四個固定空白 
        for (b=10;b>=a;b--) 
		{
            printf("*");
        }
        for (b=1;b<a;b++)       //印出(B)圖形，第一列十顆第二列九顆依此類推   
        { 
			printf(" ");
        } 
        printf("    ");           //(B)和(C)間四個固定空白  
        for (b=1;b<a;b++) 
		{
            printf(" ");
        }
        for (b=10;b>=a;b--)     //印出(C)圖形，先印空白再印星號 
		{     
            printf("*");
        }
        printf("    ");           //(C)和(D)間四個固定空白  
        for (b=10;b>a;b--) 
		{
            printf(" ");
        }
        for (b=1;b<=a;b++)      //印出(D)圖形先印空白再印星號  
		{    
            printf("*");
        }
        printf("\n"); // 換行
    } 
    return 0;
}
