#include <stdio>

int main (void) {
	
	int maxPoints;
	int CURR_ASSIGNMENT = 50;
	
	float totalPoints;
	float testPoints[CURR_ASSIGNMENT];
	
	printf("\nPlease enter points possible per assignment: ")
		scanf("%d", maxGrade);
	
	totalPoints = 0;
	CURR_ASSIGNMENT = 1;
	
	while (scanf("%lf", testPoints[CURR_ASSIGNMENT])) {
		printf("\nPlease enter assignment %d grade [q to quit]: ", CURR_ASSIGNMENT);
		
		totalPoints += testPoints[CURR_ASSUGNMENTS];
		++CURR_ASSIGNMENT;		
	}
	
	printf("%0.2f", totalPoints);
	
	return 0;
}	