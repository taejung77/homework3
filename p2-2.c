#include <stdio.h>

void print_one(int *ptr, int rows); // 함수 선언

int main()
{
    int one[] = {0, 1, 2, 3, 4}; // 크기가 5인 정수형 배열 선언하고 초기화.
    printf("one = %p\n", one); // 배열의 시작 주소 출력함.
    printf("&one = %p\n", &one); // 배열의 주소 출력함.
    printf("&one[0] = %p\n", &one[0]); // 배열의 첫 번째 요소의 주소 출력함.
    printf("\n");
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); // print_one 함수 호출하여 배열 one의 주소와 요소의 개수 전달해줌.
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); // print_one 함수 호출하여 배열 one의 시작 주소와 요소의 개수 전달해줌.
    printf("[----- [이태정] [2023041062] -----]");
    return 0;
}

void print_one(int *ptr, int rows) 
{/* print out a one-dimensional array using a pointer */ // 배열을 출력하는 함수
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
    printf("%p \t %5d\n", ptr + i, *(ptr + i)); // 배열의 주소와 해당 요소의 값을 출력함.
    printf("\n");
}
