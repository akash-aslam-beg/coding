#include <stdio.h>
int main(void)
{
    double Loan_amount, Interest_rate, years, monthly_amount, Total_amount;

    printf("Enter loan amount:  ");
    if (scanf("%lf", &Loan_amount) != 1) return 1;

    printf("Enter Interest rate:  ");
    if (scanf("%lf", &Interest_rate) != 1) return 1;

    printf("Enter years:  ");
    if (scanf("%lf", &years) != 1) return 1;

    if (Loan_amount < 0 || Interest_rate < 0 || years <= 0) return 1;
    Total_amount = Loan_amount + Loan_amount*Interest_rate/100*years;
    monthly_amount = Total_amount/(12*years);

    printf("Total amount to be paid is %0.2lf\n", Total_amount);
    printf("monthly amount to be paid is %0.2lf\n ", monthly_amount);

    return 0;
}
