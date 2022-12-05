#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string myText;
    int sum = 0;
    ifstream MyReadFile("input.txt");
    vector<int> data={};
    long long i = 0;
    while (getline (MyReadFile, myText)){
          if (myText.empty()){
        data.push_back(sum);
        sum =0;
        continue;
            }
      long long calories = stoi(myText);
      sum = sum + calories;
      }
  cout << *max_element(data.begin(),data.end());
}
