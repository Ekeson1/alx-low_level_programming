#include "main.h"
 /**
  * _strcpy - copy the string pointed to by src to dest
  * @dest: char to check
  * @src: char to check
  * Return: 0 is success
  */
char *_strcpy(char *dest, char *src)
{
	 int count = 0;

	 while (count = 0)
	 {
		 *(dest + count) = *(src + count);
		 if (*(src + count) == '\0')
			 break;
		 count++;
	 }
	 return (dest);
}
