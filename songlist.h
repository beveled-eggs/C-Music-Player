#ifndef __SONGLIST__
#define __SONGLIST__

#include <string>
#include "node.h"

class Songlist {
    public:
        Songlist() {};

    private:
        Node* head;
        Node* current_node;
};

#endif // __SONGLIST__