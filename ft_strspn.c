/*Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);*/
size_t	ft_strspn(const char *s, const char *accept){
	size_t count = 0;
	char *c;

	while (*s)
	{
		c = accept; 
		while (*c)
		{
			if (*c == *s)
				break;
			c++;
		}
		if (*c == '\0')
			break;
		count ++;
		s++;
	}
	return(count);
}
