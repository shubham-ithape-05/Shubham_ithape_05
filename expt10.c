#include <stdio.h>
int main()
{
int n,i;
printf("Enter a numbers: ");
scanf("%d", &n);
// Using while loop
printf("/n multiplicaion table using while loop: /n");
i = 1;
while (i <= 10){
printf("%d x %d = %d/n", n, i, n * i);
i++;
}
// Using do-while loop
printf("/n multiplication table using do-while loop: /n");
i = 1;
do{
printf("%d x %d = %d/n", n, i , n * i);
i++;
}while (i<= 10);
// Using for loop
printf("/n multiplicaton table using for loop: /n");
for(i = 1; i<= 10; i++){
printf("%d x %d = %d/n", n, i, n * i);
}
return 0;
}
