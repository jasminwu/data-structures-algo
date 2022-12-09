#include <iostream>

// make own data type called node, public by default
struct node {
  // this linked list will store an int
  int data;
  // and a pointer to next node
  struct node* next;
};

void create_node(node* block, node* next_block, int value) {
  block->data = value;       // initialise node
  block->next = next_block;  // link the list
}

void print_list(node* block) {
  // for testing purposes
  std::cout << block->data << std::endl;
}

int main() {
  // create 3 pointers to 3 nodes
  node* head = new node();    // 1st node of linked list
  node* second = new node();  // 2nd node of linked list
  node* third = new node();   // 3rd node of linked list

  // add vals to the nodes
  create_node(head, second, 1);
  create_node(second, third, 2);
  create_node(third, NULL, 3);

  // print element in node 2
  print_list(second);
  return 0;
}