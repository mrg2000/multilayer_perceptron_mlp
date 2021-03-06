#include "mlp.hpp"
#include <vector>
#include <iostream>


int main () {
    std::vector<int> topology = {2, 3, 4, 1}; // {Input Layer, First Hidden Layer, ... , Output Layer}
    
    MLP mlp(topology);
    
    MLP::Vector input(2);
    input(0) = 0;
    input(1) = 1;

    MLP::Vector output = mlp.forward(input);
    for (auto x : output) {
        std::cout << x << std::endl;
    }
}