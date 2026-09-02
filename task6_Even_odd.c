#include<stdio.h>
int main(){
    int num;
    printf("Hey user ! please enter the number : ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\n %d is an even number!", num);
    } else {
        printf("\n%d is an odd number!", num);
    }
    return 0;
}