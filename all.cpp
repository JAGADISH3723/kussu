
#include <bits/stdc++.h>
using namespace std;
 int main(){
      int a, b;
     cin>>a>>b;
     cout<<"AND->"<< (a & b)<<endl;
     cout<<"or->"<< (a | b ) <<endl;
     cout<<"XOR ->" <<(a ^ b) <<endl;
     cout<<(a << 2) << endl; // (multypli by 2...if << 1 -one operation ,if << 2 -two operation etc...eg.-> 4<<1  => 8 ,if 4 <<  2 => 16)
     cout<<(b >> 2) <<endl;  //(divide by 2)
*/
 
 swapping using xor
 
  a=a^b;
  b=b^a;
  a=a^b;
  
  cout<<"before a=4 ,after swap a is become ->"<< a <<endl;
  cout<<"before b=5 . after swappping b is become" <<b << endl;
  */

   
   Write a program that prints all even numbers from 1 to 20 using & operator. 
   
     for(int i=0;i<b;i++){
     if((i&1) ==0 ){
         cout<< " even nums from 1 to 20 -> "<<i<<endl;  //why only  & operation with 1 to check even or odd ,becz it gives units place 0 ot 1 if 1-> true (odd),if its false(0->even)
     }
 }

    
     XOR is used to find  
   
    1.Remove duplicates
    2.Find missing/single elements
    3.used in swapping (done upside)
    
    
    *2. Problem: You are given an array where every element appears twice, except one.
       Find that one unique element using XOR.
    
  
  //  ->
  
  int arr[5]={5,3,4,3,5};
  int res=0;
  for(int i=0;i< 5;i++){
      res=res^arr[i];
  }
  cout<<"uniq element "<<res <<" ";
   */
    
    
    
    
    #include<iostream>
     using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int N = 5;

    int xorFull = 0, xorArr = 0;

    for (int i = 1; i <= N; i++) {     
        xorFull=xorfull^i(1)=1^2=3^3=0^4=4^5=1;                              xorFull=1;       // XOR from 1 to N
    }

    for (int i = 0; i < N - 1; i++) {
        xorArr=xorArr^ arr[i]=0^1=1^2=3^4=7^5=2;  // XOR of array elements
   xoArr=2;
   }

    int missing = xorFull ^ xorArr;

    cout << "Missing number is: " << missing;

    return 0;


 * pointers and references ->keys points     -- ->    Use references (&) for cleaner code when modifying values.

                                            --->   Use pointers (*) when you need advanced memory control, dynamic allocation, or when working with arrays.

 
 #1)->
#include <bits/stdc++.h>
using namespace std;
void change(int *arr,int n){
     for(int i=0;i<n;i++){
         arr[i]=n;
     cout<<arr[i]<<" ";
     }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    change(arr,n);
    return 0;
}
 #2)
  
 #include <bits/stdc++.h>
using namespace std;
void increament(int &a){
a++;
cout<<a;
}

int main() {
int a;
cin>>a;
increament(a);
return 0; 
} 

#4). by reference

#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
 a^=b;
 b^=a;
 a^=b;
 cout<<a<<" "<<b;
}

int main() {
 int a,b;
 cin>>a>>b;
 swap(a,b);
 return 0;

} 
 #50). by pointer#include <bits/stdc++.h>

using namespace std;
void swap(int *a,int *b){
*a^=*b;
*b^=*a;
*a^=*b;
cout<<*a<<" "<<*b;
}

int main() {
int a,b;
cin>>a>>b;
swap(&a,&b);
return 0;
}  




* Pointer Practice Problems in C++
 
#include <bits/stdc++.h>
using namespace std;
// 1. Print value and address of a variable using pointer
void printAddressAndValue() {
    int a = 10;
    int *p = &a;
    cout << "Value: " << *p << ", Address: " << p << endl;
}

// 2. Swap two integers using pointers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// 3. Reverse an array using pointers
void reverseArray(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++; 
        end--;
    }
}

// 4. Sum of elements in array using pointers
int sumArray(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

// 5. Maximum element in array using pointer
int maxElement(int *arr, int n) {
    int max = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
         max = *(arr + i);
        }
    }
    return max;
}

// 6. Reverse a string using pointers
void reverseString(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// 7. Count vowels in a string using pointers
int countVowels(char *str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
        str++;
    }
    return count;
 void calculateQuotRem(int a, int b, int* quot, int* rem) {
    if (b != 0) {
        *quot = a / b;
        *rem = a % b;
    } else {
        *quot = 0;
        *rem = 0;
    }
}
 void dynamicArrayAverage() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    double average = (n > 0) ? static_cast<double>(sum) / n : 0;
    cout << "Average: " << average << endl;

    delete[] arr;
}

}

int main() {
    printAddressAndValue();

    int a = 5, b = 10;
    swap(&a, &b);
    cout << "Swapped: a = " << a << ", b = " << b << endl;

    int arr[] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5);
    for (int i : arr) cout << i << " ";
    cout << endl;

    cout << "Sum: " << sumArray(arr, 5) << endl;
    cout << "Max: " << maxElement(arr, 5) << endl;

    char str[] = "pointer";
    reverseString(str);
    cout << "Reversed String: " << str << endl;
    cout << "Vowel Count: " << countVowels(str) << endl;
int x = 17, y = 5, q, r;
    calculateQuotRem(x, y, &q, &r);
    cout << "Quotient: " << q << ", Remainder: " << r << endl;
    dynamicArrayAverage();
    return 0;
}

   
