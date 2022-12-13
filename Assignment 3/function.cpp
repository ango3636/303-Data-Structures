#include <iostream>
#include <string>
#include <queue>
#include "function.h"

using namespace std;

void move_to_rear(std::queue<int> numbers){
  int first = numbers.front();
  numbers.pop();
  numbers.push(first);
  cout << endl << "Your refreshed list:" << endl;
  print_queue(numbers);
}

void print_queue(std::queue<int> numbers){
  while (!numbers.empty()){
    cout << numbers.front() << "\t";
    numbers.pop();
  }
}

bool isPalindrome(std::string s, int i){
  if (i > s.size()/2){
    return true;
  }
  return s[i] == s[s.size()-i-1] && isPalindrome(s,i+1);
}



