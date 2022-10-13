#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // Problem 1
  // string s = "";
  // for(int i = 1; i <= 10; i++)
  // {
  //   s += to_string(i) + " "; 
  // }
  // cout << s << endl;

  // Problem 2
  // int sum = 0;
  // for(int i = 1; i <= 10; i++)
  // {
  //   sum += i;
  // }
  // cout << sum << endl;

  // Problem 3
  // for(int i = 1; i <= 100; i++) {
  //   if(i % 5 == 0) {
  //     continue;
  //   }
  //   cout << i << " ";
  // }

  // Problem 4
  // int num;
  // bool isPrime = true;
  // cout << "Enter a number: ";
  // cin >> num;
  // if (num == 0 || num == 1) {
  //   isPrime = false;
  // }
  // for(int i = 2; i <= num / 2; i++) {
  //   if(num % i == 0) {
  //     isPrime = false;
  //     break;
  //   }
  // }
  // if(isPrime) {
  //   cout << num << " is a prime number" << endl;
  // } else {
  //   cout << num << " is not a prime number" << endl;
  // }

  // Problem 5
  // int num;
  // cout << "Enter a number: ";
  // cin >> num;
  // for(int i = 1; i <= num; i++) {
  //   cout << i << " * " << i << " = " << i * i << endl;
  // }

  // Problem 6
  // Write a program in C++ to input integers by user and find the maximum among them. Stop when user enters 0.
  // int num, max = 0;
  // cout << "Enter a number: ";
  // cin >> num;
  // while(num != 0) {
  //   if(num > max) {
  //     max = num;
  //   }
  //   cout << "Enter a number: ";
  //   cin >> num;
  // }
  // cout << "Max: " << max << endl;

  // Problem 7
  // int num1, num2;
  // char symbol;
  // while (true) {
  //   cout << "Enter first number: ";
  //   cin >> num1;
  //   cout << "Enter a symbol: ";
  //   cin >> symbol;
  //   cout << "Enter second number: ";
  //   cin >> num2;
  //   if(symbol == '+') {
  //     cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  //   } else if(symbol == '-') {
  //     cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
  //   } else if(symbol == '*') {
  //     cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
  //   } else if(symbol == '/') {
  //     cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
  //   } else {
  //     cout << "Invalid symbol" << endl;
  //   }
  // }

  // Problem 8
  // int num;
  // cout << "Enter a number: ";
  // cin >> num;
  // for(int i = 0; i < num; i++) {
  //   for(int j = 0; j < num; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // Problem 9
  // int num;
  // cout << "Enter a number: ";
  // cin >> num;
  // for(int i = 0; i < num; i++) {
  //   for(int j = 0; j <= i; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // Problem 10
  // int num;
  // float sum = 0;
  // cout << "Enter a number: ";
  // cin >> num;
  // for(int i = 1; i <= num; i++) {
  //   sum += 1.0 / i;
  // }
  // cout << "Sum: " << sum << endl;

  // Problem 11
  // int num, decimal = 0, base = 1, rem;
  // cout << "Enter a binary number: ";
  // cin >> num;
  // while(num > 0) {
  //   rem = num % 10;
  //   decimal += rem * base;
  //   num /= 10;
  //   base *= 2;
  // }
  // cout << "Decimal: " << decimal << endl;

  // Problem 12
  // int num, sum = 0, rem;
  // cout << "Enter a number: ";
  // cin >> num;
  // while(num > 0) {
  //   rem = num % 10;
  //   sum += rem;
  //   num /= 10;
  // }
  // cout << "Sum: " << sum << endl;

  // Problem 13
  // int num;
  // float gpa, credits, totalCredits = 0;
  // cout << "Enter number of classes: ";
  // cin >> num;
  // for(int i = 1; i <= num; i++) {
  //   cout << "Enter credits for subject " << i << ": ";
  //   cin >> credits;
  //   totalCredits += credits;
  // }
  // gpa = totalCredits / num;
  // cout << "GPA: " << gpa << endl;

  // Problem 14
  // int num;
  // cout << "Enter a number: ";
  // cin >> num;
  // if(num == 0) {
  //   cout << "Depth is 0" << endl;
  // } else {
  //   for(int i = 1; i <= num; i++) {
  //     for(int j = 1; j <= i; j++) {
  //       cout << j;
  //     }
  //     cout << endl;
  //   }
  // }
  
  return 0;
}
