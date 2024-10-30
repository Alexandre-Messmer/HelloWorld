#include <stdio.h>


int main(int argc, char const *argv[])
{
    int a[10] = {};
    for (int i = 0; i < 10; i++) {
        a[i] = i;
    }

    int j = 0;
    printf("Please input the index of the element you want to access: ");
    scanf("%d", &j);

    printf("The %d-th element is %d\n", j, a[j]);
    return 0;
}
