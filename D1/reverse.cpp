#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements prsent in the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the reversed elements of the array is:";
    
    //actual logic to reverse the elemnts present in the array
    int low=0;
    int high=n-1,temp;
    while(low<high)
    {
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }

    // displaying the elements in reverse order
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

}