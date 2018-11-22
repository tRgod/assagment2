//
// Created by thor on 19-11-18.
//

#ifndef ASSIGNMEN2_BINARYHEAP_H
#define ASSIGNMEN2_BINARYHEAP_H

#include <vector>
#include <iostream>

using namespace std;

class BinaryHeap
        {
            public:
            explicit BinaryHeap( int capacity = 100 );

            explicit BinaryHeap( const vector<int > & items );
            bool isEmpty( ) const;
            const int & findMin( ) const;
            void insert( const int & x );
            void insert( int && x );
            void deleteMin( );
            void deleteMin( int & minItem );
            void makeEmpty( );
            int findkSmallest(int k);
            int quickSelect(int k);
            int getoperationCounterSmallestK();
            int getoperationCounterQuick();
            private:
            int operationCounterSmallestK =0;
            int operationCounterQuick=0;
            void quickSelect(vector<int> &a, int left, int right, int k);
            int numOfObs=0;
            int currentSize;
            vector<int> array;
            const int & median3(vector<int> &a, int left, int right);
            void insertionSort(vector<int> &a, int left, int right);
// Number of elements in heap
// The heap array
                void buildHeap( );
                void percolateDown( int hole );
        };

#endif //ASSIGNMEN2_BINARYHEAP_H
