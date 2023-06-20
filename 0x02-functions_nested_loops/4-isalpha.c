#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 if not
 */
int_isalphabet(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
