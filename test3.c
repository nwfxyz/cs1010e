#include <stdio.h>

int main(void) {
int i, n=0;

scanf("%d", &i);
while (i > 0) {
   printf("in while\n");
   n = n + 1;
   printf("no : %d\n", i);
   scanf("%d", &i);
}
printf("%d\n", n); 
   
   return 0;
}
