#include <iostream>
#include <set>
#include <math.h>
#define DEBUG

using namespace std;

int main(){
  unsigned inputNum;
  set <unsigned> primeNum;
  cin >> inputNum;
  for (unsigned p = 3; p <= inputNum; p += 2){
    bool flag = true; //As a flag to record whether or not p is a prime Number
    for (unsigned i = 2; i <= sqrt(p) + 1; i++){
     if(p % i == 0) flag = false;
    }
    if(flag) primeNum.insert(p);
  }
  #ifndef DEBUG
  for (auto &x : primeNum){
   cout << x << " " << endl;
  }
  #endif

  unsigned output1007 = 0; //the answer
  for (auto &num : primeNum){
     if(primeNum.find(num + 2) != primeNum.end()) output1007++;
  }
  cout << output1007;
 return 0;
}
