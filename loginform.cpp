#include <iostream>
#include <string>

using namespace std;

int main() {
  string username, password;
  
  cout << "Enter username: ";
  cin >> username;
  
  cout << "Enter password: ";
  cin >> password;
  
  if (username == "admin" && password == "password123") {
    cout << "Login successful!\n";
  } else {
    cout << "Login failed. Invalid username or password.\n";
  }
  
  return 0;
}

