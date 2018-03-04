#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

  unsigned flag = 0;//control loop
  unsigned max = 0, min = 101; //store the max and min
  unsigned num;//The number of inputs
  map<int, string> m;
  string name, course;//students' name and the corresponing course
  unsigned score;//the score of a course
  
  cin >> num;
  getchar();//get the enter(\n)
 
  while(flag != num){
  cin >> name >> course >> score;
  m[score] = name + " " + course;
  max = score > max ? score : max;
  min = score < min ? score : min;

  if (getchar() == '\n') flag ++;
  }

  cout << m[max] << endl;
  cout << m[min] << endl;















return 0;
}
