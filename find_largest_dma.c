#include&lt;stdio.h&gt;
main()
{
int n,i; int *ptr;
printf(&quot;Enter the total number of elements: &quot;);
scanf(&quot;%d&quot;, &amp;n);

ptr = (int *) malloc(n* sizeof(int));
if (ptr == NULL)
{
printf(&quot;Error.&quot;);
exit(0);
}
for (i = 0; i&lt; n; ++i)
{
printf(&quot;Enter number%d: &quot;, i + 1);
scanf(&quot;%d&quot;, ptr + i); }
for (i = 1; i&lt; n; ++i)
{
if (*ptr &lt; *(ptr + i)) *ptr= *(ptr + i);
}
printf(&quot;Largest number = %d&quot;, *ptr);
free(ptr);
}