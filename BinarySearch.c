//Binary Search
#include <stdio.h>
#include <conio.h>
void sort(int *);
int search(int *,int);
void main(){
	int a[10],i,j,temp,key,flag;
	
	for(i=0;i<10;i++){
		printf("\nEnter the number-%d:",i+1);
		scanf("%d",&a[i]);
	}
	sort(a);
	printf("\nThe sorted array is: ");
	for(i=0;i<10;i++)
	printf("%d\t",a[i]);
	printf("\nEnter a number to be searched:");
	scanf("%d",&key);
	flag=search(a,key);
	if(flag==1)
	printf("\nThe number %d exists",key);
	else
	printf("\nThe number %d doesn't exist",key);
	getch();
}
void sort(int *x)
{
	int i,j,temp;
	for(i=0;i<10;i++){
	for(j=i+1;j<10;j++){
		if(x[i]>x[j])
		{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;	
		}
		
		
	}	
	}
}
int search(int *x,int k)
{
	int low=0,high=10,mid,res=0;
	while(high>=low){
		mid=(high+low)/2;
		if(k==x[mid]){
			res=1;
			break;
		}
		else
		{
			if(k>x[mid])
			low=mid+1;
			else
			high=mid-1;
		}
	}
	return res;
}
