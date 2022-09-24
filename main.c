#include <stdio.h>

int main() {
//    printf("Hello, World!\n");

//    int i, sum = 0;
//
//    for (int i = 0; i <= 100; ++i) {
//        sum += i;
//    }
//    printf("%d", sum);

//======= 3 ======//
//    for (int i = 1; i < 10; ++i) {
//        for (int j = 1; j < 10; ++j) {
//            if(i < j) break;
//            printf("%d x %d = %-2d ", j, i, i*j );
//        }
//        printf("\n");
//    }

//====== 4 =======//
//斐波那契数列
//int target = 20, result;
//int a = 1, b = 1, c;
//    for (int i = 2; i < target; ++i) {
//        c  = a + b;
//        a = b;
//        b = c;
//    }
//    result = c;
//    printf("%d", result);

//======== 5 ========
//数组
//int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    for (int i = 0; i < 12; ++i) {
//        int day = arr[i];
//        printf("2020年 %d 的天数是：%d 天\n", (i+1), day );
//    }

//大于30的月份
//    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    for (int i = 0; i < 12; ++i) {
//        if(arr[i] > 30){
//            printf("%d ", (i+1));
//        }
//    }
//    printf("月大于30天");


//======== 4 =======
//冒泡排序
//int arr[10] = {5, 11, 8, 6, 15, 17, 20, 10, 13, 22};
//    for (int i = 0; i < 10; ++i) {
//        for (int j = 1; j < 10; ++j) {
//            if(arr[j] < arr[j-1]){
//                int tem = arr[j-1];
//                arr[j-1] = arr[j];
//                arr[j] = tem;
//            }
//        }
//    }
//    for (int i = 0; i < 10; ++i) {
//        printf("%d ", arr[i]);
//    }


//====== 5 ===========//
//斐波那契数列
int arr = 20;
int fib[arr];
fib[0] = fib[1] = 1;
    printf("%d %d ", fib[0],fib[1]);
    for (int i = 2; i < 20; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d ", fib[i]);
    }
    return 0;
}
