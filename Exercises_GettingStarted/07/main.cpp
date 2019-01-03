#include <iostream>

using namespace std;

void process_sum(int &sum)
{
  do {
   if (sum == 9) {
     cout << "sum = 9" << endl;
     exit(-1);
   }

   if (sum % 2 == 0)
     break;

   if (sum + 11 < 20) {
     sum += 11;
   } else if (sum - 11 > 0) {
     sum -= 11;
   }
  } while (!(sum > 0 && sum < 20));
}

int main(void) {
  int abc;
  cout << "Enter 3 digit number" << endl;
  cin >> abc;

  if (abc < 100 || abc > 999) {
    return -1;
  }

  int a = abc / 100;
  int b = (abc / 10) % 10;
  int c = abc % 10;

  int bca = 100*b + 10*c + a;
  int cab = 100*c + 10*a + b;

  int x = abc % 11;
  int y = bca % 11;
  int z = cab % 11;

  int alpha = x + y;
  int beta = y + z;
  int zetta = z + x;

  process_sum(alpha);
  process_sum(beta);
  process_sum(zetta);

  alpha /= 2;
  beta /= 2;
  zetta /= 2;

  cout << "alpha = " << alpha << " beta = " << beta << " zetta = " << zetta << endl;
}


