//Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Status {
    INACTIVE,
    ACTIVE,
    PENDING
};

enum Priority {
    LOW = 10,
    MEDIUM,
    HIGH = 50
};

int main() {
    printf("Default values:\n");
    printf("INACTIVE = %d, ACTIVE = %d, PENDING = %d\n", INACTIVE, ACTIVE, PENDING);
    
    printf("\nCustom values:\n");
    printf("LOW = %d, MEDIUM = %d, HIGH = %d\n", LOW, MEDIUM, HIGH);
    
    printf("\nStored in int:\n");
    int val = ACTIVE;
    printf("val = %d\n", val);
    
    return 0;
}