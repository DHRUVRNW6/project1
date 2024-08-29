#include <stdio.h>


char calculate_grade(int score) {
    return (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' : (score >= 60) ? 'D' : 'F';
}

int main() {
    int score;
    printf("Enter your score out of 100: ");
    scanf("%d", &score);

    char grade = calculate_grade(score);
    printf("Your grade is: %c\n", grade);

    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done\n");
            break;
        case 'C':
            printf("Good job\n");
            break;
        case 'D':
            printf("You passed, but you could do better\n");
            break;
        case 'F':
            printf("Sorry, you failed\n");
            break;
    }

    if (grade != 'F') {
        printf("Congratulations! You are eligible for the next level\n");
    } else {
        printf("Please try again next time\n");
    }

    return 0;
}