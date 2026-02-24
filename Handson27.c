#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[10];
    int i, maxIndex=0;
    float totalSalary=0.0;

    for (i=0; i<10; i++) {
        printf("\nEnter details of employee %d\n", i+1);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf(" %49[^\n]", e[i].name);  

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        totalSalary += e[i].salary;  
    }

    for (i = 1; i < 10; i++) {
        if (e[i].salary>e[maxIndex].salary) {
            maxIndex=i;
        }
    }

    printf("\n===== Salary Summary =====\n");
    printf("Total Salary Payout = %.2f\n", totalSalary);
    printf("\n===== Employee with Highest Salary =====\n");
    printf("Employee ID : %d\n", e[maxIndex].id);
    printf("Name        : %s\n", e[maxIndex].name);
    printf("Salary      : %.2f\n", e[maxIndex].salary);

    return 0;
}