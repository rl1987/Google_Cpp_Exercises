#include <iostream>

using namespace std;

int main() {
 int usd_cents_left = 10000;
 int horse_price = 1000;
 int pig_price = 300;
 int rabbit_price = 50;

 for (int n_horses = 0; n_horses <= usd_cents_left / horse_price; n_horses++) {
   int usd_cents_left2 = usd_cents_left - n_horses * horse_price;

   for (int n_pigs = 0; n_pigs <= usd_cents_left2 / pig_price; n_pigs++) {
      int usd_cents_left3 = usd_cents_left2 - n_pigs * pig_price;

      for (int n_rabbits = 0; n_rabbits <= usd_cents_left3 / rabbit_price; n_rabbits++) {
        int usd_cents_left4 = usd_cents_left3 - n_rabbits * rabbit_price;

        if (usd_cents_left4 == 0 && (n_horses + n_pigs + n_rabbits == 100)) {
          cout << n_horses << " horses, " << n_pigs << " pigs, " << n_rabbits << " rabbits." << endl;
        }
      }
   }

 }

 return 0;
}

