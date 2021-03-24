#include <stdio.h>

#define MIN 0
#define MAX 100

int main()
{

    int n, grade, min = MAX + 1, max = MIN - 1;

    printf("Number of students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        do
        {
            printf("Enter the note #%d: ", i);
            scanf("%d", &grade);
            if (grade < MIN || grade > MAX)
            {
                printf("Invalid number! (%d<=>%d)\n", MIN, MAX);
            }
        } while (grade < MIN || grade > MAX);

        if (grade > max)
            max = grade;
        if (grade < min)
            min = grade;
    }

    printf("MIN=%d, MAX=%d\n", min, max);
}