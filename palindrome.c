#include <stdio.h>

int main()
{
    int orig_int, n, reversed_integer = 0, remainder;
    
    scanf("%d", &n); //scan integer from terminal(n is a pointer so it is taking & of n)
    printf(" check 1 %d\n", n); //added for debugging(to test whether it has taken correctly)
    orig_int = n; //save original entered integer so that n will be modified in next lines
    
    while (n != 0) // n should not be equal to 0 at all times(since the process is repetitive, using while loop) OR 
    // for (; n != 0; n = n/10)
    {
        remainder = n % 10; //extracting the units place num.
        reversed_integer = reversed_integer * 10 + remainder; //this reverses the integer(n)
        n = n / 10; // remove the units place (not used in for loop coz it already exists)
    }
    if (orig_int == reversed_integer) // check if it is a palindrome
    {
        printf("number is palindrome: %d\n", orig_int);
    }
    else
    {
        printf("number is not a palindrome: %d\n", orig_int);
    }
    
    return (0);
}
