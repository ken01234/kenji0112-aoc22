// I was able to move the crates for the first eight movements but then after the 8th one it stopped. It worked with the example. 

#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
// FPHFQPQWT
int main() {
  int count=0;
  vector<vector<string>> crates ={ {"D", "L", "V", "T", "M", "H", "F"}, {"H", "Q", "G", "J", "C", "T", "N","P"},{"R", "S", "D", "M", "P", "H"},{"L", "B", "V", "F"},{"N", "H", "G", "L", "Q"},{"W", "B", "D", "G", "R", "M", "P"}, {"G", "M", "N", "R", "C", "H", "L", "Q"}, {"C", "L", "W"}, {"R", "D", "L", "Q", "J", "Z", "M", "T"}};

string myText;
vector<string> tokens;
  ifstream MyReadFile("AOCday5input.txt");
  while (getline(MyReadFile, myText)) {
    count+=1;
    cout<<endl<<count<<endl;
    stringstream ss(myText);
    while (getline(ss, myText, ' ')) {
      tokens.push_back(myText);
      }
  
  int n1 = stoi(tokens[1]);
  int from = (stoi(tokens[3])) - 1;
  int to = (stoi(tokens[5])) - 1;
     for (int i = 0; i < n1; i++) {
    if (crates[from].size() == 0) {
         break;
      }else{
     crates[to].push_back(crates[from][crates[from].size()-1]);
      cout<<crates[from][crates[from].size()-1]<<endl;
       crates[from].pop_back();// adding the crates to other vectors and deleting it fromt thr original vector it was from (moving the crates from one vector to another)
       }
       } 
   for (auto elem : crates) {
     if (elem.size()==0){
       cout<<"";
     }else{
     cout << elem[elem.size()-1];
       }// showing the last crate in the columns
   }
 }
  }
