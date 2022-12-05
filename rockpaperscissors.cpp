#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
   string myText;
   int sum = 0;
   ifstream MyReadFile("aoc2022day2input.txt");
   while (getline(MyReadFile, myText)) {
  // vector <string> yes ={"A Y","B X","C Z"};
  // int sum = 0;
  if (myText.empty()){
         continue;
    }
  // for (int i = 0;i <=yes.size()-1;i++){
    if(myText=="A Y") {
      sum = sum + 8;
      cout << sum << endl;
    } 
    else if(myText=="A X") {
      sum = sum + 4;
      cout << sum << endl;
    } 
    else if (myText=="A Z") {
      sum = sum +3;
      cout << sum << endl;
    } 
    if (myText=="B Y") {
      sum = sum + 6;
      cout << sum << endl;
    } 
    else if (myText=="B X") {
      sum = sum + 1;
      cout << sum << endl;
    } 
    else if (myText=="B Z") {
      sum = sum + 9;
      cout << sum << endl;
    } 
    if (myText=="C Y") {
      sum = sum + 2;
      cout << sum << endl;
    } 
    else if (myText=="C X") {
      sum = sum +7;
      cout << sum << endl;
    } 
    else if (myText=="C Z") {
       sum = sum +6;
      cout << sum << endl;
    }
}

}