#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    char name[20];
    fgets(name, 20, stdin);
    printf("Hello %s", name);


    return 0;
}