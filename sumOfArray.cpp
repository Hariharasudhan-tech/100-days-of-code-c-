#include <iostream>
using namespace std;

int main() {

    int n,sum=0,i;
    cout<< "Enter the size of the array"<<endl;
    cin>>n; //the number elements present in the array.

    int ar[n];
    cout<< "Enter the array elements: "<<endl;
    for(i = 0; i<n; i++) { //getting the array
        cin>>ar[i];
    }
    cout<<"The elements in the array"<<endl;5

    for(i=0;i<n;i++) {
        cout<<ar[i]<<" ";
    }
    cout<<endl;


    for(i=0;i<n;i++) {
        sum += ar[i];
    }
    cout<< "The sum of array is: "<<sum<<endl;


    return 0;
}
