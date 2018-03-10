#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main(){
  int key,value;
  vector <int> v;
  string s;
  getline(cin, s);

  stringstream stream(s);
  while(stream >> key >> value){
    if((value == 0)){
      //v.push_back(key*value);
      //v.push_back(0);
    }
    else {
      v.push_back(key*value);
      v.push_back(value-1);
    }
  }
  //print out the answer
  if (v.size() == 0) cout << "0 0";

  for(unsigned i = 0; i < v.size(); i++){
    if(i == 0) cout << v[i];
    else cout << " " << v[i];
  }

 return 0;
}

/*After reading this solution, I got to know the meaning of this question.
#include <iostream>
using namespace std;
int main() {
    int a, b, flag = 0;
    while (cin >> a >> b) {
        if (flag == 0 && b == 0) cout << "0 0";
        if (b != 0) {
            if (flag == 1) cout << " ";
            cout << a * b << " " << b - 1;
            flag = 1;
        }
    }
    return 0;
}
https://www.liuchuo.net/archives/526
*/
