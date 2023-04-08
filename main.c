#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//comparing two strings of words

int main(void) 
{ 
  char s1[200], s2[200];
  int count1, count2, value, i;
  printf("Please enter your first string of words:\n");
  gets(s1);
    printf("\nPlease enter your second string of words:\n");
  gets(s2);
  system("clear");
  count1 = strlen(s1);
  count2 = strlen(s2);
  printf("First string: %s\n", s1);
  printf("\nSecond string: %s\n", s2);
  value = strcmp (s1, s2);
  if (value == 0)
    printf("\nThe strings are same\n");
  else
    printf("\nThe strings are not equal\n");

  //strncat(s1, s2, 5);
 // printf("\nString after concatenation of both strings but taking only 5 characters from the second string: %s\n", s1);
  
  printf("\nThe lenght of your first string is = %d\n", count1);
   printf("\nThe lenght of your second string is = %d\n", count2);
printf("\nLenght of both strings = %d\n", count1 + count2);
  printf("\n\nEnd of program\n");
 
  sleep(20);
  system("clear");
 printf("Welcome, User");
}