# Concept
* Pointers
* Arrays
* Strings
* Data Structures

File | Description
---- | -----------
main.h | Contains the headers prototypes
_putchar | THe custom console printer
0-strcat.c | This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
1-strncat.c | Write a function that concatenates two strings.
2-strncpy.c | Write a function that copies a string.
3-strcmp.c | Write a function that compares two strings.
4-rev_array.c | Write a function that reverses the content of an array of integers.
5-string_toupper.c | Write a function that changes all lowercase letters of a string to uppercase.
6-cap_string.c | Write a function that capitalizes all words of a string.
7-leet.c | Write a function that encodes a string into 1337.
100-rot13.c | Write a function that encodes a string using rot13.
101-print_number.c | Write a function that prints an integer.
102-magic.c | Add one line to this code, so that the program prints a[2] = 98, followed by a new line.
103-infinite_add.c | Write a function that adds two numbers.
 | Where n1 and n2 are the two numbers
 | r is the buffer that the function will use to store the result
 | size_r is the buffer size
 | The function returns a pointer to the result
 | You can assume that you will always get positive numbers, or 0
 | You can assume that there will be only digits in the strings n1 and n2
 | n1 and n2 will never be empty
 | If the result can not be stored in r the function must return 0
104-print_buffer.c | Write a function that prints a buffer.
 | The function must print the content of size bytes of the buffer pointed by b
 | The output should print 10 bytes per line
 | Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
 | Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
 | Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
 | Each line ends with a new line \n
 | If size is 0 or less, the output should be a new line only \n
 | You are allowed to use the standard library
 | The output should look like the following example, and formatted exactly the same way:

[Helper documents](https://linux.die.net/man/3/strcat)
code for 102 can be found [here](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c)
