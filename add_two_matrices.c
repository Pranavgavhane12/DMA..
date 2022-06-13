#include&lt;stdio.h&gt;
void main()
{
int i,j,row,col,row2,col2,**p,**q,**r;

printf("\nEnter the total rows=");
scanf("%d",&amp;row);
printf("\nEnter the total columns=");
scanf("%d",&amp;col);
for(i=0;i&lt;row;i++)
{
p=(int**)malloc(row*sizeof(int));
}
for(i=0;i&lt;row;i++)
{
p[i]=(int*)malloc(col*sizeof(int));
}
printf("\n\nEnter first matrix of %d*%d=\n",row,col);
for(i=0;i&lt;row;i++)
{
for(j=0;j&lt;col;j++)
{
scanf("%d",(*(p+i)+j));
}
}
printf("\n\nEnter the total rows=");
scanf("%d",&amp;row2);
printf("\nEnter the total columns=");
scanf("%d",&amp;col2);
for(i=0;i&lt;row2;i++)
{
q=(int**)malloc(row2*sizeof(int));
}
for(i=0;i&lt;row2;i++)
{
q[i]=(int*)malloc(col2*sizeof(int));
}
printf("\n\nEnter second matrix of %d*%d=\n",row2,col2);
for(i=0;i&lt;row2;i++)
{

for(j=0;j&lt;col2;j++)
{
scanf("%d",(*(q+i)+j));
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
printf("\n\n\nResult matrix is=\n");
for(i=0;i&lt;row;i++)
{
for(j=0;j&lt;col;j++)
{
  printf("%4d",*(*(r+i)+j));
}
printf("\n");
}
}
}