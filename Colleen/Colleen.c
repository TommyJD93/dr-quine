#include <stdio.h>

// This is a comment

char *str = "#include <stdio.h>%c%c// This is a comment%c%cchar *str = %c%s%c;%c%cvoid print_source() {%c%cprintf(str, 10, 10, 10, 10, 34, str, 34, 10, 10, 10, 9, 10, 10, 10, 10, 9, 10, 10, 9, 10, 10);%c}%c%cint main() {%c%c// This is a comment inside the main%c%c%cprint_source();%c}%c";

void print_source() {
	printf(str, 10, 10, 10, 10, 34, str, 34, 10, 10, 10, 9, 10, 10, 10, 10, 9, 10, 10, 9, 10, 10);
}

int main() {
	// This is a comment inside the main

	print_source();
}
