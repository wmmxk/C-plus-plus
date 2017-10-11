/*
source: http://gradebot.org/doc/ipur/ownership.html

This code is to use two types of errors: "use-after-free error", "double free error"

 */
#include<stdlib.h>
void drop(char *p) {
    free(p);
}

int main() {
    char *p = malloc(sizeof(char));
    drop(p);
    // Error: use after free
    *p = 'a';
    // Error: double free
    drop(p);
}
