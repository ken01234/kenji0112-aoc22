//This is my attempt in the question, I get values but so far I haven't been able to get the correct answer.

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
int main() {
    string myText;
    ifstream MyReadFile("aoc2022day4input.txt");
  vector<string> sector= {};
  while (getline (MyReadFile, myText)){
    sector.push_back(myText);
    cout<<myText<<endl;
    }
  char delimiter1 = ',';
  char delimiter2 = '-';

  int count = 0;

  for (const string& s : sector) {
    stringstream ss(s);
    vector<string> leftover;
    string left;
    while (getline(ss, left, delimiter1)) {
      leftover.push_back(left);
    }

    vector<string> range1, range2;
    stringstream ss1(leftover[0]);
    while (getline(ss1, left, delimiter2)) {
      range1.push_back(left);
    }
    stringstream ss2(leftover[1]);
    while (getline(ss2, left, delimiter2)) {
      range2.push_back(left);
    }

    int start1 = stoi(range1[0]);
    int end1 = stoi(range1[1]);
    int start2 = stoi(range2[0]);
    int end2 = stoi(range2[1]);// Up to this point, the ranges are turned from strings into integers


    if ((end2 > end1 && start2 > start1)||(end1 > end2 && start1 < start2)||(end2 == end1 && start2 > start1)||(end2 > end1 && start2 == start1)||(end1 ==end2 && start1 < start2)||(end1 > end2 && start1 == start2)){
      count++;// This checks to see the different cases where a section may be considered overlapping
    }
  }

  cout << count;

  return 0;
}
