#include <stdio.h>
/**
*main - A program that prints the size of various comp uter types
*return 0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
prinf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
prinf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
prinf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
prinf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
prinf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
