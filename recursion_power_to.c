#include <cs50.h>
#include <stdio.h>

int calculate_power_to(int base, int exponent);

int main(void)
{
    int base_number = get_int("Base: ");
    int exponent_number = get_int("Exponent: ");
    
    int power_of = calculate_power_to(base_number, exponent_number);

    printf ("%i^%i= %i\n", base_number, exponent_number, power_of);
    
    return 0;
}

int calculate_power_to(int base, int exponent)
{
    // Define the base-case / stopping condition
    if (exponent == 0)
    {
        return 1;
    }

    return base * calculate_power_to(base, exponent - 1);
}
