#include&lt;stdio.h&gt;
void main()
{
int i,j,row,col,row2,col2,**p,**q,**r;

printf(&quot;\nEnter the total rows=&quot;);
scanf(&quot;%d&quot;,&amp;row);
printf(&quot;\nEnter the total columns=&quot;);
scanf(&quot;%d&quot;,&amp;col);
for(i=0;i&lt;row;i++)
{
p=(int**)malloc(row*sizeof(int));
}
for(i=0;i&lt;row;i++)
{
p[i]=(int*)malloc(col*sizeof(int));
}
printf(&quot;\n\nEnter first matrix of %d*%d=\n&quot;,row,col);
for(i=0;i&lt;row;i++)
{
for(j=0;j&lt;col;j++)
{
scanf(&quot;%d&quot;,(*(p+i)+j));
}
}
printf(&quot;\n\nEnter the total rows=&quot;);
scanf(&quot;%d&quot;,&amp;row2);
printf(&quot;\nEnter the total columns=&quot;);
scanf(&quot;%d&quot;,&amp;col2);
for(i=0;i&lt;row2;i++)
{
q=(int**)malloc(row2*sizeof(int));
}
for(i=0;i&lt;row2;i++)
{
q[i]=(int*)malloc(col2*sizeof(int));
}
printf(&quot;\n\nEnter second matrix of %d*%d=\n&quot;,row2,col2);
for(i=0;i&lt;row2;i++)
{

for(j=0;j&lt;col2;j++)
{
scanf(&quot;%d&quot;,(*(q+i)+j));
}
}
if(row==row2&amp;&amp;col==col2)
{
for(i=0;i&lt;row;i++)
{
r=(int**)malloc(row*sizeof(int));
}
for(i=0;i&lt;row;i++)
{
r[i]=(int*)malloc(col*sizeof(int));
}
for(i=0;i&lt;row;i++)
{
for(j=0;j&lt;col;j++)
{
  (*(*(r+i)+j))= (*(*(p+i)+j)) + (*(*(q+i)+j));
}
}
printf(&quot;\n\n\nResult matrix is=\n&quot;);
for(i=0;i&lt;row;i++)
{
for(j=0;j&lt;col;j++)
{
  printf(&quot;%4d&quot;,*(*(r+i)+j));
}
printf(&quot;\n&quot;);
}
}
}