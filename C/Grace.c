#include <stdio.h>
#include <stdlib.h>
#define FILE_NAME "Grace_kid.c"
#define STR "#include <stdio.h>%2$c#include <stdlib.h>%2$c#define FILE_NAME %3$cGrace_kid.c%3$c%2$c#define STR %3$c%1$s%3$c%2$c#define MAIN() int main(){ %4$c* ceci est un commentaire *%4$c FILE *f = fopen(FILE_NAME, %3$cw+%3$c);fprintf(f, STR, STR, 10, 34, 47);fclose(f);return (42);}%2$cMAIN()%2$c"
#define MAIN() int main(){ /* ceci est un commentaire */ FILE *f = fopen(FILE_NAME, "w+");fprintf(f, STR, STR, 10, 34, 47);fclose(f);return (42);}
MAIN()
