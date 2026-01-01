#include <stdio.h>
#include <string.h>

struct Word {
	char eng[20];
	char chi[20];
};

int main() {
	struct Word dict[] = {
		{"dog", "¹·"},
		{"cat", "Øˆ"},
		{"duck", "ø†"},
		{"cow", "Å£"},
		{"fox", "ºü"}
	};
	int size = sizeof(dict) / sizeof(dict[0]);
	char input[20];
	int found = 0;
	scanf("%s", input);
	for (int i = 0; i < size; i++) {
		if (strcmp(input, dict[i].eng) == 0) {
			printf("%s", dict[i].chi);
			found = 1;
			break;
		}
	}
	if (!found) {
		for (int i = 0; i < size; i++) {
			if (strcmp(input, dict[i].chi) == 0) {
				printf("%s", dict[i].eng);
				found = 1;
				break;
			}
		}
	}
	return 0;
}
