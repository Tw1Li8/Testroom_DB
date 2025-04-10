#include <stdio.h>
#define MAX_LINE 50

void data_insert(char *arr,int *count_1)
{
    if(*count_1>=MAX_LINE)
    {
        printf("데이터가 가득 찼습니다");
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
    printf("몇번째 데이터를 삭제 합니까?(0번부터 입력) : ");
    scanf("%d",&idx);
    if(idx<0||idx>=*count_2)
    {
        printf("잘못된 인덱스 입니다.\n");
        return;
    }
    arr[idx]='0';
    printf("삭제되었습니다.");
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

    printf("[초창기 데이터 베이스 추론]\n");
    printf("|**** 1. 데이터 입력 ****|\n");
    printf("|**** 2. 데이터 삭제 ****|\n");
    printf("|**** 3. 데이터 표시 ****|\n");
    printf("|**** 4. 프로그램 종료 ****|\n");
    printf("-------------------------\n");

    printf("원하시는 서비스를 입력해 주세요 : ");
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
            printf("서버프로그램을 종료합니다.");
            return 0;
        default:
            printf("잘못된 선택입니다.");
            break;
    }

    }


    return 0;
}