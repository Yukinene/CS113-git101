#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 100 ; 
    printf("x = %d\n", x );
    printf("reference of x = %lu\n",&x);
    printf("reference of x = %p\n",&x); /* รูปฐาน16 */
    
    //array// จัดเก็บหลาย ๆ ค่า ไว้ค่าเดียว
    int number[] = {7,8,9,10,11};
    int number[100] = {7,8,9,10,11};
    int number[5];
    printf("index 3 = %d\n",number[3]);
    printf("reference index 3 = %p\n",&number[3]);
    printf("reference index 0 = %p\n",&number[0]);
    printf("reference index 0 = %p\n",number+ 3); //+3เท่าของarray
    /*เปลี่ยนค่า array*/
    int number[3000] = 200;
    printf("reference index 3 = %p\n",&number[3]);
    printf("reference index 0 = %p\n",number+ 3);

    //pointer// ตัวชี้
    int *ptr = &x;
    int *arrPtr;
    arrPtr = number; // &number[0] เป็น default
    arrPtr = arrPtr+1;
    *arrPtr = *arrPtr+1;
    // * derefencing
    printf("arrPtr = %p,*arrPtr = %d\n",arrPtr,*arrPtr);
    printf("number[1] = %p,number[1] = %d\n",&number[1],number[1]);

    //forbidden thing to do (อย่าทำ)
    //&x = 50;
    //ptr = x;
    //*ptr = 50;
    
    //ประยุกต์ กับ loop
    int number[] = {7,8,9,10,11};
    char input[50];
    for (int *ptr = number; ptr <= &number[4]; ptr++)
    {
        printf("[%p] = %d\n",ptr , *ptr);
    }
    char input[50];
    int count = 0;
    char c;
    while ((c = getchar() != '\n'))
    {
        input[count] = c;
        count++;
    }
    input[count] = '\0';
    printf("input = %s\n",input);
    for (char *cPtr = input[0];*cPtr != '\0'; cPtr++)
    {
       printf("%c\n",*cPtr);
    }

    //scanf (รับค่าเป็น array)
    int a;
    char c;
    char s[50];
    scanf("%c-%d-%s",&c,&a,&s[0]); //&s[0] = s
    printf("%c     %d     %s",c,a,s);
}