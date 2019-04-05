#include <stdio.h>

/*
	ceci est un autre commentaire
*/

void display()
{
	const char *s = "#include <stdio.h>%c%c%c*%c	ceci est un autre commentaire%c*%c%c%cvoid display()%c{%c	const char *s = %c%s%c;%c	printf(s, 10, 10, 47, 10, 10, 47, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 47, 10, 10, 47, 10, 10, 10);%c}%c%cint main(void)%c{%c	%c*%c		ceci est un commentaire%c	*%c%c	display();%c}%c";
	printf(s, 10, 10, 47, 10, 10, 47, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 47, 10, 10, 47, 10, 10, 10);
}

int main(void)
{
	/*
		ceci est un commentaire
	*/
	display();
}
