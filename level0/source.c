#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define _GNU_SOURCE

int	main(int ac, char **av)
{
	int		pass;
	char	*args[2];

	pass = atoi(av[1]);
	if (pass == 423)
	{
		args[0] = strdup("/bin/sh");
		args[1] = NULL;
		setresgid(getegid(), getegid(), getegid());
		setresuid(geteuid(), geteuid(), geteuid());
		execv("/bin/sh", args);
	}
	fwrite("No !\n", 1, 5, stderr);
	return (0);
}
