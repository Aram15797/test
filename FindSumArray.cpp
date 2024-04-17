#include <iostream>

int main() {
   int n = 0;
   int num = 0;

   std::cout << "Enter size of array: ";
   std::cin >> n;

   while (std::cin.fail() || n <= 0) {
      std::cout << "Invalid input. Please enter a positive integer: ";
      std::cin.clear();
      std::cin.ignore();
      std::cin >> n;
    }

   int *arr = new int[n];

   for (int i = 0; i < n; ++i) {
      std::cout << "Enter element of array N=" << (i + 1) << ": ";
      std::cin >> arr[i];

      while (std::cin.fail()) {
         std::cout << "Invalid input. Please enter an integer: ";
         std::cin.clear();
         std::cin.ignore();
         std::cin >> arr[i];
      }
   }

   std::cout << "\nEnter a number to find out the sum of which two numbers from the array is equal to your number: ";
   std::cin >> num;
   while (std::cin.fail()) {
         std::cout << "Invalid input. Please enter an integer: ";
         std::cin.clear();
         std::cin.ignore();
         std::cin >> num;
      }

   for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {        
         if (arr[i] + arr[j] == num) {
            std::cout << "Pair found: " << arr[i] << ", " << arr[j] << std::endl;
         }
      }
   }

   return 0;
}
