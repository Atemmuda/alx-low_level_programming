#include <stdio.h>
#include <string.h>
#include "main.h"


void rever(char *s)
{
	char rev = s[0];
	size_t len = strlen(s);
	
	for(int i = 0; i <= len; i++)
	{
		len--;
		rev = s[i];
		s[i] = s[len];
		s[len] = rev;
	}
}

int main()
{
	printf("Starting well means it all\n");
	char name[] = "Nathaniel Kankam";
	
	printf("%s\n", name);
	rever(name);
	printf("%s\n", name);
	rev_string(name);

	return (0);
}
