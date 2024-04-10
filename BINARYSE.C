#include<stdio.h>
#include<conio.h>
void main()
{
int i,beg,mid,end,n,item,a[10];
clrscr();
printf("Enter number of elements:\n");
scanf("%d",&n);
printf("Enter %d number:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the elements to be searched:\n");
for(i=0;i<n;i++)
{
scanf("%d/n",&item);
}
beg=0;
end=n-1;
mid=(beg+end)/2;
while(beg<=end)
{
if(a[mid]==item)
{
beg=mid+1;
}
else if(a[mid]==item)
{
printf("Search is successful,item %d found of location %d\n",item,mid+1);
break;
}
else
{
end=mid;
mid=(beg+end)/2;
}
}
if(beg>end)
printf("Search is unsuccessful,item %d is not found %d\n",item);
getch();
}

