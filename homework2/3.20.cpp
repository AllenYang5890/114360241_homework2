#include <stdio.h>

int main()                                                   //祘Α秨﹍ 
{      
    float a,b,c;                                             //砞疊翴跑计 
    printf("Enter # of hours worked (-1 to end): ");         //ㄏノ块计狦单(-1)碞ぃ磅︽癹伴 
    scanf("%f",&a);                                          //a 
    while (a!=-1)                                            //a=-1ぃ磅︽ 
	{
        printf("Enter hourly rate of the worker ($00.00): ");//块计b 
        scanf("%f",&b);

        if (a<=40)                                           //讽–秅计单40 
            c=a*b;                                           //羱锣传よΑ 
        else
            c=40*b+(a-40)*b*1.5;                             //羱锣传よΑ   

        printf("Salary is $%.2f\n\n",c);                     //块计翴ㄢ羱 
        printf("Enter # of hours worked (-1 to end): ");     //非称秈祘Α耞计琌(-1) 
        scanf("%f",&a);                                      
    }
    return 0;                                                //ヴ龄 
}
