#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int); //함수 선언
float sum2(float *list, int); //함수 선언
float sum3(int n, float *list); //함수 선언
float input[MAX_SIZE], answer; //전역 변수 선언
int i; //전역 변수 선언

void main(void)
{
    for(i=0; i < MAX_SIZE; i++){
        input[i] = i;} // input 배열에 값을 채우는 반복문.
    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input 배열의 시작 주소를 출력함.
    answer = sum1(input, MAX_SIZE);//sum1 함수 호출하여 반환값을 answer에 저장.
    printf("The sum is: %f\n\n", answer);// 반환된 합계를 출력함.
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input 배열의 시작 주소를 출력함.
    answer = sum2(input, MAX_SIZE); //sum2 함수 호출하여 반환값을 answer에 저장.
    printf("The sum is: %f\n\n", answer); // 반환된 합계 출력함.
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input 배열의 시작 주소를 출력함.
    answer = sum3(MAX_SIZE, input);  // sum3 함수 호출하여 반환값을 answer에 저장.
    printf("The sum is: %f\n\n", answer); // 반환된 합계 출력함.
    printf("[----- [이태정] [2023041062] -----]");

}
float sum1(float list[], int n) {
    printf("list\t= %p\n", list); // 배열의 시작 주소 출력함.
    printf("&list\t= %p\n\n", &list); // 배열의 주소를 출력함.
    int i;
    float tempsum = 0;
    for( i = 0; i < n; i++) 
    tempsum += list[i]; // 배열의 각 요소를 더해줌.
    return tempsum ; // 합계를 반환해줌.
}
float sum2(float *list, int n) { // 주어진 배열의 합을 계산하는 함수 (포인터 사용)
    printf("list\t= %p\n", list); // 배열의 시작 주소 출력함.
    printf("&list\t= %p\n\n", &list); // 배열의 주소 출력함.
    int i ;
    float tempsum = 0;
    for( i = 0; i < n; i++)
    tempsum += *(list + i); // 포인터 산술을 사용하여 배열의 각 요소를 더해줌.
    return tempsum; // 합계 반환해줌.
}
/* stack variable reuse test */
float sum3(int n, float *list) { // 주어진 배열의 합을 계산하는 함수 (포인터 사용 및 매개변수 재사용)
    printf("list\t= %p\n", list); // 배열의 시작 주소 출력함.
    printf("&list\t= %p\n\n", &list); // 배열의 주소 출력함.
    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++)
    tempsum += *(list +i); // 포인터 산술을 사용하여 배열의 각 요소를 더해줌.
    return tempsum; // 합계 반환해줌.
}