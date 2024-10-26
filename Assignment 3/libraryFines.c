//Christian Vazquez Garcia
//9/25/2024
//Library Fines Calculator
//Due date: 9/30/2024


#include <stdio.h>
#include <stdbool.h>
int main()
{

    double bookValue;
    int daysAgreed;
    int daysKept;
    int daysOverdue;
    double totalFine;

    bool bookLate = false;

    //console input promt
        
    printf("Welcome to the Tulsa Country Library overdue fine calculator.\n");

    printf("Enter the value of the book: ");
    scanf("%lf", &bookValue);

    printf("Enter the number of days the book was borrowed as agreed: ");
    scanf("%d", &daysAgreed);

    printf("Enter the number of days the book was actually kept: ");
    scanf("%d", &daysKept);

    //check if book is late or not 

    if (daysAgreed < daysKept){
        bookLate = true;
    }

    //error message 

    if (bookValue <= 0 || daysAgreed <= 0 || daysKept <= 0){
        printf("Input values must be above 0\n");
    }    

    //late fee calculation

    else if (bookLate){
        daysOverdue = daysKept - daysAgreed;
        if (daysOverdue < 8){
            totalFine = (double) (daysOverdue) * 0.25;
            if (totalFine < bookValue){
                printf("The fine for the overdue book is: $%0.02lf", totalFine);    //checking fee does not exceed book value 
            }
            else {
                printf("The fine for the overdue book is: %0.02lf", bookValue);     //checking fee does not exceed book value      
            }
        }       

        else if (daysOverdue < 22){
            daysOverdue = daysAgreed  - 7;              //compounding fees
            totalFine   = 3.5;                          //compounding fees
            totalFine   = (double) (daysOverdue) * 0.50;
            if (totalFine < bookValue){
                printf("The fine for the overdue book is: $%0.02lf", totalFine);    //checking fee does not exceed book value
            }
            else {
                printf("The fine for the overdue book is: %0.02lf", bookValue);     //checking fee does not exceed book value
            }
        }            

        else if (daysOverdue < 31){
            daysOverdue = daysAgreed - 21;              //compounding fees
            totalFine   = 10;                           //compounding fees
            totalFine   = (double) (daysOverdue) * 1.00;
            if (totalFine < bookValue){
                printf("The fine for the overdue book is: $%0.02lf", totalFine);    //checking fee does not exceed book value
            }
            else {
                printf("The fine for the overdue book is: %0.02lf", bookValue);     //checking fee does not exceed book value
            }
        }            

        else {
            daysOverdue = daysOverdue - 28;             //compounding fees
            totalFine   = 18;                           //compounding fees
            totalFine   = (double) (daysOverdue) * 2.00;
            if (totalFine < bookValue){
                printf("The fine for the overdue book is: $%0.02lf", totalFine);    //checking fee does not exceed book value
            }
            else {
                printf("The fine for the overdue book is: %0.02lf", bookValue);     //checking fee does not exceed book value
            }
        }                 
    }

    //Message if there is no late fee

    else {
        printf("No late fee");
    }


    return 0;
}