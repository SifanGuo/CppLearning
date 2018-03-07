#include <iostream>
#include <vector>

int main(){
  unsigned inputNum;//store the number of the inputs
  unsigned inputSteps; //store the number of the steps
  vector <unsigned> numArray;

  cin >> inputNum >> inputSteps;

  unsigned realSteps = inputNum - (inputSteps % inputNum);
  unsigned num = 0;
  for (unsigned i = 0; i < realSteps; i++){
    cin >> num;
    numArray.push_back(num);
   }
  for (unsigned i = 0; i < inputNum - realSteps; i++){
    cin >> num;
    numArray.push_front(num);
   }

  for (unsigned i = 0; i < numArray.size(); i++){
    if (i == 0) cout << numArray[i];
    else cout << " " << numArray[i];
  }

 return 0;
}
