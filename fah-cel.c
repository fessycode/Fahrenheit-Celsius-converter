#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("Enter fahrenheit: ");
    scanf("%f", &fahrenheit);
    if (fahrenheit > 0)
    {
        celsius = (5.0/9.0) * (fahrenheit - 32);
        printf("%.2f°C\n", celsius);
    }
    else
    {
        printf("Only number greater than zero(0) can be converted\n");
    }

    return 0;
}
