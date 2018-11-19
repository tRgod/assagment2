#include <iostream>
#include "BinaryHeap.h"
#include <iostream>
using  namespace std;
int main() {
    BinaryHeap foo (1000);
    for (int i = 1; i <30 ; ++i) {
        foo.insert(i);
    }

    cout<<foo.findkSmallest(20)<<endl;
    return 0;
}