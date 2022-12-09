#include "print.h"
#include "sort.h"
#include <vector>

int main() {
  std::vector<int> A{5, 4, 3, 2, 1};
  insertion_sort(begin(A), end(A));
  print(begin(A), end(A));
}