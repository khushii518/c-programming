//Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp = {"John", 101, {15, 8, 2020}};
    
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Joining Date: %d/%d/%d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
    
    return 0;
}