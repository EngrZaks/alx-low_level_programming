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
const char *message_part1 = "and that piece of art is useful\" - ";
const char *message_part2 = "Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message_part1, 35);
write(STDERR_FILENO, message_part2, 24);
return (1);
}
