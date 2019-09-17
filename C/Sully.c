#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BEGIN_NAME		"Sully_"
#define BEGIN_COMPILE	"gcc -Wall -Wextra -Werror "

char *concat(const char *s1, const char *s2)
{
	char *str;
	const size_t len = (strlen(s1) + strlen(s2));

	str = (char*)malloc(sizeof(char) * (len + 1));
	sprintf(str, "%s%s", s1, s2);
	return (str);
}

int main(void)
{
	FILE *file;
	int i = 5;
	char value[20];
	const char *exe_name = getenv("_");
	if (strstr(exe_name, "Sully_"))
		--i;
	sprintf(value, "%d", i);
	const char *new_name = concat("Sully_", value);
	const char *s = "#include <stdio.h>%3$c#include <stdlib.h>%3$c#include <string.h>%3$c%3$c#define BEGIN_NAME		%4$cSully_%4$c%3$c#define BEGIN_COMPILE	%4$cgcc -Wall -Wextra -Werror %4$c%3$c%3$cchar *concat(const char *s1, const char *s2)%3$c{%3$c	char *str;%3$c	const size_t len = (strlen(s1) + strlen(s2));%3$c%3$c	str = (char*)malloc(sizeof(char) * (len + 1));%3$c	sprintf(str, %4$c%%s%%s%4$c, s1, s2);%3$c	return (str);%3$c}%3$c%3$cint main(void)%3$c{%3$c	FILE *file;%3$c	int i = %2$s;%3$c	char value[20];%3$c	const char *exe_name = getenv(%4$c_%4$c);%3$c	if (strstr(exe_name, %4$cSully_%4$c))%3$c		--i;%3$c	sprintf(value, %4$c%%d%4$c, i);%3$c	const char *new_name = concat(%4$cSully_%4$c, value);%3$c	const char *s = %4$c%1$s%4$c;%3$c%3$c	if (i >= 0)%3$c	{%3$c		const char *new_file_name = concat(new_name, %4$c.c%4$c);%3$c		file = fopen(new_file_name, %4$cw+%4$c);%3$c		fprintf(file, s, s, value, 10, 34, 92);%3$c		fclose(file);%3$c		char *compile;%3$c		compile = (char*)malloc(sizeof(char) * (1 + strlen(BEGIN_COMPILE) + strlen(new_file_name) + strlen(%4$c -o %4$c) + strlen(new_name)));%3$c		sprintf(compile, %4$c%%s%%s%%s%%s%4$c, BEGIN_COMPILE, new_file_name, %4$c -o %4$c, new_name);%3$c		const char *exec = concat(%4$c./%4$c, new_name);%3$c		system(compile);%3$c		system(exec);%3$c		free((void*)new_file_name);%3$c		free((void*)compile);%3$c		free((void*)exec);%3$c	}%3$c	free((void*)new_name);%3$c	return (0);%3$c}%3$c";

	if (i >= 0)
	{
		const char *new_file_name = concat(new_name, ".c");
		file = fopen(new_file_name, "w+");
		fprintf(file, s, s, value, 10, 34, 92);
		fclose(file);
		char *compile;
		compile = (char*)malloc(sizeof(char) * (1 + strlen(BEGIN_COMPILE) + strlen(new_file_name) + strlen(" -o ") + strlen(new_name)));
		sprintf(compile, "%s%s%s%s", BEGIN_COMPILE, new_file_name, " -o ", new_name);
		const char *exec = concat("./", new_name);
		system(compile);
		system(exec);
		free((void*)new_file_name);
		free((void*)compile);
		free((void*)exec);
	}
	free((void*)new_name);
	return (0);
}
