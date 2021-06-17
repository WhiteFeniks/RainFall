#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*p(char *s, char *str)
{
	char	buf[4096];

	puts(str);
	read(0, buf, 4096);
	*strchr(buf, '\n') = 0;
	return (strncpy(s, buf, 20));
}

char	*pp(char *buf)
{
	char			b[20];
	char			a[20];
	unsigned int	len;

	p(a, " - ");
	p(b, " - ");
	strcpy(buf, a);
	len = strlen(buf);
	buf[len] = ' ';
	buf[len + 1] = 0;
	return (strcat(buf, b));
}

int	main(void)
{
	char	buf[42];

	pp(buf);
	puts(buf);
	return (0);
}
