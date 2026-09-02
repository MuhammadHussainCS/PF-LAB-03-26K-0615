#include<stdio.h>
#include<stdbool.h>
int main(){
    printf("===============================================================\n");
    printf("Int data type usage\n");
    int milkPrice = 240;
    printf("Milk price per liter in Pakistan is %i\n", milkPrice);
    printf("===============================================================\n");
    printf("Float data type usage\n");
    float petrolPrice = 343.87;
    printf("Petrol price in Pakistan is %.2f\n", petrolPrice);

    printf("===============================================================\n");
    printf("Double data type usage\n");
    double houseCost = 25000000.84289;
    printf("Average house cost in Pakistan is Rs.%lf\n", houseCost);

    printf("===============================================================\n");
    printf("Character data type usage\n");
    char myFavCharacter = 'H';
    printf("My Fav Character is %c\n", myFavCharacter);

    printf("===============================================================\n");
    printf("Bool data type usage\n");
    bool isPrsenet = true;
    printf("%d\n", isPrsenet);
    printf("Is present in LAB 03 ? : %s\n", isPrsenet ? "Yes" : "False");
    
    printf("===============================================================\n");
    printf("Sizes of DATA Types in C Language\n");
    printf("===============================================================\n");
    printf("Size of INT = %d BYTES\n", sizeof(int));
    printf("===============================================================\n");
    printf("Size of FLOAT = %d BYTES\n", sizeof(float)); 
    printf("===============================================================\n");
    printf("Size of CHAR = %d BYTES\n", sizeof(char)); 
    printf("===============================================================\n");
    printf("Size of DOUBLE = %d BYTES\n", sizeof(double));
    printf("===============================================================\n");
    printf("Size of BOOL = %d BYTES\n", sizeof(bool));
    printf("===============================================================\n");
}