#include <iostream>
#include <bits/stdc++.h> 


using namespace  std;

int main() {

int arr[] = {-12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12};

int length = sizeof(arr)/sizeof(arr[0]);

int count = 1;

sort(arr, arr+length, greater<int>());

for (int i =0; i < length-1; i++) {

  if (arr[i] == arr[i+1]) {

    count++;
  } else {
    cout << arr[i] << " " << count;
    count = 1;
  }

  }

 
}





