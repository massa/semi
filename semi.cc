
#include <iostream>

using std::cin;
using std::cout;

int main() {
  char current = 0, last = 0;
  while( cin.get(current) ) {
    if( current == '\r' ) continue;
    cout.put(
        (current == '\n' && last != ';') ? (last = ' ') :
        (current == ' '  && last == ';') ? (last = '\n') :
        (current == ';'  && last != ' ') ? ((last = 0), current) :
        (last = current)
    );
  }
}

