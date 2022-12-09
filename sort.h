#include <vector>

template <typename T> void insertion_sort(std::vector<T> &A) {
  for (uint64_t i = 1, n = static_cast<uint64_t>(A.size()); i < n; ++i) {
    const T key = A[i];
    uint64_t j = i - 1;
    for (; j > -1 && A[j] > key; --j)
      A[j + 1] = A[j];
    A[j + 1] = key;
  }
}

template <typename _rai> void insertion_sort(_rai _first, _rai _last) {
  if (_first == _last)
    return;

  for (_rai _i = _first + 1, _left_bound = std::prev(_first); _i != _last;
       ++_i) {
    _rai _j = _i - 1;
    for (; _j != _left_bound && *_j > *_i; --_j)
      std::iter_swap(_j, _j + 1);
    std::iter_swap(_j + 1, _i);
  }
}