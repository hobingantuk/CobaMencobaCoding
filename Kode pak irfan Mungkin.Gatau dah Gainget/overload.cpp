#include<iostream>  
using namespace std;
class OverLoading{
public :
int add (int a, int b){
return a + b;}

int add (int a, int b, int c){
return a + b + c;}

int add (int a, int b, int c, int d){
return a + b + c + d;}

int add (int a, int b, int c, int d, int e){
return a + b + c + d + e;}
};
 
int main(){  
int x,y,z,f,g;
OverLoading C;

cout<<"Enter Integer"<<endl;
cin>> x;
cout<<"Enter Integer again"<<endl;
cin>>y;
cout<<"Enter Integer again"<<endl;
cin>>z;
cout<<"Enter Integer again"<<endl;
cin>>f;
cout<<"Enter Integer again"<<endl;
cin>>g;

cout << endl;

cout<< C .add(x,y)<<endl;
cout<< C .add(x,y,z)<<endl;
cout<< C .add(x,y,z,f)<<endl;
cout<< C .add(x,y,z,f,g)<<endl;

}  
