#include <iostream>
#include <string>
#include <vector>



using namespace std;
int main(){
  vector <string> output;
  unsigned testNum;
  cin >> testNum;

  long long numA,numB,numC;
  for (unsigned i = 0 ; i < testNum; i++){
    cin >> numA >> numB >> numC;
    if (numA + numB > numC) output.push_back("true");
    else output.push_back("false");
  }
  //print out the results
  for (unsigned i = 0; i < output.size(); i++){
    if(i + 1 == output.size())  cout << "Case #" << i + 1 << ": " << output[i];
    else cout << "Case #" << i + 1 << ": " << output[i] << endl;

  }

 return 0;
}
