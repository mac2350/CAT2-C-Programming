#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that enters hours worked and hourly wage and calculates the gross pay,tax and
            net profit and provides them as output
*/
int main()
{
    int hours_worked;
    int hourlyWage;
    int grossPay;
    int tax;
    int net;
    printf("Hours worked?: ");
    scanf("%d",&hours_worked);

    printf("Hourly wage?: ");
    scanf("%d",&hourlyWage);
    if(hours_worked<=0 || hourlyWage<=0)
    {
        printf("GO TO WORK");
    }
    else if(hours_worked<=40)
    {
        grossPay=hourlyWage*hours_worked;
    }
    else 
    {
        int overtime=hours_worked-40;
        grossPay=(hourlyWage*hours_worked)+(overtime*hours_worked);
    }

    

    if(grossPay<=600)
    {
        tax=15/100*grossPay;
    }
    else
    {
        tax=(15/100*grossPay)+((grossPay-600)*20/100);
    }
    net=grossPay-tax;

    
    printf("%d\n",grossPay);
    printf("%d\n",tax);
    printf("%d\n",net);


return 0;
}
