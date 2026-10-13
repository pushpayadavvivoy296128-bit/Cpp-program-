#include<iostream>
#include<stdlib.h>
int main ()
{
  int n;
cout<<"enter number of the student";
cin>>n;
int *arr=(int*)malloc(n*sizeof(int));
if(arr==NULL)
{
cout<<"overflow";
return 0
  }
cout<<"Enter"<<n<<"marks";
int sum=0;
for(int1=0;i<n;i++)
{
cin>>arr[i];
sum=sum+arr[i];
}
cout<<"total"<<sum;
free(arr);
return 0;
}
