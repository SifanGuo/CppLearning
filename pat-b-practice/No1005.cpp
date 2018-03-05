#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

#define DEBUG

using namespace std;

int main(){
  set <unsigned> exclude;//store the numbers that had been calculated.
  unsigned testNum, inputNum;
  vector <int> testNums;
  cin >> inputNum;
  getchar();//receives the enter(\n)

  //exclude.insert(testNum);
  unsigned inputFlag = 0;
  while(inputFlag != inputNum){
      cin >> testNum;
      inputFlag++;
      if(exclude.find(testNum) != exclude.end()) continue;//if the value ignore the value

      testNums.push_back(testNum);
      while(testNum !=1){
        if(testNum % 2 ==0){
          testNum = testNum / 2;
          exclude.insert(testNum);
        }
        else {
          testNum = (3 * testNum + 1) / 2;
          exclude.insert(testNum);
        }
      }
  }
    #ifndef DEBUG
    for ( auto &w : exclude)
      cout << w;
    #endif

    for ( auto &n : testNums) {
      if (exclude.find(n) != exclude.end())
        testNums.erase(remove(testNums.begin(),testNums.end(),n),testNums.end());
    }

  //sort the vector
  for (unsigned i = 0; i < testNums.size(); i++) {
    for (unsigned j = i + 1; j < testNums.size(); j++){
      if(testNums[i] < testNums[j]){
        unsigned temp = 0;
        temp = testNums [i];
        testNums[i] = testNums[j];
        testNums[j] = temp;
      }
    }
  }

  //print out the results
  for (unsigned i = 0; i < testNums.size(); i++) {
    if(i + 1 < testNums.size())
      cout << testNums[i] << " ";
    else
      cout << testNums[i];

  }
return 0;
}
