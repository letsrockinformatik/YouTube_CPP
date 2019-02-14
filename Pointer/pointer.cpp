#include <iostream>
#include <string>

void geld_verdienen(int kontostand){
    kontostand = kontostand + 100;
}

void geld_verdienen(int* kontostand){
    *kontostand = *kontostand + 100;
}

int main() {
  int kontostand = 20;
  geld_verdienen(kontostand);
  std::cout << "Ohne Pointer: " << kontostand << "€\n";
  int* kontostand_pointer = &kontostand;
  geld_verdienen(kontostand_pointer);
  std::cout << "Nach Pointer: " << kontostand << "€\n";
}

 