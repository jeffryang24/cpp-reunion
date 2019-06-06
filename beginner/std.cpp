#include <iostream>

int main()
{
  int width_3{6};
  int width_4{};

  // error appear in uniform initialization
  //int error_width_1{4.5};

  std::cout << "width_3 = " << width_3 << '\n'
            << "width_4 = " << width_4 << '\n';

  std::cout << "Now input..." << '\n';

  std::cin >> width_4;
  std::cout << "You typed: " << width_4 << '\n';

  return 0;
}