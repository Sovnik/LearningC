#include <stdio.h>

struct Group {
	char members[10];
	char *name;

};

int main() {

	struct Group groups[5] = {
		{ {'A', 'B', 'C', 'D'}, "Group 1 A - D\0" },
		{ {'E', 'F', 'G', 'H'}, "Group 2 E - H\0" },
		{ {'I', 'J', 'K', 'L'}, "Group 3 I - L\0" },
		{ {'M', 'N', 'O', 'P'}, "Group 4 M - P\0" },
		{ {'Q', 'R', 'S', 'T'}, "Group 5 Q - T\0" }
	};

	int i, j;

	for(i = 0; i < sizeof(groups) / sizeof(struct Group); i++) {
		printf("%s\n", groups[i].name);
		for(j = 0; groups[i].members[j] != '\0'; j++) {
			printf("%c ", groups[i].members[j]);
		}
		printf("\n");
	}

	return 0;
}
