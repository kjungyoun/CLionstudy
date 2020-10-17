#include "tree.h"

int main() {
    tree t;
    init(&t);

    insert(&t, t.root, create_chicken(10, "뿌링킁"));
    insert(&t, t.root, create_chicken(3, "고니통닭"));
    insert(&t, t.root, create_chicken(20, "노랑통닭"));
    insert(&t, t.root, create_chicken(40, "파랑통닭"));
    insert(&t, t.root, create_chicken(60, "빨강통닭"));
    insert(&t, t.root, create_chicken(50, "검은통닭"));

    // 전위순회: 10 -> 3 -> 20 -> 40 -> 60 -> 50
    // 중위순회: 3 -> 10 -> 20 -> 40 -> 50 -> 60
    // 후위순회: 3 -> 50 -> 60 -> 40 -> 20 -> 10
    traversal(postorder, t.root);

    return 0;
}
