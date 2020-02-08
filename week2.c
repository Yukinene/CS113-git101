#include <stdio.h>
#include <stdlib.h>
char name[20];
char n[5];
char c[0];
int main()
{
    //basic input/output ตัวรับ/ส่งออกข้อมูล

    printf("Enter name : ");
    gets(name);
    fgets(name,20,stdin);
    printf("names = %s\n",name);

    fgets(n,5,stdin);
    int i = atoi(n);
    //getchar(c);
    double d = atof(n);
    long l = atol(n);
    // 123\n\0
    printf("n = %s , i = %d",name,i);

    //puts(n);
    //putchar(100); //putchar(h);

    //boolean ค่าความจริง

    //boolean false = เท็จ
    int found = 0;
    float isIn = 0.0;
    char isExist = "\0";

    //if (expression){}
    if(i>0 && i<20) 
    {
        //commands
        printf("if\n");
    }
    else if (i<100 || !found && isExist)
    {
        printf("else if\n");
    }
    else if (i > 'A' && i < 'z')
    {
       printf("else if 2\n");
    }
    else
    {
        printf("%d\n",i>0);
    }
    
    //loop วนไปเรื่อย ๆ
    fgets(n,5,stdin);
    int i = atoi(n);
    //while = loop ไปเรื่อย ๆ จนกว่าจะไม่เข้าเงื่อนไข
    int count = 0;
    while (count < i)
    {
        //printf("%d\n",count);
        //count++;

    }

    //for = loop ไปเรื่อย ๆ จนกว่าจะเข้าเงื่อนไข
    for (int j = 0; j < i ; j++)
    {
        //printf("%d\n",j);
    }
    
    //infinity loop ไม่มีที่สิ้นสุด
    while (1)
    {
        break;/* บังคับหยุด loop */
    }
    for (;;)
    {
        break;
    }
}