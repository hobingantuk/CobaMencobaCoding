#include <stdio.h>
#include <string.h>

int main () {
  
	char a[] = "Halo";
	char b[] = " Kawan";
	char c[20];
	
	// Copy string a ke string b
	strcpy(c, a);
	
	// Tempelkan string b ke akhir string c
	strcat(c, b);
	
	printf("%s\n", c);
	
	return 0;
}
