#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5]; 
    // 크기가 5인 정수형 배열 선언.
    int *plist[5] = {NULL,};
    //크기가 5인 포인터 배열 선언 후 null로 초기화.
    plist[0] = (int *)malloc(sizeof(int));
    // 동적 메모리 할당을 통해 int 크기의 메모리를 할당하고 첫 번째 포인터에 할당된 메모리의 주소를 저장
    list[0] = 1;
    // 배열의 첫 번째 요소에 1을 할당
    list[1] = 100;
    // 배열의 두 번째 요소에 100을 할당
    *plist[0] = 200;
    // 첫 번째 포인터가 가리키는 메모리에 200을 할당
    printf("list[0] = %d\n", list[0]); // 배열의 첫 번째 요소 값 출력
    printf("&list[0] = %p\n", &list[0]); // 배열의 첫 번째 요소의 주소 출력
    printf("list = %p\n", list); // 배열의 시작 주소 출력
    printf("&list = %p\n", &list); // 배열의 주소 출력
    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]); // 배열의 두 번째 요소 값 출력
    printf("&list[1] = %p\n", &list[1]); // 배열의 두 번째 요소의 주소 출력
    printf("*(list+1) = %d\n", *(list + 1)); // 포인터 산술을 사용하여 두 번째 요소 값 출력
    printf("list+1 = %p\n", list+1); // 배열의 두 번째 요소의 주소 출력
    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]); // 동적으로 할당된 메모리에 저장된 값 출력
    printf("&plist[0] = %p\n", &plist[0]); // 첫 번째 포인터의 주소 출력
    printf("&plist = %p\n", &plist); // 포인터 배열의 주소 출력
    printf("plist = %p\n", plist); // 포인터 배열의 시작 주소 출력
    printf("plist[0] = %p\n", plist[0]); // 첫 번째 포인터가 가리키는 메모리의 주소 출력
    printf("plist[1] = %p\n", plist[1]); // 두 번째 포인터가 가리키는 메모리의 주소 출력 (NULL)
    printf("plist[2] = %p\n", plist[2]); // 세 번째 포인터가 가리키는 메모리의 주소 출력 (NULL)
    printf("plist[3] = %p\n", plist[3]); // 네 번째 포인터가 가리키는 메모리의 주소 출력 (NULL)
    printf("plist[4] = %p\n", plist[4]); // 다섯 번째 포인터가 가리키는 메모리의 주소 출력 (NULL)
    printf("[---- [이태정] [2023041062] ----]");
    free(plist[0]); // 동적으로 할당된 메모리 해제
} 