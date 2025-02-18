Scenario 1: Employee Salary Calculation 

//with
#include <stdio.h>

float calculate_salary_with_builtins(float base_salary, int experience_years) {
    float bonus = 0;
    if (experience_years >= 10) {
        bonus = 0.1 * base_salary;
    } else if (experience_years >= 5) {
        bonus = 0.05 * base_salary;
    }
    float total_salary = base_salary + bonus;
    return total_salary;
}

int main() {
    float base_salary;
    int experience_years;

    printf("Enter base salary: ");
    scanf("%f", &base_salary);
    printf("Enter years of experience: ");
    scanf("%d", &experience_years);

    float salary_with_builtins = calculate_salary_with_builtins(base_salary, experience_years);

    printf("Total salary with built-ins: %.2f\n", salary_with_builtins);
    return 0;
}

//without
#include <stdio.h>

float calculate_salary_without_builtins(float base_salary, int experience_years) {
    float bonus = 0;
    if (experience_years >= 10) {
        bonus = base_salary / 10;
    } else if (experience_years >= 5) {
        bonus = base_salary / 20;
    }
    float total_salary = base_salary + bonus;
    return total_salary;
}

int main() {
    float base_salary;
    int experience_years;

    printf("Enter base salary: ");
    scanf("%f", &base_salary);
    printf("Enter years of experience: ");
    scanf("%d", &experience_years);

    float salary_without_builtins = calculate_salary_without_builtins(base_salary, experience_years);

    printf("Total salary without built-ins: %.2f\n", salary_without_builtins);
    return 0;
}

Scenario 2: String Manipulation for Usernames 

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void format_username_with_builtins(char* username) {
    char* src = username;
    char* dst = username;

    while (*src != '\0') {
        if (*src != ' ') {
            *dst = tolower(*src);
            dst++;
        }
        src++;
    }
    *dst = '\0';
}

int main() {
    char username[100];

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    format_username_with_builtins(username);

    printf("Formatted username with built-ins: %s\n", username);

    return 0;
}

#include <stdio.h>

void format_username_without_builtins(char* username) {
    int i = 0, j = 0;

    while (username[i] != '\0') {
        if (username[i] != ' ') {
            if (username[i] >= 'A' && username[i] <= 'Z') {
                username[j++] = username[i] + 32;
            } else {
                username[j++] = username[i];
            }
        }
        i++;
    }
    username[j] = '\0';
}

int main() {
    char username[100];

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    format_username_without_builtins(username);

    printf("Formatted username without built-ins: %s\n", username);

    return 0;
}

