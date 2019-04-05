#include <stdio.h>
#include <stdlib.h>
#define FILE_NAME "Grace_kid.c"
#define STR "#include <stdio.h>%c#include <stdlib.h>%c#define FILE_NAME %cGrace_kid.c%c%c#define STR %c%s%c%c#define MAIN() int main(){ %c* ceci est un commentaire *%c FILE *f = fopen(FILE_NAME, %cw+%c);fprintf(f, STR, 10, 10, 34, 34, 10, 34, STR, 34, 10, 47, 47, 34, 34, 10, 10);fclose(f);return (42);}%cMAIN()%c"
#define MAIN() int main(){ /* ceci est un commentaire */ FILE *f = fopen(FILE_NAME, "w+");fprintf(f, STR, 10, 10, 34, 34, 10, 34, STR, 34, 10, 47, 47, 34, 34, 10, 10);fclose(f);return (42);}
MAIN()
