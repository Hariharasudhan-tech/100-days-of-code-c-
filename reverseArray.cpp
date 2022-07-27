#include <iostream>
using namespace std;

int main() {

    int i, n;
    cout<< "Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<< "Enter the elements of the array: ";
    for(i=0;i<n;i++) {
        cin >> a[i];
    }
    for(i=0;i<n;i++) {
        cout<<" "<<a[i];
    }
    cout<< "The reversed array is: ";
    for(i=n-1;i>=0;i--) {
        cout<<" "<<a[i];
    }



    return 0;
}
