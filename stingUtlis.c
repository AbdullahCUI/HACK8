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

    // LOOP: copy string to another
    for(int i = 0; s[i]!='\0'; i++){
        newString[i] = s[i];
    }
    newString[length] = '\0';
    for(int i = 0; newString[i]!='\0'; i++){
        if(newString[i] == oldChar){
            newString[i] = newChar;
        }
    }
    newString[length] = '\0';
    return newString;

}
//Function: remove the char which same to the string
void removeChar(char *s, char c){
    // Validity
    if(s == NULL|| c == '\0'){
        printf("Invalide parameter List...\n");
        return;
    }
      // Store the address of the string array
    char *storeStr = s;
    for(int i = 0; s[i]!='\0'; i++){
        // condition if the char valu not equal store the value to this address of store string
        // any  change occure in store str it directly occur in the s str because both point same memory
        if(s[i] != c){
            *storeStr = s[i];
            storeStr++;
        }
    }
    *storeStr= '\0';
}
// Function: remove character from string and store in the same stringe by the help of pointer
// then taccording the new string length make another string which copy the string
char * removeCharCopy(char *s, char c){
    // Validity check
    if(s == NULL || c == '\0'){
        printf("Invalide parameter list...\n");
        return NULL;
    }
    // pointer to point the the different address value start from base 
    char *storStr = s;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] != c){
            *storStr = s[i];
            storStr++;
        }
    }

     // add termination to new string
    *storStr = '\0';
    // find length of s
    int length = strlen(s);
    // dynamic memory allocation to str
    char *newStr = (char *)malloc(length * sizeof(char));
    if(newStr == NULL){
        printf("Memory allocation Fieled...\n");
        return NULL;
    }
    // LOOP: To copy the one string from another
    for(int i = 0; i<length; i++){
        newStr[i] = s[i];
    }
    newStr[length] = '\0';
    return newStr; 
}

// Function: The function take a String and Split the string according number "n"
char **lengthSplit(char *s, int n){
    if(s == NULL || n<0){
        printf("Invalide Parameter List..\n");
        return NULL;
    }
    // Find the length
    int length = strlen(s);
    // How many row we can made
    length = length/n;
    // If the some charachter remain or length to check if remain add one row if not so not add them
    int check = (length * n) - (length);
    if(check > 0){
        length = length + 1;
    }
    // 2D dynamic string to store the address of the address 
    char **splitStr = (char **)malloc(length * sizeof(char*));
    if(splitStr == NULL){
        printf("Memory allocation failed...\n");
        return NULL;
    }
