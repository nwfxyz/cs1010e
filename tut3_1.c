#include <stdio.h>

int main(void)
{
int i=1;
while (i > 0) {
i = i + 1;
}
printf("%d\n", i);
return 0;
}


/* It will go on for infite number of times and crash not printing anything*/
