#include <stdio.h>
#include <string.h>

int main() {
    char supplier[100];
    char email [100];
    char phone [100];
    char town[100];

    printf("Enter supplier name: ");
    fgets(supplier, sizeof(supplier), stdin);

    printf("Enter supplier email: ");
    fgets(email, sizeof(email), stdin);

    printf("Enter supplier phone number: ");
    fgets(phone, sizeof(phone), stdin);

    printf("Enter supplier town: ");
    fgets(town, sizeof(town), stdin);

    printf("\nSupplier Information:\n");
    printf("Name: %s", supplier);
    printf("Email: %s", email);
    printf("Phone: %s", phone);
    printf("Town: %s", town);
    
    return 0;
}