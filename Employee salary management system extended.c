#include <stdio.h>


int main() {
    
    float salaries[50]; 
    float total = 0;
    float average = 0;
    float highest = 0;
    float lowest = 0;
    float search;
    float temp;
    int found = 0;

    
    printf("=== MUNICIPALITY EMPLOYEE SALARY MANAGEMENT SYSTEM ===\n\n");
    for (int i = 0; i < 50; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

       
        total += salaries[i];

        
        if (i == 0) {
            highest = salaries[i];
            lowest = salaries[i];
        }

        if (salaries[i] > highest) {
            highest = salaries[i];
        }

        if (salaries[i] < lowest) {
            lowest = salaries[i];
        }
    }

    
    average = total / 50;

    
    printf("\n--- Unsorted Salary List ---\n");
    for (int i = 0; i < 50; i++) {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    
    printf("\n--- Financial Summary Report ---\n");
    printf("Total Salary Expenditure: %.2f\n", total);
    printf("Average Salary:           %.2f\n", average);
    printf("Highest Salary:           %.2f\n", highest);
    printf("Lowest Salary:            %.2f\n", lowest);

    
    printf("\nEnter a salary to search for: ");
    scanf("%f", &search);

    for (int i = 0; i < 50; i++) {

        if (salaries[i] == search) {
            printf("Salary %.2f found for Employee %d (Index %d)\n", search, i + 1, i);
            found = 1;
        }
    }
    if (!found) {
        printf("Salary %.2f was not found in the records.\n", search);
    }

   
    for (int i = 0; i < 50 - 1; i++) {
        for (int j = 0; j < 50 - i - 1; j++) {
            if (salaries[j] > salaries[j + 1]) {
                temp = salaries[j];
                salaries[j] = salaries[j + 1];
                salaries[j + 1] = temp;
            }
        }
    }

    
    printf("\n--- Sorted Salary List (Lowest to Highest) ---\n");
    for (int i = 0; i < 50; i++) {
        printf("%.2f\n", salaries[i]);
    }

    return 0;
}
