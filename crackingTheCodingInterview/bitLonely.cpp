#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Note, MAP(hash table, dictionary, are really powerful ), always keep it on top your mind for solving any problem

int lonely_integer(vector < int > a) {

  map<int, int> dictionary ;

  for(int i = 0 ; i < a.size() ; i++)
  {
    if(dictionary.find(a[i]) == dictionary.end())   // finding the number of occurence of all the numbers in the vector and indexing all of them with a map data structure
      dictionary[a[i]] = 1 ;
    else
      dictionary[a[i]]++ ;

  }

  map<int, int>:: iterator it;

  for(it = dictionary.begin(); it != dictionary.end() ; it++)   // Looping through the entire map and check for the number that occurs only once
  {
    if(it->second == 1 )
      return it->first ;
  }

return 0 ; // This is just a placeholder, in theory it should never happen, the code will always terminate before reaching this line 

}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    cout << lonely_integer(a) << endl;
    return 0;
}
