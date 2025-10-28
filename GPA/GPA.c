#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main(){
    int numSubjects;
    float gradepoint[20];
    int credits[20];
    float totalpoints =0;
    int totalcredits =0;
    float CGPA;

    printf("Welcome to CGPA calculator!\n");
    printf("Enter number of subjects: ");
    scanf("%d", &numSubjects);
    printf("You entered: %d subjects\n", numSubjects);
    
    for (int i=0; i <numSubjects;i++) {
        printf("\nSubject %d\n", i+1);
        printf("Enter Grade Point(0=10): ");
        scanf("%f", &gradepoint[i]);
        printf("Enter credits ");
        scanf("%d", &credits[i]);

    }
    for (int i=0;i <numSubjects;i++){
        totalpoints =totalpoints + (gradepoint[i]*credits[i]);
        totalcredits = totalcredits + credits[i];
    }
    CGPA= totalpoints/totalcredits;
    printf("\n========== RESULT ==========\n");
    printf("Total Grade Points: %.2f\n", totalpoints);
    printf("Total Credits: %d\n", totalcredits);
    printf("Your CGPA: %.2f\n", CGPA);
    printf("============================\n");    
    return 0;
}

