#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of a char: %lu byte(s)\n", (unisigned long)sizeof(char));
printf("Size of a int: %lu byte(s)\n", (unisigned long)sizeof(int));
printf("Size of a long int: %lu byte(s)\n", (unisigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", (unisigned long)sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", (unisigned long)sizeof(float));
return (0);
}
