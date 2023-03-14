#include<stdio.h>
int count(char str[]) {
    int c = 0,space = 0;
    for(int i=0; str[i] != '\0'; i++) {
    if((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
    c++;
 }
   printf("Vowels are %d\n",c);

   for(int i=0; str[i] != '\0'; i++) {
    if(str[i] == ' ')
    space++;
 }
 printf("Spaces are %d\n",space);
}

 int main() {
     char str[50];
     gets(str);
     count(str);
     return 0;
 }
