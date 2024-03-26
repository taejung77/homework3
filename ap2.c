#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];  // 크기가 5인 정수형 배열 선언
    int *plist[5]; // 크기가 5인 포인터 배열 선언
    list[0] = 10; // 배열 list의 첫 번째 요소에 10을 할당
    list[1] = 11; // 배열 list의 두 번째 요소에 11을 할당
    plist[0] = (int*)malloc(sizeof(int)); 
    // 동적 메모리 할당을 통해 int 크기의 메모리를 할당하고
    //첫 번째 포인터에 할당된 메모리의 주소를 저장
    printf("list[0] \t= %d\n", list[0]); // 배열의 첫 번째 요소 값 출력
    printf("list \t\t= %p\n", list); // 배열의 시작 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); // 배열의 첫 번째 요소의 주소 출력
    printf("list + 0 \t= %p\n", list+0); // 배열의 시작 주소 출력
    printf("list + 1 \t= %p\n", list+1); // 배열의 두 번째 요소의 주소 출력
    printf("list + 2 \t= %p\n", list+2); // 배열의 세 번째 요소의 주소 출력
    printf("list + 3 \t= %p\n", list+3); // 배열의 네 번째 요소의 주소 출력
    printf("list + 4 \t= %p\n", list+4); // 배열의 다섯 번째 요소의 주소 출력
    printf("&list[4] \t= %p\n", &list[4]); // 배열의 다섯 번째 요소의 주소 출력
    printf("[----- [이태정] [2023041062] -----]");
    free(plist[0]); // 동적할당된 메모리 해제
}