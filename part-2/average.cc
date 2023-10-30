// Max Del Real
// maxadelreal@csu.fullerton.edu
// @maxdelreal
// Partners: @Ricardo2244

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // If not, print an error message and return a non-zero value.
  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function
  std::vector<double> inputs;

  for (int i = 1; i < arguments.size(); ++i) {
    inputs.push_back(std::stod(arguments.at(i)));
  }

  double sum = 0.0;

  for (double in_sum : inputs) {
    sum += in_sum;
  }
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  double avg = sum / static_cast<double>(inputs.size());
  // average = *AVERAGE*
  // on its own line.
  std::cout << " average = " << avg << "\n";

  return 0;
}