#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;  
   // cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
      //  cout<<"Enter a Number: ";
        cin>>arr[i];
    }
    for(int i=n-1; i>=0; i--)
    {
        //cout<<"Array Element in reverse order: "<<endl;
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}
