#include <iostream>
#include <string>

#define DEBUG
using namespace std;

int main(){
  string inputNum;
  cin >> inputNum;
  //as indicated by the question,0 < input < 1000
  unsigned inputNums[3];//inputNums[0] is hundred, inputNums[1] is ten.

  //numbers in [100,999]
  if(inputNum.size() == 3){
    for(unsigned i = 0; i != inputNum.size(); i++){
      inputNums[i] = inputNum[i] - 48;//change the char into unsigned nums
      #ifndef DEBUG
      cout << inputNums[i] << endl;
      #endif
    }
    for(unsigned i = 1; i != inputNums[0] + 1; i++)
      cout << 'B';
    for(unsigned i = 1; i != inputNums[1] + 1; i++)
      cout << 'S';
    for(unsigned i = 1; i != inputNums[2] + 1; i++)
      cout << i;
  }

  //numbers in [10,99]
  if(inputNum.size() == 2){
      inputNums[1] = inputNum[0] - 48;//change the char into unsigned nums
      inputNums[2] = inputNum[1] - 48;//change the char into unsigned nums
      #ifndef DEBUG
      cout << inputNums[i] << endl;
      #endif
    for(unsigned i = 1; i != inputNums[1] + 1; i++)
      cout << 'S';
    for(unsigned i = 1; i != inputNums[2] + 1; i++)
      cout << i;
  }
  //numbers in [1,9]
  if(inputNum.size() == 1){
      inputNums[2] = inputNum[0] - 48;//change the char into unsigned nums
      #ifndef DEBUG
      cout << inputNums[i] << endl;
      #endif
    for(unsigned i = 1; i != inputNums[2] + 1; i++)
      cout << i;
  }

return 0;
}

