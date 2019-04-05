#include <stdio.h>

/*
	ceci est un autre commentaire
*/

void display()
{
	const char *s = "#include <stdio.h>%2$c%2$c%3$c*%2$c	ceci est un autre commentaire%2$c*%3$c%2$c%2$cvoid display()%2$c{%2$c	const char *s = %4$c%1$s%4$c;%2$c	printf(s, s, 10, 47, 34);%2$c}%2$c%2$cint main(void)%2$c{%2$c	%3$c*%2$c		ceci est un commentaire%2$c	*%3$c%2$c	display();%2$c}%2$c";
	printf(s, s, 10, 47, 34);
}

int main(void)
{
	/*
		ceci est un commentaire
	*/
	display();
}
