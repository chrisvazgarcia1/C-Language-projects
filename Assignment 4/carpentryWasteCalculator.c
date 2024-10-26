/*
Christian Vazquez Garcia
T20271522
C Language 
Assignment 4
Carpentry Waste Calculator
*/
#include<stdio.h>

int main()
{
    char len_char = '-';

    int stockLength;
    int cutLength;
    int waste;
    
    int totalWaste = 0;
    int count = 0;

    float avgWaste = 0.0;

    printf("\nWelcome to Custom Carpentry's Board Stock and Waste Calculator\n");

    printf("\nPlease enter the original stock length in ft (8 ft, 10 ft, 12 ft & 16ft)\n(q to quit); ");


    while(scanf("%d", &stockLength)){

        int cur_length = 0;

        printf("\nPlease enter the finished (cut) length in ft: ");
            scanf("%d", &cutLength);
        printf("\n");

        if ((stockLength >= cutLength) && (stockLength == 8 || stockLength == 10 || stockLength == 12 || stockLength == 16)) {
            waste = stockLength - cutLength;

            printf("You entered a stock length of %d ft with a finished length of %d ft with a waste of %d ft.\n", stockLength, cutLength, waste);

            for(cur_length = 0; cur_length < stockLength; cur_length++){
                printf("%c", len_char);
            }

                printf(" (stock length) ");

            for(cur_length = 0; cur_length < cutLength; cur_length++){
                printf("%c", len_char);
            }

                printf (" (cut length) ");

            for(cur_length = 0; cur_length < waste; cur_length++){
                printf("%c", len_char);
            }

                printf(" (waste) \n");

            count++;
            totalWaste = totalWaste + waste;
                
        }

        else  if (stockLength < cutLength){
            printf("\nError: Stock length too small.\n");
        }

        else {
            printf("Error: Stock length unavailable.");
        }

        printf("\nPlease enter the original stock length in ft (8 ft, 10 ft, 12 ft & 16ft)\n(q to quit); ");
    }

    avgWaste = (float) totalWaste / (float) count;

    if(count > 0){
        printf("\nYou completed %d calculations with a total waste of %d ft averaging %.1f ft per cut\n", count, totalWaste, avgWaste);
    }

    printf("\nThank you for using our Custom Carpentry's Board Stock and Waste Calculator.\n");
        

    return 0;
}