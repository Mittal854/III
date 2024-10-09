#include<iostream>
using namespace std;
template <class T>
void Sorting(T arr[],int n)
      {
          for(int i=0;i<n;i++)
          {
              for(int j=0;j<n;j++)
              {
                  if(arr[i]<arr[j])
                  {
                      T temp=arr[i];
                      arr[i]=arr[j];
                      arr[j]=temp;
                  }
              }
          }
      }

      void Sorting(int arr[],int n)
              {
                 for(int i=0;i<n;i++)
          {
              for(int j=0;j<n;j++)
              {
                  if(arr[i]<arr[j])
                  {
                      int temp=arr[i];
                      arr[i]=arr[j];
                      arr[j]=temp;
                  }
              }
          }
              }

      int main()
          {
              int ar[5]={5,3,7,2,4};

              Sorting(ar,5);
              for(int i=0;i<5;i++)
              {
                  cout<<ar[i]<<endl;
              }
              float arr2[10]={3.5,2.6,6.7,8.9,3.4,3.2,3.23,4.5,4.25,4.23};
              Sorting(arr2,10);
              for(int i=0;i<10;i++)
              {
                  cout<<arr2[i]<<endl;
              }
          }