# 0x07-pointers_arrays_strings
### Working with Pointers, Arrays, Multi-dimentional arrays and String

Tasks files and Descriptions
#### 0-memset.c --- Write a function that fills memory with a constant byte.
1. Prototype: char *_memset(char *s, char b, unsigned int n);
2. The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
3. Returns a pointer to the memory area s

#### 1-memcpy.c --- Write a function that copies memory area.
1. Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
2. The _memcpy() function copies n bytes from memory area src to memory area dest
3. Returns a pointer to dest

#### 2-strchr.c --- Write a function that locates a character in a string.
1. Prototype: char *_strchr(char *s, char c);
2. Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

#### 3-strspn.c --- Write a function that gets the length of a prefix substring.
1. Prototype: unsigned int _strspn(char *s, char *accept);
2. Returns the number of bytes in the initial segment of s which consist only of bytes from accept

#### 4-strpbrk.c --- Write a function that searches a string for any of a set of bytes.
1. Prototype: char *_strpbrk(char *s, char *accept);
2. The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
3. Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

#### 5-strstr.c --- Write a function that locates a substring.
1. Prototype: char *_strstr(char *haystack, char *needle);
2. The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
3. Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

#### 7-print_chessboard.c --- Write a function that prints the chessboard.
1. Prototype: void print_chessboard(char (*a)[8]);

#### 8-print_diagsums.c --- Write a function that prints the sum of the two diagonals of a square matrix of integers.
1. Prototype: void print_diagsums(int *a, int size);

#### 100-set_string.c --- Write a function that sets the value of a pointer to a char.
1. Prototype: void set_string(char **s, char *to);

#### 101-crackme_password --- Create a file that contains the password for the crackme2 executable.
1. Your file should contain the exact password, no new line, no extra space
2. ltrace, ldd, gdb and objdump can help
3. You may need to install the openssl library to run the crakme2 program: sudo apt install libssl-dev
4. Edit the source list sudo nano /etc/apt/sources.list to add the following line: deb http://security.ubuntu.com/ubuntu xenial-security main Then sudo apt update and sudo apt install libssl1.0.0

Resources
1. [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
2. [C – Pointer to Pointer with example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
3. [Multi-dimensional Arrays in C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
4. [Two dimensional (2D) arrays in C programming with example](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)
5. [crackme2](https://github.com/alx-tools/0x06.c)
