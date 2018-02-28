#define DEBUG
#include <iostream>
using namespace std;
  
int  main(){
  int n = 0; // store the input
  int times = 0; //store the times
    cout<<"Please enter the number:"<<endl;
    cin>>n;
 
  while(n != 1){
    if(n % 2 == 0){
#ifndef DEBUG
cout<<n<<" is an even number. "<<"Currently, times:"<<times<<"."<<endl;
#endif
      n = n / 2;
      times++;
    }
    else{
#ifndef DEBUG
cout<<n<<" is an odd number. "<<"Currently, times:"<<times<<"."<<endl;
#endif
      n = (3 * n + 1)/2;
      times++;
    }
  }
#ifndef DEBUG
    cout<<"The final times: "<<times<<"."<<endl;
#endif
   cout<<times;
  return 0;
}
