#include <iostream>

using namespace std;

int main() {
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) {
        cin>>a[i];

    }
    int start = 0;
    int end = n-1;

    cout<< "Before reversing: "<<endl;
    for(i=0;i<n;i++) {
        cout<<a[i] << " ";
    }

    while(start <= end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }

    cout<< "\nAfter reversing: "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }









    return 0;
}
