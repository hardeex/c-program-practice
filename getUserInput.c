#include <stdio.h>


/*
The problem with scanf is that it picks character upto the first space
other characters afetrwards is nullified

The scanf is not requesting the age if the user enters name with space
To correct this---- use fgets
*/

int main(void){
    // declaring variables
    char food[20];
    char username[100];
    int age;


 // using fgets to receive user-name
   printf("what is your full name? \n" );
   fgets(username, 100, stdin);
   printf("Your name is %s", username);
    // getting the username
    printf("What is best color? (Hint: No space between words) \n");
    scanf("%s", food);
    printf("Favourite Colour:  %s \n", food);

   
  

    // getting the user-age
    printf("Enter your age? " );
    scanf("%d", &age);
    printf("Your age is %i years old\n", age);

    return 0;

}