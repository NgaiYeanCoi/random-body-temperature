#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int try();
int run();
void main()
{
    printf("*****************�gӭʹ�Üض��S�C���ɳ���*****************\n");
    run();
}
int run() 
{
    int i, t;
    int x = 0;
    int temp;
    printf("ݔ����Ҫ�ׂ�����:");
    scanf("%d", &t);
    srand((int)time(NULL));
    do
    {
        for (i = 0; i < t; i++)
        {
            x = rand() % 10 + 1;
            if (x == 10)
            {
                x = 0;
                printf("��%d��ݔ���Y����:", i + 1);
                printf("37.0��");
                printf("\n");
            }
            else
            {
                printf("��%d��ݔ���Y����:", i + 1);
                printf("36.%d��", x);
                printf("\n");
            }
        }
        do
        {
            printf("�Ƿ���������? 0/1\n");
            scanf("%d", &temp);
            if (temp != 1 && temp != 0)
            {
                printf("ݔ���e�`Ո����ݔ��\n");
            }
            else if (temp == 0)
            {  try();
            }
        } while (temp != 0 && temp != 1);
    } while (temp == 1);
    return 0;
}
int try() 
{
    int temp;
    do
    {
        printf("�Ƿ��^�m? 0/1\n");
        scanf("%d", &temp);
    if (temp != 1 && temp != 0)
    {
        printf("ݔ���e�`Ո����ݔ��\n");
    }
    else if(temp==1)
    {
    run();
    }
    else if (temp == 0)
    {
        return 0;
    }
    } while (temp != 0 && temp != 1);
}
/*int main()
{
    int i,t;
    int x = 0;
    int temp;
    printf("ݔ����Ҫ�ׂ�����:");
    scanf("%d",&t);
    srand((int)time(NULL)); 
       do
       {
           for (i = 0;i < t; i++)
           {
               x = rand() % 10 + 1;
               if (x == 10)
               {
                   x = 0;
                   printf("��%d��ݔ���Y����:", i + 1);
                   printf("37.0��");
                   printf("\n");
               }
               else
               {
                   printf("��%d��ݔ���Y����:", i + 1);
                   printf("36.%d��", x);
                   printf("\n");
               }
           }
           do
           {
               printf("�Ƿ���������? 0/1\n");
               scanf("%d", &temp);
               if (temp != 1 && temp != 0)
               {
                   printf("ݔ���e�`Ո����ݔ��\n");
               }
               else if(temp==0)
               {
                   return 0;
               }
           } while (temp!=0&&temp!=1);
       } while (temp==1);
}*/