#include <stdio.h>
/**
 * main - prints the size of various types on the computer
 * return 0 (succesc)
 */
int main(void)
{       
        char a;
        int b;
        long int c;
        long long int d;
        float f;
printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of int:%lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int:%lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int:%lu byte(S)\n", (unsigned long)sizeof(d));
printf("sizeof a float:%lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
