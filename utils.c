#include "main.h"
/**
 * is_printable - Evaluates if char can be printable
 * @c: Char evaluated.
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}
/**
 * append_hexa_code - Append ascci in hexadecimalCode toBuffer
 * @buffer: ArrayOf chars.
 * @i: IndexAt which start appending.
 * @ascii_code: ASSCI Code
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}
/**
 * is_digit - Checks if a char is digit
 * @c: Char toBe evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Casts number toThe specified size
 * @num: Number to casted.
 * @size: Number indicatingThe type toBe casted.
 *
 * Return: Casted valueOf num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}
/**
 * convert_size_unsgnd - CastsNumber toSpecified size
 * @num: Number to casted
 * @size: Number indicating type toBe casted
 *
 * Return: Casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
