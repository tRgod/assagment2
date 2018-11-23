#include <iostream>
#include "BinaryHeap.h"
using  namespace std;
int main() {

    srand((unsigned)time(NULL));

    //BinaryHeap foo (1000);
    //for (int j = 1; j <1000 ; ++j) {
    int avgcount1=0;
    int avgcount5=0;
    int avgcount10=0;
    int smkcount1=0;
    int smkcount5=0;
    int smkcount10=0;

    cout << "Test with n=1000, run 10 times" << endl << endl;
for(int j=0; j<10; j++){
    cout << endl << "Run nr." << j << endl;
        vector<int> array1(1000);
        for (int i = 0; i < 1000; ++i) {
            array1[i] = std::rand() % 1000 + 1;
        }
        BinaryHeap foo1(array1);
        BinaryHeap bar1(array1);
        cout << "Smallest k:" << foo1.findkSmallest(500) << endl;;
        cout << "QuickSelect:" << bar1.quickSelect(500) << endl;
        cout << "SmallKCounter:" << foo1.getoperationCounterSmallestK() << endl;
        cout << "QuickCounter:" << bar1.getoperationCounterQuick()<<endl;
        avgcount1+=bar1.getoperationCounterQuick();
        smkcount1+=foo1.getoperationCounterSmallestK();
}
cout << endl << "Avrage find smallest Counter: " << smkcount1/10 << endl;
cout << "Avrage quick Counter: "<< avgcount1/10 << endl << endl;

cout << "-----------------------------------------------------------" << endl;

cout << "Test with n=5000, run 10 times" << endl << endl;
for(int j=0; j<10; j++){
    cout << endl << "Run nr." << j << endl;
        vector<int> array5(5000);
        for (int i = 0; i < 5000; ++i) {
            array5[i] = std::rand() % 1000 + 1;
        }
        BinaryHeap foo5(array5);
        BinaryHeap bar5(array5);
        cout << "Smallest k:" << foo5.findkSmallest(2500) << endl;;
        cout << "QuickSelect:" << bar5.quickSelect(2500) << endl;
        cout << "SmallKCounter:" << foo5.getoperationCounterSmallestK() << endl;
        cout << "QuickCounter:" << bar5.getoperationCounterQuick()<<endl;
        avgcount5+=bar5.getoperationCounterQuick();
        smkcount5+=foo5.getoperationCounterSmallestK();
}
cout << endl <<  "Avrage find smallest Counter: " << smkcount5/10 << endl;
cout << "Avrage quick Counter: " << avgcount5/10<< endl << endl;

cout << "-----------------------------------------------------------" << endl;

cout << "Test with n=10000, run 10 times" << endl << endl;
for(int j=0; j<10; j++){
    cout << endl << "Run nr." << j << endl;
        vector<int> array10(10000);
        for (int i = 0; i < 10000; ++i) {
            array10[i] = std::rand() % 1000 + 1;
        }
        BinaryHeap foo10(array10);
        BinaryHeap bar10(array10);
        cout << "Smallest k:" << foo10.findkSmallest(5000) << endl;;
        cout << "QuickSelect:" << bar10.quickSelect(5000) << endl;
        cout << "SmallKCounter:" << foo10.getoperationCounterSmallestK() << endl;
        cout << "QuickCounter:" << bar10.getoperationCounterQuick()<<endl;
        avgcount10+=bar10.getoperationCounterQuick();
        smkcount10+=foo10.getoperationCounterSmallestK();
}
cout << endl << "Avrage find smallest Counter: " << smkcount10/10 << endl;
cout << "Avrage quick Counter: " << avgcount10/10 << endl << endl;
    return 0;
}
