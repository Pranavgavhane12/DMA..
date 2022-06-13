#include&lt;stdio.h&gt;

void main()
{
inti, n, sum = 0,avg;
int *a;
printf("Enter the size of array A \n");
scanf("%d", &amp;n);
a = (int *) malloc(n * sizeof(int));
printf("Enter Elements of the List \n");
for (i = 0; i&lt; n; i++)
{
scanf("%d", a + i);
}
for (i = 0; i&lt; n; i++)
{
sum = sum + *(a + i);
}
avg=sum/n;
printf("Sum of all elements in array = %d\n", sum);
printf(“Average is %d”,avg);
}