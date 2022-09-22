#include <stdio.h>
/**
 * _strcat - this function concats two string
 *
 * @dest: destination string; src string is appended to it
 *
 * @src: Source string; gets appended to dest string
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
return (strcat(dest, src));
}
/**
 * main - The main function of the program
 * it controls other functions
 *
 * Return: Always 0
 */
int main(void)
{
char s1[98] = "Hello ";
char s2[] = "World!\n";
char *ptr;

printf("%s\n", s1);
printf("%s", s2);

ptr = _strcat(s1, s2);

printf("%s", s1);
printf("%s", s2);
printf("%s", ptr);

return (0);
}

