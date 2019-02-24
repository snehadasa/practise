#include <stdio.h>

int fib(int n, int ans[])
{
    if (n <= 2)
    {
        return 1;
    }
    if (ans[n] != 0)
    {
        return (ans[n]);
    }
    ans[n] = (fib(n - 1) + fib(n - 2));
    return ans[n];
}

int main()
{
    int i;
    int n = 50;
    int arr[n + 1];
    
    for (i = 1; i <= n; i++)
    {
        arr[i] = 0;
    }
    fib(50, arr);
}
