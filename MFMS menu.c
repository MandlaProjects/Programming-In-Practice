#include <stdio.h>
#include <math.h> // Required for fabs() in budget comparison

// --- Function Prototypes ---
void displayMenu();
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
int searchEmployee(int id, int ids[], int size);

int main() {
    int choice;
    
    // Data variables for operations
    float vatAmount, basicSal, housingAllow, transportAllow, rev, exp, budgetBal;
    int empIDs[] = {101, 102, 103, 104, 105};
    int targetID, searchPos;

    do {
        displayMenu();
        
        // Handle input errors if the user types a letter instead of a number
        if (scanf("%d", &choice) != 1) {
            printf("\nError: Please enter a valid number.\n");
            while (getchar() != '\n'); // Clear bad input character from memory
            choice = 0;
            continue;
        }
        
        while (getchar() != '\n'); // Clear remaining newline out of buffer

        switch(choice) {
            case 1: // 1. Calculate VAT
                printf("\nEnter amount: ");
                scanf("%f", &vatAmount);
                printf("VAT: %.2f\n", calculateVAT(vatAmount));
                break;
 
            case 2: // 2. Calculate Salary
                printf("\nBasic salary: ");
                scanf("%f", &basicSal);
                printf("Housing allowance: ");
                scanf("%f", &housingAllow);
                printf("Transport allowance: ");
                scanf("%f", &transportAllow);
                printf("Gross salary: %.2f\n", calculateSalary(basicSal, housingAllow, transportAllow));
                break;
 
            case 3: // 3. Calculate Budget
                printf("\nEnter total revenue: ");
                scanf("%f", &rev);
                printf("Enter total expenses: ");
                scanf("%f", &exp);
                
                budgetBal = calculateBudget(rev, exp);
                printf("Financial Balance: %.2f\n", budgetBal);
                
                if (budgetBal > 0.001f) {
                    printf("Status: SURPLUS\n");
                } else if (budgetBal < -0.001f) {
                    printf("Status: DEFICIT\n");
                } else {
                    printf("Status: BALANCED\n");
                }
                break;

            case 4: // 4. Search Employee
                printf("\nEnter employee ID to search: ");
                scanf("%d", &targetID);
                searchPos = searchEmployee(targetID, empIDs, 5);
                
                if (searchPos != -1) {
                    printf("Employee found at position %d.\n", searchPos);
                } else {
                    printf("Employee not found.\n");
                }
                break;
 
            case 5: // 5. Exit
                printf("Goodbye.\n"); 
                break;
 
            default: 
                printf("Invalid choice. Please pick an option from 1 to 5.\n");
        } 
 
    } while(choice != 5); 
 
    return 0; 
}

// --- Function Definitions ---

// Displays the complete user menu
void displayMenu() {
    printf("\n==================================\n"); 
    printf("MUNICIPAL FINANCIAL MANAGEMENT\n"); 
    printf("==================================\n"); 
    printf("1. Calculate VAT\n"); 
    printf("2. Calculate Salary\n"); 
    printf("3. Calculate Budget\n"); 
    printf("4. Search Employee Database\n");
    printf("5. Exit\n"); 
    printf("Enter choice: ");
}

// Calculates VAT at a constant 15% rate
float calculateVAT(float amount) {
    return amount * 0.15f;
}

// Computes total gross earnings
float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

// Evaluates structural operational balance
float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

// Scans array for specific target record keys
int searchEmployee(int id, int ids[], int size) {
    for (int i = 0; i < size; i++) {
        if (ids[i] == id) {
            return i;
        }
    }
    return -1;
}
