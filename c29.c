#include <stdio.h>

int main()
{
    int n, i;
    int marks[100];
    int total = 0;
    float average;
    char name[50];

    printf("====================================\n");
    printf("       STUDENT MARKSHEET SYSTEM\n");
    printf("====================================\n");

    printf("Enter student name: ");
    scanf("%49s", name);

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of subjects!\n");
        return 1;
    }

    printf("\nEnter marks for each subject:\n");

    for (i = 0; i < n; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks! Enter marks between 0 and 100.\n");
            return 1;
        }

        total = total + marks[i];
    }

    average = (float)total / n;

    printf("\n====================================\n");
    printf("          STUDENT MARKSHEET\n");
    printf("====================================\n");

    printf("Student Name: %s\n", name);
    printf("------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("Subject %d Marks: %d\n", i + 1, marks[i]);
    }

    printf("------------------------------------\n");
    printf("Total Marks: %d\n", total);
    printf("Average: %.2f\n", average);

    if (average >= 90)
    {
        printf("Grade: A+\n");
    }
    else if (average >= 80)
    {
        printf("Grade: A\n");
    }
    else if (average >= 70)
    {
        printf("Grade: B\n");
    }
    else if (average >= 60)
    {
        printf("Grade: C\n");
    }
    else if (average >= 50)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    if (average >= 50)
    {
        printf("Result: PASS\n");
    }
    else
    {
        printf("Result: FAIL\n");
    }

    printf("====================================\n");
    printf("       THANK YOU!\n");
    printf("====================================\n");

    return 0;
}
