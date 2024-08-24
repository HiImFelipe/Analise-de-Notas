#include <stdio.h>
#include <stdlib.h>

void gradePrompt(int gradeNumber, float* grade) {
    *grade = 0;

    printf("Digite a nota do aluno %d: ", gradeNumber + 1);
    scanf("%f", grade);
}

float calculateAverage(float grades[], int studentAmount) {
    float average = 0;

    for(int i = 0; i < studentAmount; i++) {
        average += grades[i];
    }

    average = average / studentAmount;

    return average;
}

float highestGrade(float grades[], int studentAmount) {
    float highestGradeFound = 0;

    for(int i = 0; i < studentAmount; i++) {
        if(i == 0) highestGradeFound = grades[i];

        if(grades[i] > highestGradeFound) highestGradeFound = grades[i];
    }

    return highestGradeFound;
}

float lowestGrade(float grades[], int studentAmount) {
    float lowestGradeFound;

    for(int i = 0; i < studentAmount; i++) {
        if(i == 0) lowestGradeFound = grades[i];

        if(grades[i] < lowestGradeFound) lowestGradeFound = grades[i];
    }

    return lowestGradeFound;
}

int main()
{
    int studentAmount = 0;

    printf("Digite o numero de alunos: ");
    scanf("%d", &studentAmount);

    float grades[studentAmount];

    for(int i = 0; i < studentAmount; i++) {
        gradePrompt(i, &grades[i]);
    }

    printf("Media das notas: %.2f \n", calculateAverage(grades, studentAmount));
    printf("Nota mais alta: %.2f \n", highestGrade(grades, studentAmount));
    printf("Nota mais baixa: %.2f \n", lowestGrade(grades, studentAmount));
}