#include <iostream>
#include <fstream>
#include <string>
#include "function.h"
#include <limits>
#include <stdexcept>
using namespace std;

int main() {
  int num,file_size,user_num,number,index,x=0,old_num;
  string user_txt;
  char choice;
  bool z=true;

  ifstream fin;
  ofstream fout;

  cout << "What is the name of your file? ";
  cin >> user_txt;

  cout << "How many numbers do you have in your file? ";
  cin >> file_size;
  
  int *num_list = new int[file_size];
  
  fin.open(user_txt);

  while (fin.good()){
    fin >> number;
    num_list[x] = number;
    x++;
  }

 

  do{
    choice = print_menu();
    switch (choice){
      case 'a': case 'A':
        cout << endl;
        cout << "Check if this integer exists: ";
        cin >> user_num;
        cout << "At index: " << check_num(num_list, user_num, file_size) << endl;
        break;
      case 'b': case 'B':
        try{
        cout << endl;
        cout << "Modify the number at this index: ";
        cin >> index;
          if (index > file_size){
            throw 1;
          } 
          if (cin.fail()){
            throw 2;
          }
        old_num = num_list[index];
        cout << "The old number: " << num_list[index] << endl;
        cout << "The new number: ";
        user_num = modify_num(num_list,index);
        cout << endl << user_num << " has replaced " << num_list[index] << endl;
        break;
          }
        catch (int input_error){
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          cout << "Invalid input: Must enter an integer" << endl;
        }
        catch (int range){
          cout << "Error: Out of range" << endl;
        }
       //FIXme: invalid input
        break;
      case 'c': case 'C':
        cout << endl;
        cout << "Add a number to the end of the array: ";
        user_num = modify_num(num_list,file_size);
        add_num(num_list,user_num,file_size);
        break;
      case 'd': case 'D':
        cout << endl;
        cout << "Remove a number by its index: ";
        cin >> index;
        remove_num(num_list,index,file_size);
        break;
      case 'f': case 'F':
        cout << endl;
        for (int i=0; i < file_size;i++){
          cout << num_list[i] << " ";
        }
        break;
      case 'e': case 'E':
        cout << "Goodbye !";
        z=false;
        break;
    }
    cout << endl;
  }while (z);

  fin.close();
  return 0;
  
}