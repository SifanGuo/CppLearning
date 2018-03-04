#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

#define DEBUG

using namespace std;

int main(){
  set <unsigned> exclude;//store the numbers that had been calculated.
  unsigned trainNum, testNum;
  vector <int> testNums;
  cin >> trainNum;
  getchar();//receives the enter(\n)
  
  //exclude.insert(trainNum);
  while(trainNum !=1){
    if(trainNum % 2 ==0){
      trainNum = trainNum / 2;
      exclude.insert(trainNum);
    }
    else {
      trainNum = (3 * trainNum + 1) / 2;
      exclude.insert(trainNum);
    }
  }
  #ifndef DEBUG
  for ( auto &w : exclude)
    cout << w; 
  #endif
  
  while (getchar() != '\n'){
    cin >> testNum;
    testNums.push_back(testNum);
  }

  for ( auto &n : testNums) {
    if (exclude.find(n) != exclude.end())
      testNums.erase(remove(testNums.begin(),testNums.end(),n),testNums.end());
  }

  for (unsigned i = 0; i < testNums.size(); i++) {
    if(i + 1 < testNums.size())
      cout << testNums[i] << " ";
    else
      cout << testNums[i];

  }
return 0;
}
