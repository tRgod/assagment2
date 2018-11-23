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
    operationCounterSmallestK++;
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
    for (int i = currentSize / 2; i > 0; --i)
    {
        percolateDown(i);
      //  operationCounterSmallestK++;

    }
}

void BinaryHeap::percolateDown(int hole) {
    int child;
    int tmp = move( array[ hole ] );
    //operationCounterSmallestK++;

    for( ; hole * 2 <= currentSize; hole = child )
    {
        child = hole * 2;
        if( child != currentSize && array[ child + 1 ] < array[ child ] ) {
            ++child;
           operationCounterSmallestK+=2;
        }
        if( array[ child ] < tmp ) {
            array[hole] = std::move(array[child]);
            operationCounterSmallestK++;

        }
        else {

            break;
        }
    }
    array[ hole ] = std::move( tmp );

}



int BinaryHeap::findkSmallest(int k) {
    //vector<int> arrcopy = array;
  //  arrcopy.resize(currentSize);
//    BinaryHeap copy(arrcopy);
    for (int i = 0; i < k ; i++) {
        numOfObs++;
        //operationCounterSmallestK ++;
        deleteMin();
    }
    return array[1];
}


void BinaryHeap::quickSelect(vector<int> &a, int left, int right,int k) {

    if( left + 10 <= right ) {
        const int &pivot = median3(a, left, right);
// Begin partitioning
        int i = left, j = right - 1;
        for (;;) {
            while (a[++i] < pivot) {}
            while (pivot < a[--j]) {}
            if (i < j) {
                std::swap(a[i], a[j]);
                operationCounterQuick+=3;


            } else
                break;
        }
        std::swap(a[i], a[right - 1]);

// Restore pivot
// Recurse; only this part changes
        if (k <= i) {
            quickSelect(a, left, i - 1, k);
        } else if (k > i + 1) {
            quickSelect(a, i + 1, right, k);
        }

    }
    else
        insertionSort(a,left,right);

// Do an insertion sort on the subarray
}

void BinaryHeap::insertionSort(vector<int> &a, int left, int right) {
        int tmp;
    for (int p = left; p < right ; ++p) {
        tmp = move(a[p]);
        int j;
        for (j = p; j > 0 && tmp < a[j - 1]; --j)
            a[j] = move(a[j - 1]);
        a[j] = move(tmp);
        }

    }


int BinaryHeap::quickSelect(int k) {
    quickSelect(array,1,currentSize ,k);
    return array[k];
}

const int &BinaryHeap::median3(vector<int> &a, int left, int right) {
    int center = ( left + right ) / 2;
    if( a[ center ] < a[ left ] )
        std::swap( a[ left ], a[ center ] );
    if( a[ right ] < a[ left ] )
        std::swap( a[ left ], a[ right ] );
    if( a[ right ] < a[ center ] )
        std::swap( a[ center ], a[ right ] );
// Place pivot at position right - 1
    std::swap( a[ center ], a[ right - 1 ] );
    return a[ right - 1 ];
}

int BinaryHeap::getoperationCounterQuick() {
    return operationCounterQuick;
}

int BinaryHeap::getoperationCounterSmallestK(){
    return operationCounterSmallestK;
}
