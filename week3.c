#include <stdio.h>

//function

int addTen(int x) //เพิ่มค่าไป 10
{
    printf("x in addTeb = %d\n",x);
    x = x + 10;
    return x;
}
int addTwenty(); //ประกาศฟังก์ชันว่า ฟังก์ชันนี้เพิ่มค่าไป 20
int x = 300; //global var
int main()
{
    int x = 10;
    int y = addTen(x); //เรียกใช้ addTen
    printf("addTen in main = %d\n",addTen(x));
    printf("x in main = %d\n",x);
    int z = addTwenty(); //เรียกใช้ addTwenty
    printf("addTwenty in main = %d\n",z);
    printf("x in main = %d\n",x);
}
int addTwenty() //เพิ่มค่าไป 20 แต่เขียนสมการข้างล่าง
{
    printf("x in addTwenty = %d\n",x);
    x = x + 20;
    return x;
}