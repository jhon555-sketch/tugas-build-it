#include <stdio.h>
 
int main(void)
{
  printf("## Menentukan Ganjil Genap ## \n");
  printf("============================================== \n\n");
 
  int x;
 
  printf("2");
  scanf("%d",&x);
 
  printf("\n");
 
  if (x % 2 != 0) {
    printf("%d ganjil \n",x);
  }
  else {
    printf("%d genap \n",x);
  }
  return 0;
}
