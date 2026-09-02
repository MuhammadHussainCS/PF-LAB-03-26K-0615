#include<stdio.h>
#include<conio.h>
#include<string.h>
#define PURPLE  "\033[1;35m"
#define ORANGE  "\033[38;5;208m"  
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define RESET   "\033[0m"

int main(){
    char ch;
    printf("\nEnetr a character : ");
    ch = getchar();
    printf("\n You entered : %c\n", ch);
    printf(GREEN "\nSo basically getchar() allows us to eneter as many caharacters as we want and waits for the enter key to be pressed then since it is used for inputting char value so it picks a first character that user entered and store it in char variable if assigned!\n\n" RESET);

    printf("Enter character again : ");
    ch = getche();
    printf("\nYou entered : %c", ch);

    printf("\nEnter character again : ");
    ch = getch();
    printf("\nYou entered : %c", ch);

    printf(YELLOW "\n\nSo basically getch and getche inputs a caharcter and as we trigger any key from our keyboard it reads it and store it to the char variable if assigned , it does not wait for the confirmation via Enter Key . The main difference b/w getch() and getche() is that getche() inputs character with echo while getch() does not.\n" RESET);

    putchar('H');
    printf(PURPLE "\n\nSo the above Letter \'H\' is printed using putchar() function which displays a single char value on the screen" RESET);

    getchar();
    char name[50];
    printf("\n\nEnter your name : ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0';

    puts(name);

    printf(ORANGE "\nputs() function is used to print char array AKA Strings" RESET);


    return 0;

}