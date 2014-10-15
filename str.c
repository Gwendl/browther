#include <unistd.h>
#include <stdlib.h>

int		my_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	my_putstr_fd(char *str, int fd)
{
	write (fd, str, my_strlen(str));
}

void	my_putstr(char *str)
{
	my_putstr_fd(str, 1);
}
