//enter input in following order -
//characters 
//integer
//float number
#include <bits/stdc++.h>
using namespace std;
 string intToBinary(int num){
 string s ="";
 while(num !=0){
     if(num & 1 == 1){
         s+='1';
     }
     else{
         s+='0';
     }
     num >>= 1;
 }
 reverse(s.begin(), s.end());
 return s;
 }
 string floatToBinary(float num){
     int intpart = int(num);
     float decpart = num - intpart;
     string s = intToBinary(intpart);
     s +='.';
     for(int i=0;i<10;i++){
         decpart = decpart*2;
         if(int(decpart)== 1){
             s +='1';
             decpart -= 1;
         }
         else{s+='0';}
         if(decpart==0){
             break;
         }
     }
     return s;
 }

 string charToBinary(char c){
     int a = int(c);
     string s = intToBinary(a);
     return s;
 }
 
 int main(){
 char c;
 cout<<"Enter a chachter which you would like to convert to Binary:- " << endl<<"Result:-"<<endl;
 cin>>c;

 cout<<charToBinary(c)<<endl;
 int n;
 cout<<"Enter a integer which you would like to convert to Binary:- "<< endl<<"Result:-"<<endl;
 cin>> n;
 cout<<intToBinary(n)<<endl;
 float m;
 cout<<"Enter a float which you would like to convert to Binary:- "<< endl<<"Result:-"<<endl;
 cin>>m;
 cout<<floatToBinary(m);

 return 0;
 }