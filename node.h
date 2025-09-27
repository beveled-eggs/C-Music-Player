#ifndef __NODE__
#define __NODE__

#include <string>

struct Node {
    std::string songname;
    struct Node* next;
};

#endif //__NODE__