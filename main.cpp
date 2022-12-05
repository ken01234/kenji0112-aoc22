#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string myText;
    int calories;
    ifstream MyReadFile("input.txt");
    int data[3000]=[];
    long long i = 0;
    while (getline (MyReadFile, myText)){
        calories = stoi(myText);
        data[i]= calories;
        cout << data[i];
        i++;
    }
    // cout << *max_element(data.begin(),data.end());
    // return 0;
}