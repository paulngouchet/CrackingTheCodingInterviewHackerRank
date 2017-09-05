#include <iostream>
#include <vector>
using namespace std ;


int main(){

vector<int> testVec;    // Declaring a vector 
testVec.push_back(1);
testVec.push_back(3);
testVec.push_back(4);

vector<int>::iterator it;   // Declaring an iterator

it = testVec.begin();
it = testVec.insert(it , 5 );  // insert at the first position returns the new testVec.begin

testVec.pop_back();            // remove the last element

testVec.erase(testVec.begin());   // remove the first element

for(int i = 0 ; i < testVec.size(); i++)   // Printing the entire vector
cout << testVec[i] << " " ;

return 0 ;

}
