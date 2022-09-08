#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

//functions
int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
int _putchar(char c);
void _puts(char *str);
unsigned int nbr_spaces(char *s);
char **stringToTokens(char *str);

#endif
