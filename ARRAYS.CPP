#include<iostream.h>

void main()
{
int data[5];
cout<< "Enter elements: "<<endl;
for(int i =0; i<5; ++i)
{
cin>> data[i];
}
cout<< "You entered: ";
for (int n=0; n<5; ++n)
{
cout<<data[n]<<" ";
}
}
