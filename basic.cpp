#include<bits/stdc++.h>
using namespace std;
int main () {

    int num = 5;
    int *ptr = &num;
    cout << num << " " << &num << " " << ptr << " " << *ptr <<endl;
    //sizeof int pointer is of 4 bytes.
    cout << sizeof(ptr) <<endl;

    double d = 4.2;
    double *q = &d;
    cout << d <<" " << &d << " " << q << " " << *q <<endl;
    //sizeof double pointer is of 8 bytes. 
    cout << sizeof(q) <<endl;

    //Bad way - int *p;
    int i=5;
    int *p =0;
    p=&i;
    cout << i <<" "<< &i << " " << p << " " << *p <<endl;

    int n = 5;
    int *a = &n;
    cout << "before value is::" << n <<" " << a << " " << *a << endl;
    n++;
    (*a)++;
    cout << "after value is::" << n <<" " << a << " " << *a << endl;
    a++;
    // 4 bytes space is added.
    a++;
    cout << "after value is::" << n <<" " << a << " " << *a << endl;

    char ch = 'a';
    char *p1 = &ch;
    cout << ch << " " << p1 << endl;
    cout << sizeof(p1) <<endl;
    return 0; 

}