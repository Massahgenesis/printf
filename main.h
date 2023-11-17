#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* Determines the leng of string. To be implemented in 0x0A-len.c */
int _len(char *str);

/* Function created in 0x0B-printc.c file */
int _printc(char c);
int _prints(char *str);

/*
 * To be created in 0x0D-printi.c.
 * Prints integer number.
*/
int _printp(int number);
int _printi(int number);

/* Function created in 0x0F-printf.c file*/
int _printf(const char *format, ...);

/*
 * Function created in 0x0C-printb.c file.
 * Converts an int number to binary.
*/
int _printb(int number);

#endif /* Main_H */
