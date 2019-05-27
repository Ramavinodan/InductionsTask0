//sorting algorithm in c++

#include<iostream.h>
#include<conio.h>

void main()
{
   int arr[20],i,j,num,temp;
   cout<<"enter the number of elements"<<endl;
   cin>>num;
   cout<<endl;
   cout<<"enter the array of elements"<<endl;
   for{int i=0;i<num;i++}
   cin>>arr[i];
   
   for{int i=0;i<num;i++}
   for{int j=i+1;j<num;j++}
   {
     if(arr[j]<arr[i])
      {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
      }
   }
   
   cout<<"The sorted array is"<<endl;
   for{int i=0;i<num;i++}
   cout<<arr[i]<<'\t';
}
