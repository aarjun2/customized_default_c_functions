#include "definition.h"
char* my_fgets(char* s, int n, FILE* stream) {
	char format[100];
	sprintf(format, "%%%ds", n - 1);
	if (fscanf(stream, format, s) == MY_EOF) {
		s = NULL;
	}
	return s;
}

int my_fputs(const char* s, FILE* stream) {
	int count = 0;
	count = fprintf(stream, "%s", s);
	if (count < 0) {
		count = MY_EOF;
	}
	return count;
}

int my_fgetc(FILE* stream) {
	char ch;
	if (fscanf(stream, "%c", &ch) == MY_EOF) {
		ch = MY_EOF;
	}
	return ch;
}
int my_fputc(int c, FILE* stream) {
	char ch = '\0';
	ch = c - 0;
	if (fprintf(stream, "%c", ch) == MY_EOF) {
		ch = MY_EOF;
	}
	return ch;
}

char* my_gets(const char* s) {
	fscanf(stdin, "%s", s);
	return s;
}

int my_puts(const char* s) {
	int count = 0;
	printf("\n");
	count = fprintf(stdout, "%s", s);
	printf("\n");
	return count;
}
int my_getchar(void) {
	int c = 0;
	c = getc(stdin);
}

int my_putchar(int c) {
	return putc(c, stdout);
}

char* my_strcpy(char* destination, const char* source) {
	for (; *source != '\0'; source++) {
		*destination = *source;
		destination++;
	}
	*destination = '\0';
	return destination;
}

char* my_strncpy(char* destination, const char* source, int n) {
	int i = 0;
	while (i < n)
	{
		if (*source == '\0' && i < n) {
			*destination = '\0';
		}
		else {
			*destination = *source;
			source++;
		}
		destination++;
		i++;
	}
	*destination = '\0';
	return destination;
}

char* my_strcat(char* destination, const char* source) {
	for (int i = 0; *destination != '\0'; destination++);
	for (int j = 0; *source != '\0'; source++, j++) {
		*destination = *source;
		destination++;
	}

	// null terminate destination string
	*destination = '\0';
	return destination;
}

char* my_strncat(char* destination, const char* source, int n) {
	for (int i = 0; *destination != '\0'; destination++);
	for (int j = 0; *source != '\0' && j < n; source++, j++) {
		*destination = *source;
		destination++;
	}

	// null terminate destination string
	*destination = '\0';
	return destination;
}

int my_strcmp(const char* s1, const char* s2) {

	int flag = 0;
	for (; *s1 != '\0' && *s2 != '\0'; s2++, s1++) {
		if (*s1 < *s2) {
			return -1;
		}
		if (*s1 == *s2) {
			flag = 1;
		}
		else {
			return 1;
		}
	}
	if (flag == 1 && *s1 != '\0' && *s2 != '\0') {
		return 0;
	}
	if (flag == 1 && *s1 == '\0' && *s2 != '\0')
	{
		// string 1 has ended. So string 2 is bigger;
		return 1;
	}
	if (flag == 1 && *s1 != '\0' && *s2 == '\0')
	{
		// string 2 has ended. So string 1 is bigger;
		return -1;
	}
}

int my_strncmp(const char* s1, const char* s2, int n) {
	int flag = 0;
	int i = 0;
	for (i = 0; i < n && *s1 != '\0' && *s2 != '\0'; s2++, s1++, i++) {
		if (*s1 < *s2) {
			return -1;
		}
		if (*s1 == *s2) {
			flag = 1;
		}
		else {
			return 1;
		}
	}
	if (flag == 1 && i == n) {
		return 0;
	}
	if (flag == 1 && *s1 == '\0' && *s2 != '\0')
	{
		// string 1 has ended. So string 2 is bigger;
		return 1;
	}
	if (flag == 1 && *s1 != '\0' && *s2 == '\0')
	{
		// string 2 has ended. So string 1 is bigger;
		return -1;
	}
}

int my_strlen(const char* s) {
	int count = 0;
	while (*s != '\0') {
		count += 1;
		s++;
	}
	return count;
}
