#include <iostream>

using namespace std;

string getMonth(string encoded) {
  string table[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
          "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

  return table[encoded[0] - 'A'];
}

string getDay(string encoded) {
  int first_digit = encoded[1] - 'Q';
  int second_digit = encoded[2] - 'Q';

  return to_string(first_digit) + to_string(second_digit);
}

string getYear(string encoded) {
  return to_string(1995 + encoded[3] - 'A' + 1);
}


int main() {
  string encoded = "ARZM";

  cout << getYear(encoded) << " " << getMonth(encoded) << " " << getDay(encoded) << endl;
}

