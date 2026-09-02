#define __USE_MINGW_ANSI_STDIO 1 /*i use it here bcz long double doesn't work until this line is not there in your code (standard C problem)*/
#include<stdio.h>
#include<string.h>
int main(){
    printf("Exploring data types in C\n");
    char name[70];
    printf("\nPlease Enter your name : ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name, "\n")] = '\0';
    
    short int age;
    printf("\nWhat is your age? : ");
    scanf("%hd", &age);

    float height;
    printf("\nWhat is your height in ft? : ");
    scanf("%f", &height);

    unsigned int marksInInter;
    printf("\nEnter Marks In Intermidiate: ");
    scanf("%u", &marksInInter);

    getchar();
    char currentInstitue[100];
    printf("\nWhere are you studying currently ? : ");
    fgets(currentInstitue,sizeof(currentInstitue),stdin);
    currentInstitue[strcspn(currentInstitue, "\n")] = '\0';
    
    long double spentInLife;
    printf("\nHow much do you spent in your whole life ? : ");
    scanf("%Lf", &spentInLife);

    float stipend;
    printf("\nWhat is your Internship stipend ? : ");
    scanf("%f", &stipend);

    printf("\n\nYour name is %s,currently %hd years old and %.2f ft tall.You achieved %u marks in intermidiate exams and you are currently studying in %s and spend Rs. %Lf in your whole life and you are earning %.2f stipend from your internship.", name,age,height,marksInInter,currentInstitue,spentInLife,stipend);

    return 0;
}