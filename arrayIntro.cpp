#include <iostream>

using namespace std;

int main() {

    /*int a[10];
    a[0] = 2;
    a[4] = 5;


    int a[10] = {1,3,5,7};

    //cout<<a[0]<<a[1]<<a[2]<<a[3];

    for(int i=0;i<10;i++) {
        cout<< " " << a[i];
    }*/


    int a[10];
    for(int i = 0;i<10;i++) {
        a[i] = i*i;
        cout<<a[i]<<" ";

    }

    return 0;
}
