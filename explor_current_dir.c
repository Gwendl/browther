#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include "explora.h"

void				explor_current_dir(void)
{
	DIR				*dirp;
	struct dirent	*entry;

	if ((dirp = opendir(".")) == NULL)
		exit(1);
	while ((entry = readdir(dirp)) != NULL)
	{
		my_putstr(entry->d_name);
		my_putstr("\t");
	}
	my_putstr("\n");
}
