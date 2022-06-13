#include&lt;stdio.h&gt;
main()
{
int n,i; int *ptr;
printf("Enter the total number of elements: ");
scanf("%d", &amp;n);

ptr = (int *) malloc(n* sizeof(int));
if (ptr == NULL)
{
printf("Error.");
exit(0);
}
for (i = 0; i&lt; n; ++i)
{
printf("Enter number%d: ", i + 1);
scanf("%d", ptr + i); }
for (i = 1; i&lt; n; ++i)
{
if (*ptr &lt; *(ptr + i)) *ptr= *(ptr + i);
}
printf("Largest number = %d", *ptr);
free(ptr);
}