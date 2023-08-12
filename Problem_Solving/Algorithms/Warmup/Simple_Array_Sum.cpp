#include <iostream>
#include <vector>

int simpleArraySum(std::vector<int>ar) {
  int solution = 0; 

  for (int i = 0; i < ar.size(); i++) {
    solution += ar[i];
  }

  return solution; 
}

int main(int argc, char** argv) {

  return 0;
}