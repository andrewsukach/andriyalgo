#include <iostream>

template <typename _rai> void print(_rai _first, _rai _last) {
  for (; _first != _last; ++_first)
    std::cout << *_first << " ";
  std::cout << std::endl;
}