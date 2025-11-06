#include<stdio.h>
int main()
{
	int a;                                            //設定一個整數變數 
	float R;                                          //設一個浮點數 
	printf("請輸入欲查詢薪資的職位代號\nManagers--1\nHourly Workers--2\nCommission Workers--3\nPieceworkers--4\n");
	scanf("%d",&a);                                   //將使用者輸入對應的職位號碼存入a中 
	switch (a)                                        //選擇結構 
	{                               
		case 1:                                       //當a=1時 
			float b;
			printf("請輸固定週薪: ");
			scanf("%f",&b);
			R=b;                                      //根據不同職位計算其薪資 
			break; 
		case 2:                                       //當a=2時 
			float c,d;
			printf("請輸入原本時薪及本週總工時: ");
			scanf("%f%f",&c,&d);
			if (d<=40)                                //如果工作時間小於等於40 
				R=c*d;                                //根據不同職位計算其薪資 
			else
				R=c*40+(d-40)*c*1.5;                  //否則 
			break;
		case 3:                                       //當a=3時 
			float e;
			printf("請輸入本週總銷售額: ");
			scanf("%f",&e);
			R=250+0.057*e;                            //根據不同職位計算其薪資 
			break;
		case 4:                                       //當a=4時
			float f,g;
			printf("請輸入單件計價與本週完成件數: ");
			scanf("%f%f",&f,&g);
			R=f*g;                                    //根據不同職位計算其薪資 
			break;
		default:
			printf("請重新輸入");                     //a不等於上述任何狀況時執行 
			break; 	 
	} 
	printf("本週應領薪資: $%.2f\n",R);                //最後統一輸出最後薪資 
	return 0;                                         //按任一鍵返回 
} 
