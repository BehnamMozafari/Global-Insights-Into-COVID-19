#include <stdio.h>
#include <unistd.h>

void helloworld() {
    for (int i = 0; i < 5; i ++) {
        if (fork() == 0) {
            printf("hello world");
        }
        else {
            printf("hello world");
        }
    }
}