#include <stdio.h>

int main(){
    float salary[50]; 
    float lowest = 0;
    float highest = 0;
    float average = 0;
    float total = 0;
    float search;
    int found = 0;



   for (int i = 1; i <50; i++) { 
 
        printf("Enter salary for employee %d: ", i); 
        scanf("%f", &salary[i]); 
 
        total = total + salary[i]; 
 
        if (i == 0) { 
            highest = salary[i]; 
            lowest = salary[i]; 
        } 
 
 
        if (salary[i] > highest) { 
            highest = salary[i]; 
        } 
 
        if (salary[i] < lowest) { 
            lowest = salary[i]; 
        } 

    
}
 
    average = total / 50; 
 
    printf("\n--- Salary Report ---\n"); 
    printf("Average salary: %.2f\n", average); 
    printf("Highest salary: %.2f\n", highest); 
    printf("Lowest salary: %.2f\n", lowest); 

    printf("Enter a salary to search for: ");
    scanf("%f", &search);

for (int i = 0; i < 50; i++) {
    if (salary[i] == search) {
        found = 1;
        printf("Salary %.2f found at index %d\n", search, i);
        break;
    }
}
if (!found) {
    printf("Salary %.2f not found in the array.\n", search);
}

return 0;
}