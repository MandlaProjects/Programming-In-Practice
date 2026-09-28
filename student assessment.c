#include <stdio.h>
int main(){
    char StudentName[50];
    float Test1;
    float Test2;
    float assignmentMark;
    float TotalMark;
    float average;

    printf("Enter Student Name: ");
    scanf("%s", StudentName);

    printf("Enter Test 1 Mark: ");
    scanf("%f", &Test1);

    printf("Enter Test 2 Mark: ");
    scanf("%f", &Test2);

    printf("Enter Assignment Mark: ");
    scanf("%f", &assignmentMark);

    TotalMark = Test1 + Test2 + assignmentMark;
    printf("Total Mark: %.2f\n", TotalMark);

    average = TotalMark / 3;
    printf("Average Mark: %.2f\n", average);

    if (average >=75 && average <=100){
        printf("Student Name: %s\n", StudentName);
        printf("Distinction\n");
    } else if (average >=60 && average <=74){
        printf("Student Name: %s\n", StudentName);
        printf("Credit\n");
    } else if (average >=50 && average <=59){
        printf("Student Name: %s\n", StudentName);
        printf("Pass\n");
    } else if (average >=0 && average <=49){
        printf("Student Name: %s\n", StudentName);
        printf("Fail\n");
    } else {
        printf("Invalid Mark\n");
    }
}
