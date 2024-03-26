#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int); //�Լ� ����
float sum2(float *list, int); //�Լ� ����
float sum3(int n, float *list); //�Լ� ����
float input[MAX_SIZE], answer; //���� ���� ����
int i; //���� ���� ����

void main(void)
{
    for(i=0; i < MAX_SIZE; i++){
        input[i] = i;} // input �迭�� ���� ä��� �ݺ���.
    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input �迭�� ���� �ּҸ� �����.
    answer = sum1(input, MAX_SIZE);//sum1 �Լ� ȣ���Ͽ� ��ȯ���� answer�� ����.
    printf("The sum is: %f\n\n", answer);// ��ȯ�� �հ踦 �����.
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input �迭�� ���� �ּҸ� �����.
    answer = sum2(input, MAX_SIZE); //sum2 �Լ� ȣ���Ͽ� ��ȯ���� answer�� ����.
    printf("The sum is: %f\n\n", answer); // ��ȯ�� �հ� �����.
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input �迭�� ���� �ּҸ� �����.
    answer = sum3(MAX_SIZE, input);  // sum3 �Լ� ȣ���Ͽ� ��ȯ���� answer�� ����.
    printf("The sum is: %f\n\n", answer); // ��ȯ�� �հ� �����.
    printf("[----- [������] [2023041062] -----]");

}
float sum1(float list[], int n) {
    printf("list\t= %p\n", list); // �迭�� ���� �ּ� �����.
    printf("&list\t= %p\n\n", &list); // �迭�� �ּҸ� �����.
    int i;
    float tempsum = 0;
    for( i = 0; i < n; i++) 
    tempsum += list[i]; // �迭�� �� ��Ҹ� ������.
    return tempsum ; // �հ踦 ��ȯ����.
}
float sum2(float *list, int n) { // �־��� �迭�� ���� ����ϴ� �Լ� (������ ���)
    printf("list\t= %p\n", list); // �迭�� ���� �ּ� �����.
    printf("&list\t= %p\n\n", &list); // �迭�� �ּ� �����.
    int i ;
    float tempsum = 0;
    for( i = 0; i < n; i++)
    tempsum += *(list + i); // ������ ����� ����Ͽ� �迭�� �� ��Ҹ� ������.
    return tempsum; // �հ� ��ȯ����.
}
/* stack variable reuse test */
float sum3(int n, float *list) { // �־��� �迭�� ���� ����ϴ� �Լ� (������ ��� �� �Ű����� ����)
    printf("list\t= %p\n", list); // �迭�� ���� �ּ� �����.
    printf("&list\t= %p\n\n", &list); // �迭�� �ּ� �����.
    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++)
    tempsum += *(list +i); // ������ ����� ����Ͽ� �迭�� �� ��Ҹ� ������.
    return tempsum; // �հ� ��ȯ����.
}