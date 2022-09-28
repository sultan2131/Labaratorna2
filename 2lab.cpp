#include <iostream>
using namespace std;
int main() {
  char znak;
  float n1, n2;

  cout << "Enter two numbers: ";
  cin >> n1 >> n2;
  cout << "Enter operator: (+, -, *, /): ";
  cin >> znak;

  switch(znak) {
    case '+':
      cout << n1 << "+" << n2 << "=" << n1 + n2 << "\n";
      break;

    case '-':
      cout << n1 << "-" << n2 << "=" << n1 - n2 << "\n";
      break;

    case '*':
      cout << n1 << "*" << n2 << "=" << n1 * n2 <<"\n";
      break;

    case '/':
      cout << n1 << "/" << n2 << "=" << n1 / n2 << "\n";
      break;
  }
  return 0;
}