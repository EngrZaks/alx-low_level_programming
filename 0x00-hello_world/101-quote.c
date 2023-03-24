#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Prints a message without printf or puts
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, 59);
return (0);
}
