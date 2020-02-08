#include <stdio.h>

/*Dynamic Memory Allocation */


int main ()
{  int *data;
   int n_data, cnt=0;
   int i, sum;
 
   printf("Enter the number of data: ");
   scanf("%d", &n_data); //input data
 
   data = (int *)malloc(n_data*sizeof(int)); //malloc = จองพื้นที่ใน memory 
 
   while (cnt < n_data) {
      printf("Enter data: ");
      scanf("%d",&data[cnt]);       /* &data[cnt] <--> data+cnt */
      cnt++;
   }
   for (i=sum=0; i < cnt; i++) {
      sum += data[i];
      printf("Data element #%d is %d\n", i, data[i]);
   }
   printf ("Sum = %d, Mean = %.2f\n", sum, sum/(float)cnt);

   free(data); //free = ปล่อยพื้นที่ใน memory 
}