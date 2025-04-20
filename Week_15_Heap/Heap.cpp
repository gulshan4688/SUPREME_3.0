#include <bits/stdc++.h>
using namespace std;

class Heap {
public:
  int *arr;
  int capacity;
  int index;

  Heap(int capacity) {
    this->capacity = capacity;
    arr = new int[capacity];
    index = 0;
  }

  void printHeap() {
    for (int i = 1; i <= index; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  void insert(int val) {
    if (index == capacity) {
      cout << "Overflow" << endl;
      return;
    }
    index++;
    arr[index] = val;
    int i = index;

    while (i > 1) {
      int parentIdx = i / 2;
      if (arr[parentIdx] < arr[i]) {
        swap(arr[parentIdx], arr[i]);
        i = parentIdx; // because we have to also  exit the loop.

      } else
        break;
    }
  }
  void deleteFromHeap() {
    // step1 replacement((delection ka pehla rule tha ki 1 index wale ko last index ke element se replace krso))
    swap(arr[1],arr[index]);
    // step2 decrease the size
    index--;
    // step3 Heapify
    heapify(arr,index,1);
  }
  void heapify(int *arr, int n, int currIdx) {
    // n-> no. of element in the heap
    int i = currIdx;
    int leftIdx = 2 * i;
    int rightIdx = 2 * i + 1;
    // lets assume the that at i , there is the largest value
    int largestIdx = i;
    // check for left
    if (leftIdx < n && arr[leftIdx] > arr[largestIdx]) {
      largestIdx = leftIdx;
    }
    if (rightIdx < n && arr[rightIdx] > arr[largestIdx]) {
      largestIdx = rightIdx;
    }
    // now we have index of lagest element till now
    // now the new case can be that largestIdx is still i
    if (largestIdx != i){
        swap(arr[largestIdx],arr[i]);
        i=largestIdx;
        heapify(arr,n,i);
    }

  }
};

int main() {
  Heap pq(5);
  pq.insert(10);
  pq.printHeap();
  pq.insert(11);
  pq.printHeap();
  pq.insert(12);
  pq.printHeap();
  pq.insert(13);
  pq.printHeap();
  pq.insert(14);
  pq.printHeap();
  pq.deleteFromHeap();
  pq.printHeap();

  return 0;
}
