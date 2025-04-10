#include <stdio.h>
#define MAX_LINE 50

void data_insert(char *arr,int *count_1)
{
    if(*count_1>=MAX_LINE)
    {
        printf("�����Ͱ� ���� á���ϴ�");
        return;
    }
    char data;
    scanf(" %c",&data);
    arr[*count_1]=data;
    (*count_1)++;
}

void data_delete(char *arr,int *count_2)
{
    int idx;
    printf("���° �����͸� ���� �մϱ�?(0������ �Է�) : ");
    scanf("%d",&idx);
    if(idx<0||idx>=*count_2)
    {
        printf("�߸��� �ε��� �Դϴ�.\n");
        return;
    }
    arr[idx]='0';
    printf("�����Ǿ����ϴ�.");
}

void data_view(char *arr)
{
    for (int i = 0; i < MAX_LINE; i++)
    {
        if(arr[i] == '0')
        {
            arr[i]=' ';
            printf("%c\n",arr[i]);
        }
        else
            printf("%c\n",arr[i]);
    }
}

int main(void)
{
    int choice;
    int count_2,count_1 = 0;
    char arr[MAX_LINE];

    for (int i = 0; i < MAX_LINE; i++)
    {
        arr[i] = '0';
    }

    while (1)
    {

    printf("[��â�� ������ ���̽� �߷�]\n");
    printf("|**** 1. ������ �Է� ****|\n");
    printf("|**** 2. ������ ���� ****|\n");
    printf("|**** 3. ������ ǥ�� ****|\n");
    printf("|**** 4. ���α׷� ���� ****|\n");
    printf("-------------------------\n");

    printf("���Ͻô� ���񽺸� �Է��� �ּ��� : ");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
            data_insert(arr,&count_1);
            break;
        case 2:
            data_delete(arr,&count_2);
            break;
        case 3:
            data_view(arr);
            break;
        case 4:
            printf("�������α׷��� �����մϴ�.");
            return 0;
        default:
            printf("�߸��� �����Դϴ�.");
            break;
    }

    }


    return 0;
}