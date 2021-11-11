#include<iostream>
using namespace std;
int binarySearch(int arr[], int p, int r, int num) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}
int main(void) {
   int arr[20],n,i,num;
   for(int j=0;j<=2;j++)
   {
       cout<<"Enter the number of elements"<<endl;
       cin>>n;
       cout<<"Enter the elements of array"<<endl;
       for(i=0;i<=n-1;i++)
       {
           cin>>arr[i];
       }
       cout << "Enter the number to search: \n";
       cin >> num;
       int index = binarySearch (arr, 0, n-1, num);
       if(index == -1)
       {
           cout<< num <<" is not present in the array"<<endl;
       }
       else
       {
           cout<< num <<" is present at index "<< index <<" in the array"<<endl;
       }
   }
    return 0;
}
 