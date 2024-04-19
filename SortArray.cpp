#include <iostream>

void sortArrayDescending(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int x = i + 1; x < size; ++x) {
            if (arr[x] > arr[i]) { 
                int temp = arr[i];
                arr[i] = arr[x];
                arr[x] = temp;
            }
        }
   }

}

void sortArrayAscending(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int x = i + 1; x < size; ++x) {
            if (arr[x] < arr[i]) { 
                int temp = arr[i];
                arr[i] = arr[x];
                arr[x] = temp;
            }
        }
   }

}

int main() {
   int n = 0;

   std::cout << "Enter size of array: " <<std::endl;
   std::cin>>n;
   int arr[n];

   for (int i = 0; i < n; ++i){
      std::cout << "Enter element of array N=" << (i + 1) <<std::endl;
      std::cin>>arr[i];
   }

   int size = sizeof(arr) / sizeof(arr[0]);

   sortArrayDescending(arr, size);

   std::cout << "Array descending: \n";
   for (int i = 0; i < size; ++i) {
      std::cout << arr[i] << " ";
   }
   std::cout << "\n";
   std::cout << "Array ascending: \n";
   sortArrayAscending(arr, size);

   for (int i = 0; i < size; ++i) {
      std::cout << arr[i] << " ";
   }
   return 0;
}
d