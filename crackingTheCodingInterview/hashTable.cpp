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


bool ransom_note(vector<string> magazine, vector<string> ransom) {

  map<string, int> magazineDictionary ;
  map<string, int> ransomDictionary ;

  for(int i = 0 ; i < magazine.size() ; i++ )     // Creating a dictionary having all the words of the magazine with the number of times they appear
    {

        if( magazineDictionary.find(magazine[i])  == magazineDictionary.end() )
          magazineDictionary[magazine[i]] = 1 ;
        else
          magazineDictionary[magazine[i]]++ ;

    }


    for(int i = 0 ; i < ransom.size() ; i++ )  // Creating a dictionary having all the words of the ransom with the number of times they appear
      {

          if( ransomDictionary.find(ransom[i]) == ransomDictionary.end() )
            ransomDictionary[ransom[i]] = 1 ;
          else
            ransomDictionary[ransom[i]]++ ;

      }

      for(int i = 0 ; i < ransom.size() ; i++ )
        {
        if( magazineDictionary.find(ransom[i])  != magazineDictionary.end() )   // check if a word of the ransom is in the magazine, if not then it just returns false
        {

          if(ransomDictionary[ransom[i]] > magazineDictionary[ransom[i]])  // Checking if all the words of the ransom appear in the magazine with the same number of occurencence
            return false;

          }
          else
          return false ;


              }


    return true ;

}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
