#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
  unsigned inputNum, temp;
  unsigned A1 = 0, flag2 = 0, A3 = 0, sum4 = 0, count4 = 0, A5 = 0;
  int A2 = 0;
  double A4 = 0;


  cin >> inputNum;
  for(unsigned i = 0; i < inputNum; i++){
    cin >> temp;

    //calculate A1
    if (temp % 5 == 0 && temp % 2 == 0) A1 += temp;

    //calculate A2
    if (temp % 5 == 1){
      //the first operation is plus
      if (flag2 % 2 == 0){
        A2 += temp;
        flag2++;
      }
      else{
        A2 -= temp;
        flag2++;
      }
    }

    //calculate A3
    if (temp % 5 == 2){
      A3++;
    }

    //calculate A4
    if (temp % 5 == 3){
      sum4 += temp;
      count4++;
      A4 = double(sum4) / count4;
    }

    //calculate A5
    if (temp % 5 == 4){
      A5 = temp > A5 ? temp : A5;
    }
  }

  //print out the result of A1
  if(A1 > 0) cout << A1;
  else cout << 'N';

  //maybe there is an empty list
  //print out the result of A2
  if (flag2 > 0)  cout << " " << A2;
  else cout << " " << A2;

  //print out the result of A3
  if (A3 > 0)  cout << " " << A3;
  else cout << " " << 'N';

  //print out the result of A4
  if(A4 > 0)   cout << " " << setprecision(1) << fixed << A4;
  else cout << " " << 'N';

  //print out the result of A5
  if(A5 > 0) cout << " " << A5;
  else cout << " " << 'N';

 return 0;
}
