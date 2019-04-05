#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(char *s1, char *s2, char *s3)
{
	char *str;
	int len = (strlen(s1) + strlen(s2) + strlen(s3));

	str = (char*)malloc(sizeof(char) * (len + 1));
	strcpy(str, s1);
	strcat(str, s2);
	strcat(str, s3);
	str[len] = '\0';
	return (str);
}

int main(void)
{
	FILE *file;
	int i = 5;
	char value[20];
	sprintf(value, "%d", i - 1);
	char *child = concat("Sully_", value, ".c");
	const char *s = "#include <stdio.h>%3$c#include <stdlib.h>%3$c#include <string.h>%3$c%3$cchar *concat(char *s1, char *s2, char *s3)%3$c{%3$c	char *str;%3$c	int len = (strlen(s1) + strlen(s2) + strlen(s3));%3$c%3$c	str = (char*)malloc(sizeof(char) * (len + 1));%3$c	strcpy(str, s1);%3$c	strcat(str, s2);%3$c	strcat(str, s3);%3$c	str[len] = '%5$c0';%3$c	return (str);%3$c}%3$c%3$cint main(void)%3$c{%3$c	FILE *file;%3$c	int i = %2$s;%3$c	char value[20];%3$c	sprintf(value, %4$c%%d%4$c, i - 1);%3$c	char *child = concat(%4$cSully_%4$c, value, %4$c.c%4$c);%3$c	const char *s = %4$c%1$s%4$c;%3$c%3$c	file = fopen(child, %4$cw+%4$c);%3$c	fprintf(file, s, s, value, 10, 34, 92);%3$c	fclose(file);%3$c	char *test = concat(%4$cgcc -Wall -Wextra -Werror %4$c, child, %4$c -o Sully ; ./Sully%4$c);%3$c	if (i > 0){printf(%4$cHello i'm %%s%5$cn%4$c, child);system(test);}%3$c	free(test);%3$c	free(child);%3$c	return (0);%3$c}%3$c";

	file = fopen(child, "w+");
	fprintf(file, s, s, value, 10, 34, 92);
	fclose(file);
	char *test = concat("gcc -Wall -Wextra -Werror ", child, " -o Sully ; ./Sully");
	if (i > 0){printf("Hello i'm %s\n", child);system(test);}
	free(test);
	free(child);
	return (0);
}
