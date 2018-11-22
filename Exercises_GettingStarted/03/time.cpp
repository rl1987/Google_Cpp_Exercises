#include <iostream>

using namespace std;

int main() {
  time_t t;

  cout << "Number of seconds: ";
  cin >> t;
  if (!cin.good())
    return -1;

  int n_hours = t / 3600;
  t -= n_hours * 3600;
  int n_minutes = t / 60;
  t -= n_minutes * 60;
  
  cout << "Hours: " << n_hours << endl;
  cout << "Minutes: " << n_minutes << endl;
  cout << "Seconds: " << t << endl;

}

