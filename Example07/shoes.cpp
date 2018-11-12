#include <iostream>
#include <string>

#define kWeeklySalary (600)
#define kHourlySalary (7)
#define kCommisionFraction1 (0.1)
#define kCommisionFraction2 (0.2)
#define kBonusPerShoePair (20)
#define kShoePairPrice (225)

using namespace std;

typedef struct {
  double hours_worked;
  double amount;
  double n_sold;
} WeeklySales;

double CalcMethod1(WeeklySales &sales) {
  return kWeeklySalary;
}

double CalcMethod2(WeeklySales &sales) {
  return kHourlySalary * sales.hours_worked + kCommisionFraction1 * sales.amount;

}

double CalcMethod3(WeeklySales &sales) {
  return kCommisionFraction2 * sales.amount + kBonusPerShoePair * sales.n_sold;
}

int main(int argc, char **argv) {
  if (argc != 3) {
    cout << "Usage: " << argv[0] << " <number of pairs sold> <hours worked>" << endl;
    return -1;
  }

  double n_sold = stod(argv[1]);
  double hours_worked = stod(argv[2]);

  WeeklySales sales = { .amount = kShoePairPrice * n_sold,
          .n_sold = n_sold, 
          .hours_worked = hours_worked };

  cout << "Method 1: " << CalcMethod1(sales) << endl;
  cout << "Method 2: " << CalcMethod2(sales) << endl;
  cout << "Method 3: " << CalcMethod3(sales) << endl;

  return 0;
}


