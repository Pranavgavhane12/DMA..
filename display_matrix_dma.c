#include&lt;stdio.h&gt;
main()
{
int **p,i,j,row,col;
printf("enter rows and col");
scanf("%d %d",&amp;row,&amp;col);
p=(int**)malloc(sizeof(int *)*row);
for(i=0;i&lt;row;i++)

{
*(p+i)=(int *)malloc(sizeof(int)*col;
}
for(i=0;i&lt;row;i++)
{
for(j=0;j&lt;col;j++)
{
printf("enter elements");
scanf("%d",*(p+i)+j);
}
}
for(i=0;i&lt;row;i++)
{
for(j=0;j&lt;col;j++)
{
printf("%d",*(*(p+i)+j));
}
printf("\n");
}
}