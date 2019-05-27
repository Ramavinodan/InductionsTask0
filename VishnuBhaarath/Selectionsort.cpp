#include<stdio.h>

 main()
{
	int i,j,k,temp, a[100];
	printf("Enter the number of elements in the array");
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{
		printf("Enter the number: " );
		scanf("%d",&a[j]);
	}
	for(k=0;k<i;k++)
	{
     for(j=0;j<i;j++){
     
		if(a[k]>a[j] && k<j) 
		{
			temp=a[j];
			a[j]=a[k];
			a[k]=temp;
		}
		
	}
		
	}

    for(j=0;j<i;j++)
   {
   	printf("%d",a[j] );
   printf("\n");
     }
}
