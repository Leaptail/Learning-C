#include <stdio.h>
#include <conio.h>

int main(){
    int score;
    printf("Enter a score: ");
    scanf("%d", &score);
    printf("\nGrade: ");
    if(score<50) printf("F");
    else if(score<75) printf("D-B");
    else if(score<100) printf("A is for Asian");
    getch();
}