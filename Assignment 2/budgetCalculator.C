//Christian Emmanuel Vazquez Garcia
//T20271522
//9/12/2024 (due date 9/15/2024)
//C Language
//Budget Calculator

#include <stdio.h>
#include <math.h>

int main (void) 
{

    double retirementSavings;
    double monthlyIncome;
    double mortgageRent;
    double phoneBill;
    double electricBill;
    double waterTrash;
    double internetTv;
    double gasBill;
    double studentLoan;
    double transportation;
    double otherDebt;
    double healthInsurance;
    double food;
    double remainingBalance;
    char   percent;

    percent = '%';

    printf("\nWelcome to Christian's monthly budget calculator!\n\n");
    printf("Please enter MONTHLY values below as dollars and cents, example (99.99)\n\n");
    printf("Enter monthly income           :$");   
        scanf("%lf", &monthlyIncome);
            remainingBalance  = monthlyIncome;
            retirementSavings = monthlyIncome * 0.15;

    printf("\n\n15%c IRA or 401K cost is        :$%0.2lf", percent, retirementSavings);
            remainingBalance = remainingBalance - retirementSavings;

    printf("\nEnter cost for mortgage/rent   :$");
        scanf("%lf", &mortgageRent);
            remainingBalance = remainingBalance - mortgageRent;


    printf("Enter cost for cell phone      :$");
        scanf("%lf", &phoneBill);
            remainingBalance = remainingBalance - phoneBill;


    printf("Enter electric bill            :$");
        scanf("%lf", &electricBill);
            remainingBalance = remainingBalance - electricBill;


    printf("Enter city water/trash         :$");
        scanf("%lf", &waterTrash);
            remainingBalance = remainingBalance - waterTrash;


    printf("Enter internet/tv subscription :$");
        scanf("%lf", &internetTv);
            remainingBalance = remainingBalance - internetTv;


    printf("Enter natural gas bill         :$");
        scanf("%lf", &gasBill);
            remainingBalance = remainingBalance - gasBill;


    printf("Enter student loan payment     :$");
        scanf("%lf", &studentLoan);
            remainingBalance = remainingBalance - studentLoan;


    printf("Enter transportation/car cost  :$");
        scanf("%lf", &transportation);
            remainingBalance = remainingBalance - transportation;


    printf("Enter all other debt payment   :$");
        scanf("%lf", &otherDebt);
            remainingBalance = remainingBalance - otherDebt; 


    printf("Enter health insurance cost    :$");
        scanf("%lf", &healthInsurance);
            remainingBalance = remainingBalance - healthInsurance;


    printf("Groceries and dining           :$");
        scanf("%lf", &food);
            remainingBalance = remainingBalance - food;


    printf("\nAmount remaining               :$%0.2lf\n", remainingBalance);


    return 0; 
}
