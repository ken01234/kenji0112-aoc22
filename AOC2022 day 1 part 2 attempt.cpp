// This is part 2
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
    sort(data.begin(),data.end());
  cout << *max_element(data.begin(),data.end()) <<endl << data[data.size()-1] << endl << data[data.size()-2] << endl;
  int answer = *max_element(data.begin(),data.end()) + data[data.size()-2] + data[data.size()-3]; // This part only shows the top 3 largest number of calories from the data
   cout << answer;
  
}
