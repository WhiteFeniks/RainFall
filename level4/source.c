#include <stdlib.h>
#include <stdio.h>

int		g_m = 0;

int	p(char *buffer)
{
	return (printf(buffer));
}

void	n(void)
{
	char	buf[512];

	fgets(buf, 512, stdin);
	p(buf);
	if (g_m == 16930116)
	{
		system("/bin/cat /home/user/level5/.pass");
	}
	return ;
}

int	main(void)
{
	n();
	return (0);
}
