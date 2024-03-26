#include <stdio.h>

void print_one(int *ptr, int rows); // �Լ� ����

int main()
{
    int one[] = {0, 1, 2, 3, 4}; // ũ�Ⱑ 5�� ������ �迭 �����ϰ� �ʱ�ȭ.
    printf("one = %p\n", one); // �迭�� ���� �ּ� �����.
    printf("&one = %p\n", &one); // �迭�� �ּ� �����.
    printf("&one[0] = %p\n", &one[0]); // �迭�� ù ��° ����� �ּ� �����.
    printf("\n");
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); // print_one �Լ� ȣ���Ͽ� �迭 one�� �ּҿ� ����� ���� ��������.
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); // print_one �Լ� ȣ���Ͽ� �迭 one�� ���� �ּҿ� ����� ���� ��������.
    printf("[----- [������] [2023041062] -----]");
    return 0;
}

void print_one(int *ptr, int rows) 
{/* print out a one-dimensional array using a pointer */ // �迭�� ����ϴ� �Լ�
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
    printf("%p \t %5d\n", ptr + i, *(ptr + i)); // �迭�� �ּҿ� �ش� ����� ���� �����.
    printf("\n");
}
