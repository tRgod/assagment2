#include <iostream>
#include "BinaryHeap.h"
#include <iostream>
using  namespace std;
int main() {

    srand((unsigned)time(NULL));

    //BinaryHeap foo (1000);
    //for (int j = 1; j <1000 ; ++j) {
    int avgcount=0;

for(int j=0; j<10000; j++){
        vector<int> array(1000);
        for (int i = 0; i < 1000; ++i) {
            array[i] = std::rand() % 1000 + 1;
        }
        BinaryHeap foo(array);
        BinaryHeap bar(array);
        //cout << "smallest k:" << foo.findkSmallest(500) << endl;;
        cout << "quickSelect:" << bar.quickSelect(500) << endl;
        //cout << "SmallKCounter:" << foo.getoperationCounterSmallestK() << endl;
        //cout <<"quick:" << foo.quickSelect(5)<<endl;
        cout << "quickCounter:" << bar.getoperationCounterQuick()<<endl;
        avgcount+=bar.getoperationCounterQuick();
}

cout << avgcount/10000 << endl;
    return 0;
}
