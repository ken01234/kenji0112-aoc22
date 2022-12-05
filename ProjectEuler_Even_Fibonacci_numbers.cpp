#include <iostream>
#include <vector>
using namespace std;
int main() {
  int f = 0;
  int s = 1;
  int change = 0;
  int sum=0;

    change = f + s;
  while(change<4000000){
        if (change%2==0){
      sum=sum+change;
    }
        f = s;
        s = change;
        change =f + s;
  
  }
    
  cout<<sum;
  }
