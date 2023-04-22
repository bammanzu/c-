#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
char fruits[5][10] = {"apple", "banana", "grape", "orange", "watermelon"};
srand(time(NULL));
int computer_choice = rand() % 5; // 랜덤으로 0~4 중 하나를 선택
char guess[10];
printf("Guess which fruit the computer has chosen (apple, banana, grape, orange, watermelon): ");
scanf("%s", guess);
if (strcmp(guess, fruits[computer_choice]) == 0) {
printf("Correct! The computer has chosen %s.", fruits[computer_choice]);
} else {
printf("Wrong! The computer has chosen %s.", fruits[computer_choice]);
}
return 0;
}