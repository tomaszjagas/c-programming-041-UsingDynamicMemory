#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	char* text = NULL;

	printf("Enter limit of the text: ");
	scanf_s("%d", &size);

	text = (char*)malloc(size * sizeof(char));

	if (text != NULL) {
		printf("Enter some text: \n");
		scanf_s(" ");
		gets_s(text,size);

		printf("Inputted text is: %s\n", text);
	}

	free(text);
	text = NULL;

	return 0;
}