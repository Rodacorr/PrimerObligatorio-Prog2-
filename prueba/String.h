#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include <stdio.h>
#include "boolean.h"

const int MAX=80;
typedef char strings[MAX];
void print (strings str);
void scan(strings &str);

boolean strmen (strings str, strings str2);
boolean streq (strings str, strings str2);
void strcop (strings str, strings &str2);
void strcon (strings &str, strings str2);
void strswap(strings &str, strings &str2);

#endif // STRING_H_INCLUDED
