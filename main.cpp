
#include <iostream>

using namespace std;

int sum(int n); //prototype for sum method

int main() {
  cout<<"Hello World!"<<endl;
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  cout<<sum(n)<<endl; //prints the answer 
  
  
  return 0;
}

int sum(int n){
  int sum = 0; 
  for(int i; i<=n; i++){
    sum+= n-i;
  }
  return sum;
}
