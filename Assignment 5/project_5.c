/*
Christian Vazquez Garcia
T20271522
C Language
*/
#include <stdio.h>

int main (void) {
	
	int pointsPossible;
	int totalPointsPossible;
	int CURR_ASSIGNMENT;

	char percent = '%';
	
	float testPoints[50];
	float totalPoints = 0;
	float pointPercentage;

	printf("\n	---Assignment Grader Tool---\n");
	
	printf("\nPlease enter the points possible per assignment: ");

	CURR_ASSIGNMENT = 0;

	if (scanf("%d", &pointsPossible)){

		totalPointsPossible = pointsPossible;
	
	printf("\nPlease enter assignment %d grade [q to quit]: ", CURR_ASSIGNMENT + 1);


		while (scanf("%f", &testPoints[CURR_ASSIGNMENT])) {
			if (testPoints[CURR_ASSIGNMENT] > pointsPossible){
				printf("\nError: Grade higher than possible grade for the assignment.");
			}
			else {
				totalPoints = totalPoints + testPoints[CURR_ASSIGNMENT];
				CURR_ASSIGNMENT++;		
			}

			printf("\nPlease enter assignment %d grade [q to quit]: ", CURR_ASSIGNMENT + 1);

		}

		int CURR_COUNT;

		printf("\nYou entered %d assignment grades as follows:\n", CURR_ASSIGNMENT);

		for (CURR_COUNT = CURR_ASSIGNMENT - 1; CURR_COUNT >= 0; --CURR_COUNT){

			pointPercentage = (testPoints[CURR_COUNT] / pointsPossible) * 100;

			printf("\nAssignment %d grade was %1.f points out of %d : %1.f%c - ", CURR_COUNT + 1, testPoints[CURR_COUNT], pointsPossible, pointPercentage, percent);

			if (pointPercentage > 89) {
				printf("A\n");
			}
			else if (pointPercentage > 79) {
				printf("B\n");
			}
			else if (pointPercentage > 69) {
				printf("C\n");
			}
			else if (pointPercentage > 59){
				printf("F\n");
			}
			else {
				printf("D\n");
			}
		}

		totalPointsPossible = pointsPossible * CURR_ASSIGNMENT;

		pointPercentage = (totalPoints / totalPointsPossible) * 100;
		

		printf("\n%1.f points out of %d possible for an overall grade of %1.f%c - ", totalPoints, totalPointsPossible, pointPercentage, percent);
		if (pointPercentage > 89) {
			printf("A\n");
		}
		else if (pointPercentage > 79) {
			printf("B\n");
		}
		else if (pointPercentage > 69) {
			printf("C\n");
		}
		else if (pointPercentage > 59){
			printf("F\n");
		}
		else {
			printf("D\n");
		}
	
	}
	return 0;
}	
