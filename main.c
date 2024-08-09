#include <stdio.h>

void err(char* msg) {
	fprintf(stderr, "Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc == 1) {
		err("No arguments");

		return 1;
	}

	if (argc != 1 + 1 + 1) {
		err("Wrong number of arguments");

		return 1;
	}

	printf("either %s or %s", argv[1], argv[1 + 1]);

	return 0;
}
