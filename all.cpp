
#include <bits/stdc++.h>
using namespace std;
 int main(){
   
   
   /*
      int a, b;
     cin>>a>>b;
     cout<<"AND->"<< (a & b)<<endl;
     cout<<"or->"<< (a | b ) <<endl;
     cout<<"XOR ->" <<(a ^ b) <<endl;
     cout<<(a << 2) << endl; // (multypli by 2...if << 1 -one operation ,if << 2 -two operation etc...eg.-> 4<<1  => 8 ,if 4 <<  2 => 16)
     cout<<(b >> 2) <<endl;  //(divide by 2)
*/
 
 /*
 // swapping using xor
 
  a=a^b;
  b=b^a;
  a=a^b;
  
  cout<<"before a=4 ,after swap a is become ->"<< a <<endl;
  cout<<"before b=5 . after swappping b is become" <<b << endl;
  */

 /*
 // Write a program that prints all even numbers from 1 to 20 using & operator. 
     for(int i=0;i<b;i++){
     if((i&1) ==0 ){
         cout<< " even nums from 1 to 20 -> "<<i<<endl;  //why only  & operation with 1 to check even or odd ,becz it gives units place 0 ot 1 if 1-> true (odd),if its false(0->even)
     }
 }
*/

    
    // XOR is used to find  
    /*
    1.Remove duplicates
    2.Find missing/single elements
    3.used in swapping (done upside)
    */
    
    /*2. Problem: You are given an array where every element appears twice, except one.
       Find that one unique element using XOR.
    
    */
  //  ->
  /*
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
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  return 0;
  
  
  
  
  
  
  
}