#include <stdio.h>
int main() 
{
    float attendance, assignments, quizzes, mid1, mid2, finals, finalGrade;
    printf("Enter attendance percentage (out of 100): ");
    scanf("%f", &attendance);
    if (attendance <= 75) 
	{
        printf("Attendance is less than 75%%. The student has failed.\n");
        return 0; 
    }
    printf("Enter assignment score (out of 100): ");
    scanf("%f", &assignments);
    printf("Enter quiz score (out of 100): ");
    scanf("%f", &quizzes);
    printf("Enter Mid 1 score (out of 100): ");
    scanf("%f", &mid1);
    printf("Enter Mid 2 score (out of 100): ");
    scanf("%f", &mid2);
    printf("Enter final exam score (out of 100): ");
    scanf("%f", &finals);
    finalGrade = (assignments * 0.10) + (quizzes * 0.10) + (mid1 * 0.15) + (mid2 * 0.15) + (finals * 0.50);
    printf("Final Grade: %.2f\n", finalGrade);
    if (finalGrade >= 90) 
	{
        printf("Letter Grade: A\n");
    } 
	else 
	{
        if (finalGrade >= 80) 
		{
            printf("Letter Grade: B\n");
        } 
		else 
		{
            if (finalGrade >= 70) 
			{
                printf("Letter Grade: C\n");
            } 
			else 
			{
                if (finalGrade >= 60) 
				{
                    printf("Letter Grade: D\n");
                } 
				else 
				{
                    printf("Letter Grade: F\n");
                }
            }
        }
    }
    return 0;
}

