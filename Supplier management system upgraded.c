#include <stdio.h>
#include <string.h>

int main() {

    char names[5][100];
    char emails[5][100];
    char phones[5][50];
    char towns[5][100];

    int supplierCount = 0; 
    int choice;
    char searchName[100];
    int found;

    do {
        printf("\n===================================\n");
        printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
        printf("===================================\n");
        printf("1. Add Supplier (%d/5)\n", supplierCount);
        printf("2. View All Suppliers\n");
        printf("3. Search Supplier by Name\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            choice = 0;
            continue;
        }

        
        while (getchar() != '\n'); 

        switch(choice) {
            case 1:
                if (supplierCount >= 5) {
                    printf("\nError: Supplier database is full! Cannot add more than 5.\n");
                    break;
                }

                printf("\n--- Registering Supplier %d ---\n", supplierCount + 1);
                
                printf("Enter Name: ");
                scanf("%99[^\n]", names[supplierCount]);
                while (getchar() != '\n');

                printf("Enter Email: ");
                scanf("%99[^\n]", emails[supplierCount]);
                while (getchar() != '\n');

                printf("Enter Phone: ");
                scanf("%49[^\n]", phones[supplierCount]);
                while (getchar() != '\n');

                printf("Enter Town: ");
                scanf("%99[^\n]", towns[supplierCount]);
                while (getchar() != '\n');

                printf("\nSupplier '%s' successfully added!\n", names[supplierCount]);
                supplierCount++; 
                break;

            case 2: 
                if (supplierCount == 0) {
                    printf("\nNo suppliers registered yet.\n");
                    break;
                }

                printf("\n--- REGISTERED SUPPLIERS LIST ---\n");
                for (int i = 0; i < supplierCount; i++) {
                    printf("\nSupplier %d:\n", i + 1);
                    printf("  Name:  %s\n", names[i]);
                    printf("  Email: %s\n", emails[i]);
                    printf("  Phone: %s\n", phones[i]);
                    printf("  Town:  %s\n", towns[i]);
                }
                break;
            
            case 3: 
                if (supplierCount == 0) {
                    printf("\nDatabase is completely empty.\n");
                    break;
                }

                printf("\nEnter supplier name to search for: ");
                scanf("%99[^\n]", searchName);
                while (getchar() != '\n');

                found = 0;
                printf("\nSearching records...\n");
                for (int i = 0; i < supplierCount; i++) {
                   
                    if (strcmp(names[i], searchName) == 0) {
                        printf("\nMatch Found at Position %d!\n", i + 1);
                        printf("  Name:  %s\n", names[i]);
                        printf("  Email: %s\n", emails[i]);
                        printf("  Phone: %s\n", phones[i]);
                        printf("  Town:  %s\n", towns[i]);
                        found = 1;
                        break; 
                    }
                }

                if (!found) {
                    printf("No record found for a supplier named '%s'.\n", searchName);
                }
                break;

            case 4:
                printf("\nExiting program. Data discarded.\n");
                break;

            default:
                printf("\nInvalid choice. Select an option from 1 to 4.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
