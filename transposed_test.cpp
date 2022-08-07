#include "transposed.hpp"

#include <iostream>
#include "m1cycles.hpp"

int main(int argc, char **argv) {
    auto then = get_counters();
    int result = multiply();
    auto now = get_counters();
    std::cout << now.cycles - then.cycles << "\n";
    return result % 256;
}
