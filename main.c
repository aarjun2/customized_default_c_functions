#include "definition.h"
int main(void) {
 
	FILE* outfile = NULL;
	char test_array[80] = { "testdata" };
	char input_array[90];

	outfile = fopen("data.txt", "w");
	my_fputs(test_array, outfile);
	fclose(outfile);

	outfile = fopen("data.txt", "r");
	my_fgets(input_array, 4, outfile);
	printf("\n fgets string from file is %s", input_array);
	fclose(outfile);

	outfile = fopen("data.txt", "w+");
	my_fputc('a', outfile);
	fclose(outfile);

	outfile = fopen("data.txt", "r");
	char ch = my_fgetc(outfile);
	printf("\n Char read from file is : %c", ch);
	fclose(outfile);

	strcpy(input_array, "\0");
	printf("\n the string length before my_gets  is : %d", strlen(input_array));
	printf("\n Enter a string to test my_gets : ");
	my_gets(input_array);
	printf("\n the entered string from my_gets  is : %s", input_array);

	strcpy(input_array, "This is to test my_puts");
	printf("\n lets test my_puts");
	int puts_ch = my_puts(input_array);
	printf("\n the string length returned from my_puts is : %d", puts_ch);

	printf("\n Enter a character to test my_getchar : ");
	int mygetchar = my_getchar();
	printf("\n the Ascii value of the charcter returned from my_getchar  is : %d", mygetchar);
	printf("\n\n");

	char myputchar = 'Z';
	printf("\n Lets put the value Z to the stdout using my_putchar \n\n");
	int putchars = my_putchar(myputchar);
	printf("\n the ascii vsalue returned from putchar is : %d", putchars);
	printf("\n the character vsalue returned from putchar is : %c", putchars - 0);

	printf("\n Lets test my_strcpy ");
	char src[15];
	char dest[15];
	my_strcpy(src, "hello World");
	printf("\n String returned from my_strcpy is %s", src);

	printf("\n\n Lets test my_strncpy. lets copy 5 chars from the above string to destination ");
	my_strncpy(dest, src, 5);
	printf("\n String from my_strncpy is %s", dest);

	char src_1[50];
	char dest_1[50];

	printf("\n\n Lets test my_strcat and my_strncat ");
	my_strcpy(src_1, "my name is Arjun");
	my_strcpy(dest_1, "hello");
	my_strcat(dest_1, src_1);
	printf("\n The string after my_strcat is %s", dest_1);
	my_strncat(dest_1, src_1, 5);
	printf("\n The string after my_strncat is %s", dest_1);

	char str[15] = "Andy Fallon";
	char str_2[15] = "andy Fallon";
	char str_3[6] = { 'a', 'n', '\0', 'd', 'y' };
	char str_4[6] = { 'a', 'n', 'd', 'y', '\0' };

	printf("\n\n Lets test my_strcmp,my_strncmp");
	printf("\n The strings are string-1: %s ---- string-2: %s", str, str_2);
	int value = my_strcmp(str, str_2);
	int value1 = my_strncmp(str, str_2, 5);
	printf("\n my_strcmp value is %d", value);
	printf("\n my_strncmp value is %d", value1);

	printf("\n\n Lets test another set my_strcmp,my_strncmp");
	char s_string_2[50];
	char str_string_2[50];
	strcpy(s_string_2, "my name is computer");
	strcpy(str_string_2, "my Name is computer");
	value = my_strcmp(s_string_2, str_string_2);
	value1 = my_strncmp(s_string_2, str_string_2, 5);
	printf("\n The strings are string-1: %s ---- string-2: %s", s_string_2, str_string_2);
	printf("\n my_strcmp value is %d", value);
	printf("\n my_strncmp value is %d", value1);

	printf("\n\n Lets test another set my_strcmp,my_strncmp");
	char s_string_3[50];
	char str_s_string_3[50];
	strcpy(s_string_3, "computer WSU");
	strcpy(str_s_string_3, "computer");
	printf("\n The strings are string-1: %s ---- string-2: %s", s_string_3, str_s_string_3);
	value = my_strcmp(s_string_3, str_s_string_3);
	value1 = my_strncmp(s_string_3, str_s_string_3, 5);
	printf("\n my_strcmp value is %d", value);
	printf("\n my_strncmp value is %d", value1);

	printf("\n\n Lets test another set my_strcmp,my_strncmp");
	char s_string_4[50];
	char str_s_string_4[50];
	strcpy(s_string_4, "computers");
	strcpy(str_s_string_4, "computer");
	printf("\n The strings are string-1: %s ---- string-2: %s", s_string_4, str_s_string_4);
	value = my_strcmp(s_string_4, str_s_string_4);
	value1 = my_strncmp(s_string_4, str_s_string_4, 8);
	printf("\n my_strcmp value is %d", value);
	printf("\n my_strncmp value is %d", value1);

	printf("\n\n Lets test another set my_strcmp,my_strncmp");
	char s_string_1[20];
	char str_s_string_1[20];
	strcpy(s_string_1, "com puter");
	strcpy(str_s_string_1, "com");
	printf("\n The strings are string-1: %s ---- string-2: %s", s_string_1, str_s_string_1);
	value = my_strcmp(s_string_1, str_s_string_1);
	value1 = my_strncmp(s_string_1, str_s_string_1, 3);
	printf("\n my_strcmp value is %d", value);
	printf("\n my_strncmp value is %d", value1);

	printf("\n\n Lets test my_strlen");
	int value2 = my_strlen(str_3);
	int value3 = my_strlen(str_4);
	printf("\n my_strlen value of %s is %d", str_3, value2);
	printf("\n my_strlen value of %s is %d", str_4, value3);
	printf("\n\n");
	strcpy(str, "\0");
	return 0;
}