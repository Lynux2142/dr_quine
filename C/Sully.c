#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *file;
	int i = 5;
	char *value;
	char *new_name;
	char *new_file_name;
	char *compile;
	char *exec;
	const char *exe_name = getenv("_");
	const char *s = "#include <stdio.h>%3$c#include <stdlib.h>%3$c#include <string.h>%3$c%3$cint main(void)%3$c{%3$c	FILE *file;%3$c	int i = %2$s;%3$c	char *value;%3$c	char *new_name;%3$c	char *new_file_name;%3$c	char *compile;%3$c	char *exec;%3$c	const char *exe_name = getenv(%4$c_%4$c);%3$c	const char *s = %4$c%1$s%4$c;%3$c%3$c	if (strstr(exe_name, %4$cSully_%4$c)) { --i; }%3$c	asprintf(&value, %4$c%%d%4$c, i);%3$c	asprintf(&new_name, %4$cSully_%%s%4$c, value);%3$c	asprintf(&new_file_name, %4$c%%s.c%4$c, new_name);%3$c	asprintf(&compile, %4$cgcc %%s -o %%s%4$c, new_file_name, new_name);%3$c	asprintf(&exec, %4$c./%%s%4$c, new_name);%3$c	file = fopen(new_file_name, %4$cw+%4$c);%3$c	fprintf(file, s, s, value, 10, 34, 92);%3$c	fclose(file);%3$c	system(compile);%3$c	if (i > 0) { system(exec); }%3$c	free(exec);%3$c	free(compile);%3$c	free(new_file_name);%3$c	free(new_name);%3$c	free(value);%3$c	return (0);%3$c}%3$c";

	if (strstr(exe_name, "Sully_")) { --i; }
	asprintf(&value, "%d", i);
	asprintf(&new_name, "Sully_%s", value);
	asprintf(&new_file_name, "%s.c", new_name);
	asprintf(&compile, "gcc %s -o %s", new_file_name, new_name);
	asprintf(&exec, "./%s", new_name);
	file = fopen(new_file_name, "w+");
	fprintf(file, s, s, value, 10, 34, 92);
	fclose(file);
	system(compile);
	if (i > 0) { system(exec); }
	free(exec);
	free(compile);
	free(new_file_name);
	free(new_name);
	free(value);
	return (0);
}
