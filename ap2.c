#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];  // ũ�Ⱑ 5�� ������ �迭 ����
    int *plist[5]; // ũ�Ⱑ 5�� ������ �迭 ����
    list[0] = 10; // �迭 list�� ù ��° ��ҿ� 10�� �Ҵ�
    list[1] = 11; // �迭 list�� �� ��° ��ҿ� 11�� �Ҵ�
    plist[0] = (int*)malloc(sizeof(int)); 
    // ���� �޸� �Ҵ��� ���� int ũ���� �޸𸮸� �Ҵ��ϰ�
    //ù ��° �����Ϳ� �Ҵ�� �޸��� �ּҸ� ����
    printf("list[0] \t= %d\n", list[0]); // �迭�� ù ��° ��� �� ���
    printf("list \t\t= %p\n", list); // �迭�� ���� �ּ� ���
    printf("&list[0] \t= %p\n", &list[0]); // �迭�� ù ��° ����� �ּ� ���
    printf("list + 0 \t= %p\n", list+0); // �迭�� ���� �ּ� ���
    printf("list + 1 \t= %p\n", list+1); // �迭�� �� ��° ����� �ּ� ���
    printf("list + 2 \t= %p\n", list+2); // �迭�� �� ��° ����� �ּ� ���
    printf("list + 3 \t= %p\n", list+3); // �迭�� �� ��° ����� �ּ� ���
    printf("list + 4 \t= %p\n", list+4); // �迭�� �ټ� ��° ����� �ּ� ���
    printf("&list[4] \t= %p\n", &list[4]); // �迭�� �ټ� ��° ����� �ּ� ���
    printf("[----- [������] [2023041062] -----]");
    free(plist[0]); // �����Ҵ�� �޸� ����
}