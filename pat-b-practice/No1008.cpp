#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main(){
  unsigned inputNum;//store the number of the inputs
  unsigned inputSteps; //store the number of the steps
  vector <unsigned> numArray;

  cin >> inputNum >> inputSteps;

  unsigned realSteps = inputSteps % inputNum;
  unsigned num = 0;
  for (unsigned i = 0; i < inputNum - realSteps; i++){
    cin >> num;
    numArray.push_back(num);
   }
  for (unsigned i = 0; i < realSteps; i++){
    cin >> num;
    numArray.insert(numArray.begin(),num);
   }
  //reverse only from index 0 to realSteps
  reverse(numArray.begin(),numArray.begin() + realSteps);

  //print out the result
  for (unsigned i = 0; i < numArray.size(); i++){
    if (i == 0) cout << numArray[i];
    else cout << " " << numArray[i];
  }

 return 0;
}
