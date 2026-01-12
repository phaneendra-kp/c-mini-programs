#include <stdio.h>

int main() {
    int choice;
    double value, result;
    
    printf("=== Unit Converter ===\n\n");
    printf("1. Kilometers to Miles\n");
    printf("2. Miles to Kilometers\n");
    printf("3. Kilograms to Pounds\n");
    printf("4. Pounds to Kilograms\n");
    printf("5. Celsius to Fahrenheit\n");
    printf("6. Fahrenheit to Celsius\n");
    printf("Enter choice (1-6): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter kilometers: ");
            scanf("%lf", &value);
            result = value * 0.621371;
            printf("%.2lf km = %.2lf miles\n", value, result);
            break;
        
        case 2:
            printf("Enter miles: ");
            scanf("%lf", &value);
            result = value / 0.621371;
            printf("%.2lf miles = %.2lf km\n", value, result);
            break;
        
        case 3:
            printf("Enter kilograms: ");
            scanf("%lf", &value);
            result = value * 2.20462;
            printf("%.2lf kg = %.2lf lbs\n", value, result);
            break;
        
        case 4:
            printf("Enter pounds: ");
            scanf("%lf", &value);
            result = value / 2.20462;
            printf("%.2lf lbs = %.2lf kg\n", value, result);
            break;
        
        case 5:
            printf("Enter Celsius: ");
            scanf("%lf", &value);
            result = (value * 9/5) + 32;
            printf("%.2lf°C = %.2lf°F\n", value, result);
            break;
        
        case 6:
            printf("Enter Fahrenheit: ");
            scanf("%lf", &value);
            result = (value - 32) * 5/9;
            printf("%.2lf°F = %.2lf°C\n", value, result);
            break;
        
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}
