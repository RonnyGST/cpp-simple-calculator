#include <iostream>
#include <math.h>
#include <stdlib.h>//Biblioteca que possui a função de limpar o console

using namespace std;

//Macro que contém a função de limpar o console.
#define clear (void)system("clear||cls");
#define space cout << endl;

//Variáveis
double num1, num2;
char symbol;
char continueProgram;
double result;


//Funções dos operadores matemáticos
double add(double x, double y){
  return x + y;
}

double sub(double x, double y){
  return x - y;
}

double mult(double x, double y){
  return x * y;
}

double div(double x, double y){
  return x / y;
}

double powBase(double x, double y){
  return pow(x, y);
}

double sqrtBase(double x, double y){
  return pow(x, 1.0/y);//Uma alternativa para calcular a raíz de algum número. Usando a potência com base x, elevo a 1 para o resultado ser ele mesmo, porém divido esse expoente pela segunda entrada do usuário para definir a raíz. Se y for 2, será raíz quadrada. Se y for 3, será raíz cúbica e assim por diante.
}




int main() {
  clear
  #define output space cout << "Result:\n" << result << endl;

  
  cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b | a^b | avb\n";
  cin >> num1 >> symbol >> num2;

  if(symbol == '+'){
    result = add(num1, num2);
    output;
    space;
  } else if (symbol == '-'){
    result = sub(num1, num2);
    output;
    space;
  } else if (symbol == '*'){
    result = mult(num1, num2);
    output;
    space;
  } else if (symbol == '/'){
    result = div(num1, num2);
    output;
    space;
  } else if (symbol == '^'){
    result = powBase(num1, num2);
    output;
    space;
  } else if (symbol == 'v' || symbol == 'V'){
    result = sqrtBase(num1, num2);
    output;
    space;
  } else {
    space;
    cout << "Invalid operator" << endl;
    space;
  }

  cout << "Would you like to continue on the calculator? [1(yes)/2(no)]" << endl;
  cin >> continueProgram;

  /*Operador ternário. São como if/else simples, mas em uma linha só.
  Primeiro colocamos a condição entre parênteses, depois a interrogação indica a pergunta dentro do parênteses. 
  Caso a condição seja verdadeira, irá executar o que foi escrito após a interrogação.
  Caso falso, irá executar o que foi escrito após os dois pontos ":". Os dois pontos e o conteúdo após ele são obrigatórios no operador ternário.
  */
  (continueProgram == 'y' || continueProgram == 'Y' || continueProgram == '1') ? cout << "Thank you for using the calculator!" << endl << main() : cout << "Good bye! :D";

  return 0;
}
