#include <iostream>

using namespace std;

void printA() {
   cout << "AAAAAAAAA\n"
           "A       A\n"
           "A       A\n"
           "A       A\n"
           "AAAAAAAAA\n"
           "A       A\n"
           "A       A\n"
           "A       A\n";
}

void printE() {
  cout << "EEEEEEEEE\n"
          "E\n"
          "E\n"
          "E\n"
          "EEEEEEEEE\n"
          "E\n"
          "E\n"
          "E\n"
          "EEEEEEEEE\n";
}

void printR() {
  cout << "RRRRRRRRR\n"
          "R       R\n"
          "R       R\n"
          "R       R\n"
          "RRRRRRRRR\n"
          "R R\n"
          "R   R\n"
          "R    R\n"
          "R     R\n";
}

void printS() {
  cout << "SSSSSSSSS\n"
          "S\n"
          "S\n"
          "S\n"
          "SSSSSSSSS\n"
          "        S\n"
          "        S\n"
          "        S\n"
          "SSSSSSSSS\n";
}

void printF() {
  cout << "FFFFFFFFF\n"
          "F\n"
          "F\n"
          "F\n"
          "FFFFFFFFF\n"
          "F\n"
          "F\n"
          "F\n";
}

void printZ() {
  cout << "ZZZZZZZZZ\n"
          "       Z\n"
          "      Z\n"
          "     Z\n"
          "    Z\n"
          "   Z\n"
          "  Z\n"
          " Z\n"
          "ZZZZZZZZZ\n";

}

void printB() {
  cout << "BBBBBBB\n"
          "B      B\n"
          "B      B\n"
          "B      B\n"
          "BBBBBBB\n"
          "B      B\n"
          "B      B\n"
          "B      B\n"
          "BBBBBBB\n";

}

void printY() {
  cout << "Y     Y\n"
          " Y   Y\n"
          "  Y Y\n"
          "   Y\n"
          "   Y\n"
          "   Y\n"
          "   Y\n";
}

void printM() {
  cout << "M       M\n"
          "MM     MM\n"
          "M M   M M\n"
          "M  M M  M\n"
          "M   M   M\n"
          "M       M\n"
          "M       M\n";
}

void printK() {
  cout << "K    K\n"
          "K   K\n"
          "K  K\n"
          "K K\n"
          "KK\n"
          "K K\n"
          "K  K\n"
          "K   K\n"
          "K    K\n";
}

void printL() {
  cout << "L\n"
          "L\n"
          "L\n"
          "L\n"
          "L\n"
          "L\n"
          "L\n"
          "L\n"
          "LLLLLLLLL\n";
}

int main() {
  string text = "FREEZY BREEZE MAKES FLEAS";

  for (int i = 0; i < text.size(); i++) {
    cout << endl;
    switch (text[i]) {
      case 'A':
        printA();
        break;
      case 'E':
        printE();
        break;
      case 'R':
        printR();
        break;
      case 'S':
        printS();
        break;
      case 'F':
        printF();
        break;
      case 'Z':
        printZ();
        break;
      case 'Y':
        printY();
        break;
      case 'B':
        printB();
        break;
      case 'M':
        printM();
        break;
      case 'K':
        printK();
        break;
      case 'L':
        printL();
        break;
    }
    cout << endl;
  }

}


