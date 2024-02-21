#include <stdio.h>

int sum(int limit)
{
    // initialize sum
    int total = 0;
 
    // loop and add index to sum
    for (int index = 1; index <= limit; index++)
    {
        total += index;
    }
    return total;
}

int main()
{
    int total = 0;
    int user_choice = 0;

    // prompt user and get num
    printf("Enter a number: ");
    scanf("%d", &user_choice);

    // calculate the sum
    total = sum(user_choice);

    // print results :)
    printf("The result is: %d\n", total); 

    // did I forget something?
    // return EXIT_SUCCESS
}