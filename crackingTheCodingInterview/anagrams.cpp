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

// cde we delete d and e to get c
// abc we delete b and c to get c

// Principle behind the code

// We need to count the number of letters that don't appear in each string, one string at the time. Then you count the number of time a character  common to both strings appears more than once which happens by counting occurences of characters in one string and substracting the number of occurence of characters in the second string

// Note, when trying to solve for strings, always of trying to solve in terms of numbers, and make the problem looks as simple as possible, don't look for too much built in function because during an interview, they don't expect you to know all those built in functions on top of your mind  

int number_needed(string a, string b) {

  map<char,int> alphabet;

  int numberOfDeletions = 0 ;

    for(int i = 0 ; i < 26 ; i++)           // Creating a map that holds all the different letters of the alphabet
      alphabet[ char(int('a')+i) ] = 0 ;    // It is created to count their occurencence in the strings

      for(int i = 0 ; i < b.length(); i++ )   // Counts the occurence of each character in the first string by adding
          alphabet[b[i]]++ ;


      for(int i = 0 ; i < a.length(); i++ )   // Counts the occurence of each character in the second string but substracting this time, it will take care of characters that belongs to both strings and just keep the difference in the number of occurence between both the strings
          alphabet[a[i]]-- ;


      for(int i = 0 ; i < 26 ; i++)
        numberOfDeletions = numberOfDeletions + abs(alphabet[ char(int('a')+i) ]); // Find the number of deletions in total and we put the absolute value the action of decrementing happens in the second string

        return numberOfDeletions;




}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
