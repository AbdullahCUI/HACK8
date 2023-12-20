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

     // String copy to another string and replace with new charater if there a old character
    char oldChar1 = 'a';
    char newChar1 = 'b';
    printf("2: Old string: %s\n",name);
    char *newString = replaceCharCopy(name, oldChar1, newChar1);
    if(newString != NULL){
        printf("2: Copy string with New character: %s\n",newString);
    } 
    // string pass by refrence and remove character and store in the same string array
    char string[] = "programer";
    char c = 'r';
    printf("3: Old string: %s\n", string);
    removeChar(string, c);
    printf("3: The new String with remove character: %s\n",string);
    
    // String passed by refrence and remove the char and store in the same character 
    // make dynamic string which store the new str character and return to main
    char nameStr[] = "Abdullah Programer";
    char remove = 'a';
    printf("4: old string: %s\n",nameStr);
    char *newNameStr = removeCharCopy(nameStr, remove);
    if(newNameStr != NULL){
        printf("4: String \" %s \"  without character \'%c\' \n",newNameStr, remove);
    }
    // split the string to each 3 character / we can change the str and n value 
    int n = 3;
    char sentence[] = "Hello Comsats, final is comming?";
    printf("5: The String: %s\n",sentence);
    char **splitStr = lengthSplit(sentence, n);
    if(splitStr != NULL){
        printf("5: Splited to: ");
        print2DStr(splitStr);
    }
}
    