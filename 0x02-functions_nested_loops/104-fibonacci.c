#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 *  starting with 1 and 2
 *
 * Return: 0
 */
int main() {
int n = 50;
int fib[n];
fib[0] = 1;
fib[1] = 2;
for (int i = 2; i < n; i++) {
fib[i] = fib[i-1] + fib[i-2];
}
for (int i = 0; i < n; i++) {
printf("%d", fib[i]);
if (i < n-1) {
printf(", ");
}
}
printf("\n");
return 0;
}
