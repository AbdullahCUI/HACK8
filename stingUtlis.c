//string utlis.c

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"string_utils.h"
// Function: replace charater in the string
void replaceChar(char *name, char oldChar, char newChar) {
    if(name == NULL || oldChar == '\0' || newChar == '\0'){
        printf("Invalide parameter list...\n");
        return;
    }
    int i = 0;
    for (i = 0; name[i]!= '\0'; i++) {
        if (name[i] == oldChar) {
            name[i] = newChar;
        }
    }
    name[i] = '\0';

   
}

// Function: copy the string value to new string and return the string and also check with old character and new charachter
char * replaceCharCopy(char *s, char oldChar, char newChar){
    // check validation
    if(s == NULL || oldChar == '\0' || newChar == '\0'){
        printf("The invlaide Parameter list...\n");
        return NULL;
    }
    int length = strlen(s);
    char *newString = (char *)malloc(length * sizeof(char));
    // check memory allocation located or not
    if(newString == NULL){
        printf("The memory was not allocated..\n");
        return 0;
    }