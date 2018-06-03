#include <iostream>
using namespace std;

int binarySearch(int data[], int num, int left, int right);
int compareNum(int a, int b);

int main(int argc, char const *argv[]) {
  int data[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int num, found;

  std::cout << "number? : " << " ";
  std::cin >> num;

  found = binarySearch(data, num, 0, 9);

  if (found == -1) {
    std::cout << "Not in the list" << '\n';
  }else{
    std::cout << "Found at position " << found << '\n';
  }

  return 0;
}

int binarySearch(int data[], int num, int left, int right){
  int middle;
  if (left <= right) {
    middle = (left + right) / 2;
    switch (compareNum(data[middle], num)) {
      case -1: return binarySearch(data, num, middle + 1, right);
      case 0: return middle;
      case 1: return binarySearch(data, num, left, middle - 1);
    }
  }
  return -1;
}

int compareNum(int a, int b){
  if (a == b) {
    return 0;
  }else if (b > a) {
    return -1;
  }else{
    return 1;
  }
}
