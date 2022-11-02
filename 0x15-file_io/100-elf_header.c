#include "main.h"

/**
 * Usage: elf_header elf_filename
 * Displayed information: (no less, no more, do not include trailing whitespace)
 * **_Magic_**
 * **_Class_**
 * **_Data_**
 * **_Version_**
 * **_OS/ABI_**
 * **_ABI Version_**
 * **_Type_**
 * **_Entry point address_**
 * Format: the same as readelf -h (version 2.26.1)
 * If the file is not an ELF file, or on error, exit with status code 98 and
 * display a comprehensive error message to stderr
 */