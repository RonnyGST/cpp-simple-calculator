#include <iostream>
#include <math.h>

using namespace std;

float num1, num2;
char symbol;
float result;
#define output cout << "Result:\n" << result << endl << system("pause");


float add(float x, float y){
  return x + y;
}

float sub(float x, float y){
  return x - y;
}

float mult(float x, float y){
  return x * y;
}

float div(float x, float y){
  return x / y;
}

float powBase(float x, float y){
  return pow(x, y);
}



int main() {
  cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b | a^b\n";
  cin >> num1 >> symbol >> num2;

  if(symbol == '+'){
    result = add(num1, num2);
    output;
  } else if (symbol == '-'){
    result = sub(num1, num2);
    output;
  } else if (symbol == '*'){
    result = mult(num1, num2);
    output;
  } else if (symbol == '/'){
    result = div(num1, num2);
    output;
  } else if (symbol == '^'){
    result = powBase(num1, num2);
    output;
  } else {
    cout << "Invalid operator" << endl << system("pause");
  }
  
}