#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k,l[50],temp;
	printf("Enter the total numbers that you have to sort out :");
	scanf("%d",&j);
	printf("Enter the numbers :");
	for(i=0;i<j;i++)
	{
		scanf("%d",&l[i]);
	}
	
	for(i=1;i<j;i++)
	{
		for(k=0;k<j-i;k++)
		{
			if(l[k]>l[k+1])
			{
				temp=l[k];
				l[k]=l[k+1];
				l[k+1]=temp;
			}
		}
	}
    printf("The sorted list is:");
	for(i=0;i<j;i++)
	{
		printf("%d\t",l[i]);
		
	}
	return 0;
}
