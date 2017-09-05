#include <map>
#include <iostream>
using namespace std ;


int main(){

  map<char,int> alphabet;

    for(int i = 0 ; i < 26 ; i++)
      alphabet[ char(int('a')+i) ] = 0 ;

    cout << alphabet[''] << endl ;
}
