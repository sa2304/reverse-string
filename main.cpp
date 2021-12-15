#include <cassert>
#include <iostream>

#include "solution.h"

using namespace std;

void TestReverseString() {
  Solution s;
  {
    vector<char> data{'h','e','l','l','o'};
    s.reverseString(data);
    assert((vector<char>{'o','l','l','e','h'}) == data);
  }
  {
    vector<char> data{'H','a','n','n','a','h'};
    s.reverseString(data);
    assert((vector<char>{'h','a','n','n','a','H'}) == data);
  }
  {
    vector<char> data{};
    s.reverseString(data);
    assert((vector<char>{}) == data);
  }
}

int main() {
  TestReverseString();
  std::cout << "Ok!" << std::endl;
  return 0;
}
