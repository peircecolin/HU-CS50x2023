// This code uses a helper library cs50.h that was created for the Harvard CS50x2023 course via edx. Also this code was executed within a class-sanctioned "codespace" of VS Code. See course for mroe details.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Rules of the program
    printf("\n===Population Calculator===\nCondtions: starting population size must be greater than or equal to 9. Ending population size must be greater than starting size.\n\n");

    // TODO: Prompt user for starting population size.
    int n;
    do
    {
        n = get_int("Initial population: ");
    }
    while (n < 9);

    // TODO: Prompt user for ending population size. Must be greater than starting population size.
    int p;
    do
    {
        p = get_int("Ending population: ");
    }
    while (p < n);

    // TODO: Calculate number of years until we reach ending population size assuming each year the population gains n/3 units and loses n/4 units
    int year = 0;
    while (n < p)
    {
        n = n + (n / 3) - (n / 4);
        year++;
    }

    // TODO: Print number of years
    printf("Years: %i\n\n", year);
}
