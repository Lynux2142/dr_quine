#include <stdio.h>

void display()
{
	const char *s = "#include <stdio.h>%c%cvoid display()%c{%c	const char *s = %c%s%c;%c	printf(s, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 10);%c}%c%cint main(void)%c{%c	display();%c}%c";
	printf(s, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 10);
}

int main(void)
{
	display();
}
