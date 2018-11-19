//
// Created by thor on 19-11-18.
//

#include "BinaryHeap.h"



BinaryHeap::BinaryHeap(int capacity) : array(capacity + 1 ), currentSize{0 }
{


}

BinaryHeap::BinaryHeap(const vector<int> &items) :array( items.size( ) + 10 ), currentSize{int( items.size())}
{
    for( int i = 0; i < items.size( ); ++i )
        array[ i + 1 ] = items[ i ];
    buildHeap( );


}

bool BinaryHeap::isEmpty() const {
    return currentSize==0;
}

const int &BinaryHeap::findMin() const {
    if( isEmpty( ) )
        return -1;
    return array[ 1 ];
}

void BinaryHeap::insert(const int &x) {
    if( currentSize == array.size( ) - 1 )
        array.resize( array.size( ) * 2 );

    // Percolate up
    int hole = ++currentSize;
    int copy = x;

    array[ 0 ] = std::move( copy );
    for( ; x < array[ hole / 2 ]; hole /= 2 )
        array[ hole ] = std::move( array[ hole / 2 ] );
    array[ hole ] = std::move( array[ 0 ] );

}

void BinaryHeap::insert(int &&x) {
    if( currentSize == array.size( ) - 1 )
        array.resize( array.size( ) * 2 );

    // Percolate up
    int hole = ++currentSize;
    for( ; hole > 1 && x < array[ hole / 2 ]; hole /= 2 )
        array[ hole ] = std::move( array[ hole / 2 ] );
    array[ hole ] = std::move( x );

}

void BinaryHeap::deleteMin()
{
    if( isEmpty( ) )
        return;

    array[ 1 ] = std::move( array[ currentSize-- ] );
    numOfObs++;
    percolateDown( 1 );

}

void BinaryHeap::deleteMin(int &minItem) {
    if( isEmpty( ) )
        return;

    minItem = std::move( array[ 1 ] );
    array[ 1 ] = std::move( array[ currentSize-- ] );
    percolateDown( 1 );

}

void BinaryHeap::makeEmpty() {
    currentSize = 0;

}

void BinaryHeap::buildHeap() {
    for( int i = currentSize / 2; i > 0; --i )
        percolateDown( i );

}

void BinaryHeap::percolateDown(int hole) {
    int child;
    int tmp = move( array[ hole ] );

    for( ; hole * 2 <= currentSize; hole = child )
    {
        child = hole * 2;
        if( child != currentSize && array[ child + 1 ] < array[ child ] )
            ++child;
        if( array[ child ] < tmp )
            array[ hole ] = std::move( array[ child ] );
        else
            break;
    }
    array[ hole ] = std::move( tmp );
}



int BinaryHeap::findkSmallest(int k) {
    vector<int> arrcopy = array;
    arrcopy.resize(currentSize);
    BinaryHeap copy(arrcopy);
    for (int i = 0; i < k-1 ; i++) {
        numOfObs++;
        copy.deleteMin();
    }
    return copy.array[1];
}


int BinaryHeap::quickSelect(int n) {
    return 0;
}

void BinaryHeap::insertionSort(vector<int> &a, int left, int right) {
    
    for (int i = 0; i < a.size() ; ++i) {
        int tmp * move(a[p]);
        int j;
        for (int j = i; j >0 && tmp< a[j-1]; --j) {
            a[j] = move(a[j-1]);
            a[j]=move(tmp);

        }

    }

}
