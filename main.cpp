#include <iostream>
#include "BinaryHeap.h"
#include <iostream>
using  namespace std;
int main() {
    BinaryHeap foo (1000);
   vector<int> array= {10,123,234,12,345,134,5,2,6,1,7,235,357};
    for (int i = 0; i <array.size() ; ++i) {
        foo.insert(array[i]);
    }

    cout<<foo.quickSelect(6)<<endl;
    return 0;
}