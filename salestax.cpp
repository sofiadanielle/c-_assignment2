# include <iostream>
using namespace std;

// addTax function
void addTax(int taxRate, int *cost){
    int temp = *cost;
    temp += (temp * taxRate) / 100;
    *cost = temp;
    }

int main(int argc, char **argv){
  int userInput;
  cout << "What is the item price?: $";
  cin >> userInput;

  //call function
  addTax(&userInput, 10);

  cout<<"Cost of item after tax is: $ "<< userInput << endl;

  return 0;
}
