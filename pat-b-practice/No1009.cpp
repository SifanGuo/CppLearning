#include <iostream>
#include <vector>
#include <string>

#define DEBUG

using namespace std;

int main(){
  vector <string> words;
  string sentence, word;
  getline(cin, sentence);

  #ifndef DEBUG
  cout << sentence;
  #endif

  for (unsigned i = 0; i < sentence.size(); i++){
    //split through spaces between words
    if (sentence[i] == ' ') {
      words.insert(words.begin(), word);
      word = "";//reset the word to empty string
      #ifndef DEBUG
      cout << word <<endl;
      #endif
    }
    else word += sentence[i];
    //or it's the final charactor of this sentence
    if (i + 1 == sentence.size()){
      words.insert(words.begin(), word);
    }
  }

  for (unsigned i = 0; i < words.size(); i++){
    if (i == 0) cout << words[i];
    else cout << " " << words[i];
  }

 return 0;
}
