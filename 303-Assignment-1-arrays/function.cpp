#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int check_num(int* array, int num_input, int file_size){
  for (int i=0; i < file_size; i++){
    if (num_input != array[i]){
      continue;
    }
    else{
      return i;
    }
    }
  return -1;
}

int modify_num(int*& array, int index){
  //search array, find index of old value, return new and old value
  int new_value;
  cin >> new_value;
  array[index] = new_value;
  return new_value;
}

void add_num(int*& array, int num_input, int& file_size){
  //add num to end of the array
  file_size++;
  array[file_size] = num_input;
}

void remove_num(int*& array, int index, int& file_size){
  //takes index, removes number at that index
  int delete_this = array[index];
  for (int i=0;i < file_size; i++){
    if(array[i]==delete_this){
      for(int j=i; j<(file_size-1); j++){
        array[j]=array[j+1];
      }
      break;
    }
  }
  file_size--;
}

char print_menu(){
  char choice;
  cout << "Choose an option:" << endl;
  cout << "(a) Check if your number is in the file" << endl;
  cout << "(b) Modify a number by index" << endl;
  cout << "(c) Add an integer" << endl;
  cout << "(d) Remove an integer by index" << endl;
  cout << "(e) Quit" << endl;
  cout << "(f) Show array" << endl;
  cin >> choice;
  return choice;
}