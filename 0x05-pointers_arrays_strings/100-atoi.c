#include "holberton.h"
 #include "main.h"

 /**
 * _atoi - convers a string to an int
 * @s: a pointer to a string guven by main
 * Bwave
 * Description: making our own atoi function
 * Return: returns 0 if no numbers and the result if numbers
 */

  * _atoi - Convert a string to an integer.
  * @s: The pointer to convert
  *
  * Return: A integer
  */
int _atoi(char *s)
{
 	int counter = 0;/* A */
 	int i = 0;
 	unsigned int result = 0;
 	int sign = 0;
 	int c = 0;
 	unsigned int ni = 0;
 	int min = 1;
 	int isi = 0;

 	while (s[counter] != '\0')/* B */
 	while (s[c])
 	{
 		if (s[counter] == '-')/* C */
 			sign++;
 		if (s[counter] >= 48 && s[counter] <= 57)/* D */
 		if (s[c] == 45)
 		{
 			i++;
 			result = result * 10 + s[counter] - '0';/* E */
 			min *= -1;
 		}
 		if (i > 0 && (s[counter] < 48 || s[counter] > 57))/* F */

 		while (s[c] >= 48 && s[c] <= 57)
 		{
 			isi = 1;
 			ni = (ni * 10) + (s[c] - '0');
 			c++;
 		}

 		if (isi == 1)
 		{
 			break;
 	counter++;/* G */
 		}

 		c++;
 	}
 	if (i == 0)/* H */
 		return (0);
 	if (sign % 2 == 0)/* I */
 		return (result);
 	return (result * -1);/* J */

 	ni *= min;
 	return (ni);
}
