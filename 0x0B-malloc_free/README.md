# 0x0B. C - malloc, free
## Concept.
*Dynamic memory allocation.
File | Description
---- | -----------
main.h | Contains prototype headers
0-create_array.c | Write a function that creates an array of chars, and initializes it with a specific char.
1-strdup.c | Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
2-str_concat.c | Write a function that concatenates two strings. The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated. if NULL is passed, treat it as an empty string
add_ons | The function should return NULL on failure
3-alloc_grid.c | Write a function that returns a pointer to a 2 dimensional array of integers. Each element of the grid should be initialized to 0. The function should return NULL on failure. If width or height is 0 or negative, return NULL
4-free_grid.c | Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
