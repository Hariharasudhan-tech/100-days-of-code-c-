#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
    int largest = a[0];
    int smallest = a[0];
    for(i=0;i<n;i++) {
       if(a[i] > largest) {
            largest = a[i];
       }
       if(a[i] < smallest){
            smallest = a[i];
       }
    }
    cout<<"largest value = "<<largest<<endl;
    cout<< "smallest Value = "<<smallest<<endl;
    return 0;
}
