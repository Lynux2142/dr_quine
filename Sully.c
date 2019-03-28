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
	const char *s = "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c%cchar *concat(char *s1, char *s2, char *s3)%c{%c	char *str;%c	int len = (strlen(s1) + strlen(s2) + strlen(s3));%c%c	str = (char*)malloc(sizeof(char) * (len + 1));%c	strcpy(str, s1);%c	strcat(str, s2);%c	strcat(str, s3);%c	str[len] = '%c0';%c	return (str);%c}%c%cint main(void)%c{%c	FILE *file;%c	int i = %s;%c	char value[20];%c	sprintf(value, %c%%d%c, i - 1);%c	char *child = concat(%cSully_%c, value, %c.c%c);%c	const char *s = %c%s%c;%c%c	file = fopen(child, %cw+%c);%c	fprintf(file, s, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 92, 10, 10, 10, 10, 10, 10, 10, value, 10, 10, 34, 34, 10, 34, 34, 34, 34, 10, 34, s, 34, 10, 10, 34, 34, 10, 10, 10, 34, 34, 34, 34, 10, 34, 92, 34, 10, 10, 10, 10, 10);%c	fclose(file);%c	char *test = concat(%cgcc -Wall -Wextra -Werror %c, child, %c -o Sully ; ./Sully%c);%c	if (i > 0){printf(%cHello i'm %%s%cn%c, child);system(test);}%c	free(test);%c	free(child);%c	return (0);%c}%c";

	file = fopen(child, "w+");
	fprintf(file, s, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 92, 10, 10, 10, 10, 10, 10, 10, value, 10, 10, 34, 34, 10, 34, 34, 34, 34, 10, 34, s, 34, 10, 10, 34, 34, 10, 10, 10, 34, 34, 34, 34, 10, 34, 92, 34, 10, 10, 10, 10, 10);
	fclose(file);
	char *test = concat("gcc -Wall -Wextra -Werror ", child, " -o Sully ; ./Sully");
	if (i > 0){printf("Hello i'm %s\n", child);system(test);}
	free(test);
	free(child);
	return (0);
}
