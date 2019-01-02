#include <iostream>

using namespace std;

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

  do {
   if (alpha == 9) {
     cout << "alpha = 9" << endl;
     return -1;
   }

   if (alpha % 2 == 0)
     break;

   if (alpha + 11 < 20) {
     alpha += 11;
   } else if (alpha - 11 > 0) {
     alpha -= 11;
   }
  } while (!(alpha > 0 && alpha < 20));

  do {
   if (beta == 9) {
     cout << "beta = 9" << endl;
     return -1;
   }

   if (beta % 2 == 0)
     break;

   if (beta + 11 < 20) {
     beta += 11;
   } else if (beta - 11 > 0) {
     beta -= 11;
   }
  } while (!(beta > 0 && beta < 20));

  do {
   if (zetta == 9) {
     cout << "zetta = 9" << endl;
     return -1;
   }

   if (zetta % 2 == 0)
     break;

   if (zetta + 11 < 20) {
     zetta += 11;
   } else if (zetta - 11 > 0) {
     zetta -= 11;
   }
  } while (!(zetta > 0 && zetta < 20));

  alpha /= 2;
  beta /= 2;
  zetta /= 2;

  cout << "alpha = " << alpha << " beta = " << beta << " zetta = " << zetta << endl;
}


