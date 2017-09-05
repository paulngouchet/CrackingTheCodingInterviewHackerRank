#include <string>
#include <iostream>
using namespace std ;


int main() {


  //found!=std::string::npos this is what is returned when nothing is found 

  string testString = "paulemerick";
  size_t found = testString.find('a');

  cout << found << endl ;

  found = testString.find('e');
  cout << found << endl ;

  found = testString.find('e', found+1);
  cout << found << endl ;

  return 0 ;


}
