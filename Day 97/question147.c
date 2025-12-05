//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp1 = {"John", 101, 50000.0};
    struct Employee emp2;
    FILE *fp;
    
    fp = fopen("employee.dat", "wb");
    fwrite(&emp1, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("Employee data written to file.\n");
    
    fp = fopen("employee.dat", "rb");
    fread(&emp2, sizeof(struct Employee), 1, fp);
    fclose(fp);
    
    printf("\nEmployee data read from file:\n");
    printf("Name: %s\n", emp2.name);
    printf("ID: %d\n", emp2.id);
    printf("Salary: %.2f\n", emp2.salary);
    
    return 0;
}