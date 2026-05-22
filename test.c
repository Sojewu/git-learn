#include <stdio.h>
#include "test.h"

void test()
{
    int a;
    printf("test\n");
    scanf("%d", &a);
    printf("%d\n", a);
}



int main()
{
    printf("hello world\n");
    test();

    return 0;
}
