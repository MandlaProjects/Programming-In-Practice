#include <stdio.h>
int main()
{
    char Municipality[50];
    char Mayor[50];
    int Population;

    printf("Welcome to Windoek Municipality\n");

    printf("Enter Municipality Name: ");
    scanf("%49s", Municipality);
    printf("Enter Mayor: ");
    scanf("%49s", Mayor);
    printf("Enter Population: ");
    scanf("%d", &Population);

    printf("\n---------------------------------\n");
    printf("Municipality : %s\n", Municipality);
    printf("Mayor: %s\n", Mayor);
    printf("Population: %d\n", Population);
    

    return 0;
}