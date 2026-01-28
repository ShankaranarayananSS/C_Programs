#include<stdio.h>
int main(){
  char letter;
  printf("Enter any letter:");
  scanf("%c",&letter);
  
  if(letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U' ||
    letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u'){
    printf("\'%c\' is a Vowel!",letter);
  }
  else if(letter==' '){
    printf("\'%c\' is a White Space!",letter);
	}
  else{
    printf("\'%c\' is a Consonant or Other character!",letter);
  }
  return 0;
}
