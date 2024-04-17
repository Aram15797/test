#include <iostream>
#include <cstring>

int main() {
   char text[100];

   std::cout << "Enter some text (up to  99  characters) for reversed: ";
   std::cin>>text;

   int size = std::strlen(text);

   for (int i = 0; i < size/2; ++i) {
      char temp = text[i];
      text[i] = text[size - (i + 1)];
      text[size - (i + 1)] = temp;
   }

   std::cout << "Reversed text: " << text << std::endl;

   return 0;
}
