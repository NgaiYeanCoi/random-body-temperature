#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int try();
int run();
void main()
{
    printf("*****************歡迎使用溫度隨機生成程序*****************\n");
    run();
}
int run() 
{
    int i, t;
    int x = 0;
    int temp;
    printf("輸入需要幾個數字:");
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
                printf("第%d個輸出結果為:", i + 1);
                printf("37.0℃");
                printf("\n");
            }
            else
            {
                printf("第%d個輸出結果為:", i + 1);
                printf("36.%d℃", x);
                printf("\n");
            }
        }
        do
        {
            printf("是否重新生成? 0/1\n");
            scanf("%d", &temp);
            if (temp != 1 && temp != 0)
            {
                printf("輸入錯誤請重新輸入\n");
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
        printf("是否繼續? 0/1\n");
        scanf("%d", &temp);
    if (temp != 1 && temp != 0)
    {
        printf("輸入錯誤請重新輸入\n");
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
    printf("輸入需要幾個數字:");
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
                   printf("第%d個輸出結果為:", i + 1);
                   printf("37.0℃");
                   printf("\n");
               }
               else
               {
                   printf("第%d個輸出結果為:", i + 1);
                   printf("36.%d℃", x);
                   printf("\n");
               }
           }
           do
           {
               printf("是否重新生成? 0/1\n");
               scanf("%d", &temp);
               if (temp != 1 && temp != 0)
               {
                   printf("輸入錯誤請重新輸入\n");
               }
               else if(temp==0)
               {
                   return 0;
               }
           } while (temp!=0&&temp!=1);
       } while (temp==1);
}*/