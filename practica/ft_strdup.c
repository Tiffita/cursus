#include <stdlib.h>


char *ft_strdup(char *src)
{
	int i = 0;
	char *cpy;

	while(src[i] != '\0')
		i++;
	cpy = malloc(sizeof (char) *(i + 1))
	if(cpy == NULL)
		return(NULL);
	i = 0;
	while(src[i] != '\0')
		cpy[i] = src[i];
		i++;
	cpy[i] = '\0';
		return(cpy);

}
