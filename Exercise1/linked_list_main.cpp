#include <iostream>

#include "linked_list.h"

using namespace std;

int main() {

    struct node * linked_list_one_elt = build_new_linked_list(1);
    print_linked_list(linked_list_one_elt,1);
    void delete_linked_list(struct node*& start);

    return 0;
}