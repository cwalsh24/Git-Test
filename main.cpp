/**
 * @file main.cpp
 * @author Connor Walsh
 * @date 2022-08-25
 * @brief Git hub practice problem
 * 
 * This program computes the sum of a given number, n and all previous numbers as well as the factorial of n.
 */


#include <iostream>

using namespace std;

/**
 * This is the sum method, it calculates the sum of all numbers up to and including a user inputted number n
 *
 * @param int n, a user inputted positive number 
 * @pre n must be positive for this function to work properly *
 * @return int sum, the sum of all numbers before n plus n.  
 *
 */
int sum(int n); //prototype for sum method


/**
 * This is the product method which calculates the factorial for a user inputted number n
 *
 * @param int n, a user inputted number
 * @pre n must be positive
 * @return returns an int containing the factorial, this was done recursively  
 * 
 */
int product(int n);//prototype for product (factorial) method

int main() {
  cout<<"Hello World!"<<endl;
  int n;
  cout<<"Enter a number: ";
  cin>>n; //asks for a user inputted number 
  cout<<"The sum of all numbers before " << n << " and " << n << " is: " << sum(n)<<endl; //prints the answer for sum
  cout<<"The product of " << n <<" times every previous positive number is: "<< product(n) << endl; 
  
  
  return 0;
}

int product(int n){ //based on the factorial program from class
  if(n == 0){
    return 1;
  }
  return product(n - 1) * n; //this line recursively calls the function until n = 0 
}

int sum(int n){
  int sum = 0; 
  for(int i; i<=n; i++){
    sum+= n-i;
  }
  return sum;
}
