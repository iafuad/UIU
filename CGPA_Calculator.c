#include <stdio.h>
#include <string.h>

int main()
{
    int courseCount;
    float currCourseCredits, currCourseGrade, sumCredits = 0, sumCreditsXGrades = 0;
    char currCourseLetterGrade[2];
    char *letterGradeArr[11] = {"A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "F"};
    float gradeArr[11] = {4.00, 3.67, 3.33, 3.00, 2.67, 2.33, 2.00, 1.67, 1.33, 1.00, 0.00};
    printf("Enter course count: ");
    scanf("%d", &courseCount);
    for (int i = 1; i <= courseCount; i++)
    {
        printf("Enter course %d credits and grade, separated by space: ", i);
        scanf(" %f %s", &currCourseCredits, currCourseLetterGrade);
        for (int i = 0; i <= 10; i++)
        {
            if ((strcmp(letterGradeArr[i], currCourseLetterGrade) == 0))
            {
                currCourseGrade = gradeArr[i];
                break;
            }
        }
        sumCreditsXGrades += currCourseCredits * currCourseGrade;
        sumCredits += currCourseCredits;
    }
    printf("CGPA: %.2f\n", sumCreditsXGrades / sumCredits);
    return 0;
}
