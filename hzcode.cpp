#include <iostream>
using namespace std;
int main() {
    cout << "1)" << "int: " << sizeof(int) <<'\n';
    cout << "short int: " << sizeof(short int) <<'\n';
    cout << "long int: " << sizeof(long int) <<'\n';
    cout << "float: " << sizeof(float) <<'\n';
    cout << "double: " << sizeof(double) <<'\n';
    cout << "long double: " << sizeof(long double) <<'\n';
    cout << "char: " << sizeof(char) <<'\n';
    cout << "bool: " << sizeof(bool) <<'\n';


    int a;
    cin >> a;
    int order = sizeof(int) * 8 - 1;
    int mask = 1 << order;
    
    cout << "2) ";


    for (int i = 0; i <= order; i++){
        cout << ((a&mask) ? '1' : '0');
        a = a << 1;
        if (i%8==0) {
            cout<<' ';
        }
    }

    cout << '\n' << "3) ";

    union {
        int b;
        float f=3.14;
    };
    for (int c = 0; c <= order; c++){
        cout << ((b&mask) ? '1' : '0');
        b = b << 1;
        if (c%8==0) {
            cout<<' ';
        }
    }


    cout << '\n' << "4) ";



    union {
        int arr[2];
        double d8=3.14;
    };
    for (int x=0;x<2;x++) {
        for (int d = 0; d <= order; d++) {
            cout << ((arr[x]&mask) ? '1' : '0');
            arr[x] = arr[x] << 1;
            if (d%8==0) {
                cout<<' ';
        }
        }   
    }
    

    return 0;
}