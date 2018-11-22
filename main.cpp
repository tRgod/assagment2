#include <iostream>
#include "BinaryHeap.h"
#include <iostream>
using  namespace std;
int main() {

    srand((unsigned)time(NULL));
    //BinaryHeap foo (1000);
    for (int j = 1; j <1000 ; ++j) {


        vector<int> array(1000*j );
        for (int i = 0; i < 1000*j; ++i) {
            array[i] = std::rand() % 1000*j + 1;

        }
       // BinaryHeap foo(array);
        BinaryHeap bar(array);
        //foo.findkSmallest(500*j);
        bar.quickSelect(500*j);
        //cout << foo.getoperationCounterSmallestK() << endl;
        //cout<<foo.quickSelect(5)<<endl;
        cout<< bar.getoperationCounterQuick()<<endl;
    }
    return 0;
}