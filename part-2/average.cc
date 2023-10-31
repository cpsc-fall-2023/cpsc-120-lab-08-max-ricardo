// Ricardo Rodriguez
// r.rodriguez20@csu.fullerton.edu
// @Ricardo2244
// Partners: @maxdelreal, @Dsjuncaj
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  } else {
    double total{0};
    bool first{true};
    for (std::string& argument : arguments) {
      if (first) {
        first = false;
        continue;
      }
      double number{std::stod(argument)};
      total += number;
    }
    double sum = total / static_cast<double>(arguments.size() - 1);
    std::cout << "average = " << sum << "\n";
    return 0;
  }
}
