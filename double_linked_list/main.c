#include "double_linked_list.h"

int main() {
    dlist list;
    init(&list);

    insert(&list, 0, create_chicken("뿌링클", 10000));  // 0
    insert(&list, 1, create_chicken("뿌링클", 15000));  // 1
    insert_last(&list, create_chicken("노랑통닭", 1000000000)); // 4
    insert(&list, 2, create_chicken("뿌링클", 17000)); // 2
    insert(&list, 3, create_chicken("뿌링클", 100000)); // 3
    delete(&list,2);
    delete_first(&list);
    delete_last(&list);
    print_list(&list);

    return 0;
}
