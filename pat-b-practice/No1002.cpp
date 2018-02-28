#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#define DEBUG

int main(){
    string oj_input;
    long long sum = 0;
    std::cin >> oj_input;
    for(auto a:oj_input ){
      switch (a) {
        case '0': sum += 0; break;
        case '1': sum += 1; break;
        case '2': sum += 2; break;
        case '3': sum += 3; break;
        case '4': sum += 4; break;
        case '5': sum += 5; break;
        case '6': sum += 6; break;
        case '7': sum += 7; break;
        case '8': sum += 8; break;
        case '9': sum += 9; break;
      }
      #ifndef DEBUG
      cout << sum << endl;
      #endif 
    }
    string sum_string = to_string(sum);
    #ifndef DEBUG
    cout << sum_string << endl;
    #endif
    for (decltype(sum_string.size()) index = 0; index < sum_string.size(); index++){
        switch (sum_string[index]) {
          case '0': cout << "ling"; break;
          case '1': cout << "yi"; break;
          case '2': cout << "er"; break;
          case '3': cout << "san"; break;
          case '4': cout << "si"; break;
          case '5': cout << "wu"; break;
          case '6': cout << "liu"; break;
          case '7': cout << "qi"; break;
          case '8': cout << "ba"; break;
          case '9': cout << "jiu"; break;
        }
        if (index + 1 != sum_string.size())
            cout << " ";
    }

}
