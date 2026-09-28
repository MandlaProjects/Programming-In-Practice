#include <stdio.h>
#include <string.h>
int main() {
    char registration[20][20];
    int found = 0;
    char search[20];



    printf("Enter the registration numbers of 20 vehicles:\n");
    for (int i = 0; i < 20; i++) {
        printf("Vehicle registration %d: ", i + 1);
        scanf("%19s", registration[i]);
    }

    printf("\nThe registration numbers of the vehicles are:\n");
    for (int i = 0; i < 20; i++) {
        printf("%s\n", registration[i]);
    }

    printf("\nEnter the registration number to search for: ");
    scanf("%19s", search);
    for (int i = 0; i < 20; i++) {
        if (strcmp(registration[i], search) == 0) {
            found = 1;
            printf("\nRegistration number found at index %d.\n", i);
            break;
        }
    }

    if (!found) {
        printf("\nRegistration number not found.\n");
    }
    return 0;
}