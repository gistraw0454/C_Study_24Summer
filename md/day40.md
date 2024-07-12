# 40�� - ����
## �Լ�������
- `int (*ptrsum) (int a, int b);`
    - int : ��ȯ��
    - (*ptrSum) : �Լ������͸�
    - (int a, int b) : �Ű����� (������ void�� ���ȣ)
    ```c
    #include <stdio.h>
    int sum(int a, int b) { 
            return a + b;
    }

    int main() {
            int(*ptrSum)(int a,int b);  //�Լ������� ���� 
            ptrSum = sum;  // sum�� �Լ� �ּҸ� ptrSum�� �ִ´�.
            printf("sum�� �ּ�: %p\n", &sum); //&sum�� sum�� ���� 
            printf("ptrSum�� ��: %p\n", ptrSum);
            printf("ptrSum�� �ּ�: %p\n", &ptrSum);
            printf("ptrSum(%d, %d) = %d\n", 3, 4, ptrSum(3, 4));
    }
    ```
    ![alt text](../img/image-1.png)