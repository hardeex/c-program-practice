#include <stdio.h>

/**
 * main entry point
*/
int main(void){

char student[150];

    printf("I am a student of ONWARD, I am in JSS TWO \n");

    printf("What is your Name? ");
    fgets(student, 150, stdin);
    printf("Your name is %s", student);

    
    

    return 0;
}