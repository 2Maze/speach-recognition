#include <torch/torch.h>
#include <iostream>

int main() {
  std::cout << "Hello libtorch!" << std::endl;
  torch::Tensor tensor = torch::rand({2, 3});
  std::cout << tensor << std::endl;
}