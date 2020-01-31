# include <iostream>
using namespace std;

int main(int argc, char **argv){
  // initialize array
  int numberArray[10];

  cout << "Enter 10 nonnegative numbers!: ";

  for (int i = 0; i < 10; ++i){
    cin >> numberArray[i];
  }

  for (int i = 0; i < 10; ++i){
    cout << numberArray[i] << endl;
  }
}
