#include <iostream>

using namespace std;


int main() {
  int n_chirps = 0;
  cout << "Number of chirps: ";
  cin >> n_chirps;
  
  if (!cin.good())
    return -1;

  double temp = (40 + n_chirps) / 4.0;

  cout << "The temperature is: " << temp << " degrees." << endl;
}


