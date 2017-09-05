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




// Left rotations
// 1 2 3 4 5 -> 2 3 4 5 1 -> 3 4 5 1 2 -> 4 5 1 2 3 -> 5 1 2 3 4

vector<int> array_left_rotation(vector<int> a, int n, int k) {

  // n is the number of element of the array -> a.size()
  // K number of left rotation

  vector<int> finalVector = a;


  for(int i = 0 ; i < k ; i++)
    {

    finalVector.push_back(finalVector[0]);   //copies the first element at the last position
    finalVector.erase(finalVector.begin());  // erases the first element and the code just keeps going until it iterates the number of left rotations rotations 

  }

  return finalVector;


}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
