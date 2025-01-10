/*Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

#include <stdio.h>
char    *ft_strrev(char *str)
{

	int i = 0; 
	int lenght = 0;
	int stop = 0;
	char temp;

	while (str[lenght])
		lenght++;
	printf ("Lenght %d", lenght);
	if (lenght == 1)
		return (str);
	stop = lenght/2; 
	printf ("Stop %d", stop);
	
	while (lenght > stop)
	{
		temp = str[i];
		str[i] = str[lenght -1];
		str[lenght -1] = temp;
		printf("This is stupid i: %d, lenght %d", i, lenght -1);
		lenght --;
		i++;
	}

	return (str);

}
/*int main (void)
{
	char *string = "ab";
	printf ("Reversed string %s\n", ft_strrev(string));
	return(0); 
}*/

int main(void) {
    char string[] = "abcdf";  // This creates a modifiable array of characters
    printf("Reversed string: %s\n", ft_strrev(string));
    return 0;
}