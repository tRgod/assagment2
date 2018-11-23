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

    cout << "test with n=1000, run 10 times" << endl << endl;
for(int j=0; j<10; j++){
    cout << endl << "run nr." << j << endl;
        vector<int> array1(1000);
        for (int i = 0; i < 1000; ++i) {
            array1[i] = std::rand() % 1000 + 1;
        }
        BinaryHeap foo1(array1);
        BinaryHeap bar1(array1);
        cout << "smallest k:" << foo1.findkSmallest(500) << endl;;
        cout << "quickSelect:" << bar1.quickSelect(500) << endl;
        cout << "SmallKCounter:" << foo1.getoperationCounterSmallestK() << endl;
        cout <<"quick:" << foo1.quickSelect(500)<<endl;
        cout << "quickCounter:" << bar1.getoperationCounterQuick()<<endl;
        avgcount1+=bar1.getoperationCounterQuick();
        smkcount1+=bar1.getoperationCounterSmallestK();
}
cout << endl << "avrage quick Counter: "<< avgcount1/10 << endl << endl;
cout << "avrage find smallest Counter: " << smkcount1/10 << endl << endl;

cout << "-----------------------------------------------------------" << endl;

cout << "test with n=5000, run 10 times" << endl << endl;
for(int j=0; j<10; j++){
    cout << endl << "run nr." << j << endl;
        vector<int> array5(5000);
        for (int i = 0; i < 5000; ++i) {
            array5[i] = std::rand() % 1000 + 1;
        }
        BinaryHeap foo5(array5);
        BinaryHeap bar5(array5);
        cout << "smallest k:" << foo5.findkSmallest(2500) << endl;;
        cout << "quickSelect:" << bar5.quickSelect(2500) << endl;
        cout << "SmallKCounter:" << foo5.getoperationCounterSmallestK() << endl;
        cout <<"quick:" << foo5.quickSelect(5)<<endl;
        cout << "quickCounter:" << bar5.getoperationCounterQuick()<<endl;
        avgcount5+=bar5.getoperationCounterQuick();
        smkcount5+=bar5.getoperationCounterSmallestK();
}
cout << endl << "avrage quick Counter: " << avgcount5/10<< endl << endl;
cout << "avrage find smallest Counter: " << smkcount5/10 << endl << endl;

cout << "-----------------------------------------------------------" << endl;

cout << "test with n=10000, run 10 times" << endl << endl;
for(int j=0; j<10; j++){
    cout << endl << "run nr." << j << endl;
        vector<int> array10(10000);
        for (int i = 0; i < 10000; ++i) {
            array10[i] = std::rand() % 1000 + 1;
        }
        BinaryHeap foo10(array10);
        BinaryHeap bar10(array10);
        cout << "smallest k:" << foo10.findkSmallest(5000) << endl;;
        cout << "quickSelect:" << bar10.quickSelect(5000) << endl;
        cout << "SmallKCounter:" << foo10.getoperationCounterSmallestK() << endl;
        cout <<"quick:" << foo10.quickSelect(5000)<<endl;
        cout << "quickCounter:" << bar10.getoperationCounterQuick()<<endl;
        avgcount10+=bar10.getoperationCounterQuick();
        smkcount10+=bar10.getoperationCounterSmallestK();
}
cout << endl << "avrage quick Counter: " << avgcount10/10 << endl << endl;
cout << "avrage find smallest Counter: " << smkcount10/10 << endl << endl;
    return 0;
}
