#include <iostream>
#include <map>
#include <string>
#include <queue>
#include "function.h"

using namespace std;

int main() {
  map<string,string> CapState;
  map<string,string>::iterator i;
  queue<int> number_list;
  
  string stateInput, userPalin, choice;
  int userEntry;

  //PALINDROME PROBLEM
  do{
  cout << "Enter a word. Is a palindrome or not? ... ";
  cin >> userPalin;
  if(isPalindrome(userPalin,0)){
    cout << "Yes! It is." << endl;
  }
  else{
    cout << "No. It is not." << endl;
  }
  cout << "Would you like to try again? (Y/N): ";
  cin >> choice;
  cout << endl;
  }while ((choice == "Y")||(choice =="y"));
  
  //MOVE TO REAR PROBLEM
  do{
  cout << "Enter a number into the queue: ";
  cin >> userEntry;
  number_list.push(userEntry);

  cout << "Would you like to enter another number? (Y/N): ";
  cin >> choice;
  } while ((choice == "Y")||(choice =="y"));

  cout << endl << "Here is your list of numbers:" << endl;
  print_queue(number_list);

  cout << endl << "\nLet's move the first number to the end." << endl << endl;
  move_to_rear(number_list);
  
  //MAP USAGE
  CapState["Nebraska"] = "Lincoln";
  CapState["New York"] = "Albany";
  CapState["Ohio"] = "Columbus";
  CapState["California"] = "Sacramento";
  CapState["Massachusetts"] = "Boston";
  CapState["Texas"] = "Austin";

  for (i = CapState.begin();i != CapState.end();++i){
    cout << i->second << '\t' << i->first << '\n';
  }
  cout << endl << "California has been corrected." << endl;
  CapState["California"] = "Los Angeles";

  do{
    cout << "Enter a state name: ";
    cin >> stateInput;
    cout << endl;
    
    if (CapState.find(stateInput) != CapState.end()){
      cout << "The capital of " << stateInput << " is " << CapState[stateInput] << "." << endl;
      cout << "Would you like to enter another state name? (Y/N): ";
    }
    else{
      cout << "Invalid State."<< endl;
      cout << "Would you like to enter another state name? (Y/N): ";
    }
    cin >> choice;
    cout << endl;
  } while ((choice == "Y")||(choice =="y"));
  
  

  
  
}