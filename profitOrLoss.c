#include <stdio.h>
int main()
{
    float amount,cp, sp,profitPer,lossPer,profit,loss;

    printf("enter the cp\n");
    scanf("%f",&cp);

    printf("enter the selling price\n");
    scanf("%f", &sp);

    amount=sp-cp;

    if (amount > 0)
    {
        printf("profit\n");
        printf("profit = %f\n",amount);
        profit = amount;
        profitPer = (profit/cp)*100;
        printf("profit percentage = %f\n",profitPer);

    }

    else if (amount < 0)
    {
        printf("loss\n");
        printf("loss percentage= %f\n", amount);
        loss=amount;
        lossPer = (loss/cp)*100;
        printf("loss percentage = %f\n",lossPer);
    }

    else if (amount == 0)
    {
        printf("no profit no loss");
    }
   
    return 0;
}
