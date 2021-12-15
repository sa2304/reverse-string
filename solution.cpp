//
// Created by Антон Шмидт on 15.12.2021.
//

#include "solution.h"

using namespace std;

void Solution::reverseString(std::vector<char> &s) {
  int left = 0;
  int right = s.size() - 1;
  while (left < right) {
    swap(s[left++], s[right--]);
  }
}
