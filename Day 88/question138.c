//Print all enum names and integer values using a loop.

#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char *roleNames[] = {"ADMIN", "USER", "GUEST"};
    
    printf("Enum Names and Values:\n");
    for (int i = ADMIN; i <= GUEST; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }
    
    return 0;
}