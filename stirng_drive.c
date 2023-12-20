#include <stdio.h>
#include <string.h>
#include "string_utils.h"
int main(){
    // string replace oldchar by newchar through a function
    char name[] = "Abdullah";
    char oldChar = 'b';
    char newChar = 'a';
    printf("1: old String: %s\n", name);
    replaceChar(name, oldChar, newChar);
    printf("1: New string: %s\n", name);
    