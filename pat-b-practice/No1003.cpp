#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

#define DEBUG

int main(){
  unsigned line_number, index = 0;
  string text;
  std::vector<string> texts;

  cin >> line_number;
  while(getchar() != '\n');

  while(index != line_number){
    getline(cin, text);
    texts.push_back(text);
    index++;
  }

  #ifndef DEBUG
  cout << "The size of our vector for your input is: " << texts.size()<<endl;
  #endif

  for(unsigned i = 0; i != line_number; i++){ 
    map <char,size_t> word_count;
    unsigned positionP = 0, positionT = 0;
    /*The number of A ahead of P is positionP
    The number of A between P and T is positionT-postionP-1
    The number of A after T is word_count.size()-positionT-1*/
    for(unsigned j = 0; j!= texts[i].size(); j++){
      ++word_count[texts[i][j]];
      if(texts[i][j] == 'P') positionP = j;
      if(texts[i][j] == 'T') positionT = j;
    }

    #ifndef DEBUG
    for(auto &w : word_count){
      cout << w.first << " " << w.second << endl;
    }
    #endif
    
    if(word_count['P'] == 1 && word_count['T'] == 1 &&
       word_count['A'] > 0 &&
       word_count['P'] + word_count['T'] + word_count['A'] == texts[i].size()&& 
       texts[i].size() - positionT -1 == positionP * (positionT - positionP - 1)){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
    word_count.clear();
  }

  return 0;
}

