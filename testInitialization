#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Node {
  int data;
  Node *next;
};

int main() {
  int i;
  cout << "Primitive types have no default constructor on stacks, int i: ";
  cout << i << endl;
 
  Node n;
  cout << "After declaring a struct object, node n: error: no matching constructor for initialization of 'Node'" << endl;
  cout << "Well, struct constructor is optional. We can construct one by using malloc/new, sizeof, struct pointer and type cast." << endl;
  
  string s;
  cout << "After calling default constructor, string s: ";
  if (s == "") {
    cout << "<empty string>" << endl;
  }

  vector<int> v;
  cout << "After calling default constructor, size of vector v: ";
  cout << v.size() << endl;

  return 0;
}	 
