#include <stdio.h>
int main () {
    double subject1;
    double subject2;
    double subject3;
    double subject4;
    double  total;
    double avg;

    printf("Enter marks for subject1:\n");
    scanf("%lf", &subject1);
    if (subject1 < 0 || subject1 > 100) {
        printf("Invalid marks\n");
        return 0;
    }
    printf("Enter marks for subject2\n");
    scanf("%lf", &subject2);
    if (subject2 < 0 ||subject2 > 100) {
        printf("Invalid marks\n");
        return 0;
    }
    printf("Enter marks for subject3\n"); 
    scanf("%lf", &subject3);
    if (subject3 < 0 || subject3 > 100) {
        printf("Invalid marks\n");
        return 0;
    }
    printf("Enter marks for subject4\n");
    scanf("%lf", &subject4);
    if (subject4 < 0 || subject4 > 100) {
        printf("Invalid marks\n");
        return 0;
    }
    total = subject1 + subject2 + subject3 + subject4;
    avg = total / 4;

    printf("Your average is %.2lf\n", avg);


    if (avg >= 70) {
        printf("Your Grade is: A");
        return 0;
    }
    else if (avg >= 60 && avg < 70) {
        printf("Your Grade is: B\n");
        return 0;
    }
    else if (avg >= 50 && avg < 60) {
        printf("Your Grade is: C\n");
        return 0;

    }
    else if (avg >= 40 && avg < 50) {
        printf("Your Grade is: D\n");
        return 0;
    }
    else if (avg < 40 ) {
        printf("Your Grade is: F\n");
        return 0;
    }
    
    



}