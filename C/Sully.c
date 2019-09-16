#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(const char *s1, const char *s2, const char *s3)
{
	char *str;
	const int len = ((int)strlen(s1) + (int)strlen(s2) + (int)strlen(s3));

	str = (char*)malloc(sizeof(char) * (len + 1));
	sprintf(str, "%s%s%s", s1, s2, s3);
	return (str);
}

int main(void)
{
	FILE *file;
	const int i = 5;
	char value[20];
	sprintf(value, "%d", i - 1);
	const char *child = concat("Sully_", value, ".c");
	const char *s = "#include <stdio.h>%3$c#include <stdlib.h>%3$c#include <string.h>%3$c%3$cchar *concat(const char *s1, const char *s2, const char *s3)%3$c{%3$c	char *str;%3$c	const int len = ((int)strlen(s1) + (int)strlen(s2) + (int)strlen(s3));%3$c%3$c	str = (char*)malloc(sizeof(char) * (len + 1));%3$c	sprintf(str, %4$c%%s%%s%%s%4$c, s1, s2, s3);%3$c	return (str);%3$c}%3$c%3$cint main(void)%3$c{%3$c	FILE *file;%3$c	const int i = %2$s;%3$c	char value[20];%3$c	sprintf(value, %4$c%%d%4$c, i - 1);%3$c	const char *child = concat(%4$cSully_%4$c, value, %4$c.c%4$c);%3$c	const char *s = %4$c%1$s%4$c;%3$c%3$c	if (i > 0)%3$c	{%3$c		file = fopen(child, %4$cw+%4$c);%3$c		fprintf(file, s, s, value, 10, 34, 92);%3$c		fclose(file);%3$c		const char *test = concat(%4$cgcc -Wall -Wextra -Werror %4$c, child, %4$c -o Sully ; ./Sully%4$c);%3$c		system(test);%3$c		free((void*)test);%3$c	}%3$c	free((void*)child);%3$c	return (0);%3$c}%3$c";

	if (i > 0)
	{
		file = fopen(child, "w+");
		fprintf(file, s, s, value, 10, 34, 92);
		fclose(file);
		const char *test = concat("gcc -Wall -Wextra -Werror ", child, " -o Sully ; ./Sully");
		system(test);
		free((void*)test);
	}
	free((void*)child);
	return (0);
}
