#include <stdio.h>


int main(void)
{
int i, n, count2=0, count3=0, count5=0;
scanf("%d", &n);
for (i = 0; i <= n; i=i+1) {
if (i%5 == 0) {
count5 = count5 + 1;
if (i%3 == 0) {
count3 = count3 + 1;
}
} else {
if (i%2 == 0) {
count2 = count2 + 1;
}
}
}
printf("%d %d %d\n", count5, count3, count2);

return 0;


}

