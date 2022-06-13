#include&lt;stdio.h&gt;
main()
{
int **p,i,j,row,col;
printf(&quot;enter rows and col&quot;);
scanf(&quot;%d %d&quot;,&amp;row,&amp;col);
p=(int**)malloc(sizeof(int *)*row);
for(i=0;i&lt;row;i++)

{
*(p+i)=(int *)malloc(sizeof(int)*col;
}
for(i=0;i&lt;row;i++)
{
for(j=0;j&lt;col;j++)
{
printf(&quot;enter elements&quot;);
scanf(&quot;%d&quot;,*(p+i)+j);
}
}
for(i=0;i&lt;row;i++)
{
for(j=0;j&lt;col;j++)
{
printf(&quot;%d&quot;,*(*(p+i)+j));
}
printf(&quot;\n&quot;);
}
}