#include <stdio.h>

int main() {
    int choice;
    double temp, result;
    
    printf("=== Temperature Converter ===\n\n");
    printf("Choose conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temp);
        result = (temp * 9/5) + 32;
        printf("%.2lf°C = %.2lf°F\n", temp, result);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temp);
        result = (temp - 32) * 5/9;
        printf("%.2lf°F = %.2lf°C\n", temp, result);
    } else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}
