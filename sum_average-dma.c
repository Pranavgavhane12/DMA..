#include&lt;stdio.h&gt;

void main()
{
inti, n, sum = 0,avg;
int *a;
printf(&quot;Enter the size of array A \n&quot;);
scanf(&quot;%d&quot;, &amp;n);
a = (int *) malloc(n * sizeof(int));
printf(&quot;Enter Elements of the List \n&quot;);
for (i = 0; i&lt; n; i++)
{
scanf(&quot;%d&quot;, a + i);
}
for (i = 0; i&lt; n; i++)
{
sum = sum + *(a + i);
}
avg=sum/n;
printf(&quot;Sum of all elements in array = %d\n&quot;, sum);
printf(“Average is %d”,avg);
}