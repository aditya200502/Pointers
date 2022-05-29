#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    int i=5;
    int *p = &i;
    int **q= &p;
    cout << i << " " << &i << endl;
    cout << p << " " << *p << endl;
    cout << q << " " << *q << " " << **q <<endl;
    */

    /*
    int arr[]={2,5,6,9};
    cout << arr << " " << &arr[0] << endl;
    // arr == &arr[0].
    cout << *arr  << " " << *arr + 1 << " " << *(arr + 1) << endl; 
    // *arr + 1 != *(arr + 1).
    cout << arr[2] << " " << *(arr + 2) << endl;
    // arr[i] == *(arr + i). 
    // let arr = 710 so (arr + 2) will be readed as value at address of 718.
    
    int i=2;
    cout << i[arr] << " " << *(i + arr) << endl; 
    // very important line - i[arr] == *(i + arr) == arr[i] == *(arr + i).
    
   */
   
   /*
   int temp[4]={2,3,4,7};
   cout << sizeof(temp) << endl;
   int *ptr = &temp[0];
   cout << sizeof(ptr) << endl;
   cout << sizeof(*ptr) << endl;
   cout << sizeof(&ptr) << endl;
   // here size of ptr is allocated 4 bytes.
   cout << temp;
   //temp = &temp.
   */
   
   int a[4]={2,4,6,8};
   cout << &a[0] << endl;
    int *p =&a[0];
    cout << p << endl;

   return 0;

}