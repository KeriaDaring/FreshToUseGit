#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += i;
    }
    printf("%d\n", sum);
    printf("你完成了第一次在终端编译运行c语言代码\n");
    for (int i = 0; i < 100; i++,i++) {
        sum +=sum;
    }
    printf("%d\n", sum);
    printf("More change!");
    return 0;
}
