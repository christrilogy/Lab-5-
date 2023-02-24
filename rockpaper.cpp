#include <iostream> 
#include <cmath> 
using namespace std; 


int main() 
{

  // Constant variables
const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

  char getComputerOption() {
    srand(time(0));
    // Random number

  int num = rand() % 3 + 1;
 
    if(num==1) return 'r';
    if(num==2) return 'p';
    if(num==3) return 's';
}
 

return 0;
  }
