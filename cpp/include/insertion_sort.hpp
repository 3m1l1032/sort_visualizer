/* 
 * Emilio Cazares Borbon, June 2026
 * 
 * Header file for insertion sort, using standard vectors.
 * 
 * Reference algorithm: 2.1 Intro to Algorithms
 */

#ifndef __INSERTION_SORT_HPP__
#define __INSERTION_SORT_HPP__

#include <vector>

template <typename T>
class InsertionSort
{
public:
    InsertionSort ();
    InsertionSort (std::vector<T> data);
    InsertionSort (const InsertionSort<T>& other);
    ~InsertionSort ();

    void sortForward (int steps = 1);
    
    std::vector<T> data;

    // run-time counter
    int operations;

private:
    // algorithm intermediate
    size_t i;

    void sortForIter ();
};

template <typename T>
InsertionSort<T>::InsertionSort ()
{
    i = 1;

    operations = 0;

    // initializing iter
    operations++;
}

template <typename T>
InsertionSort<T>::InsertionSort (std::vector<T> data)
{
    i = 1; 
    this->data = data;
    
    operations = 0;

    // initializing iter
    operations++;
}

template <typename T>
InsertionSort<T>::InsertionSort (const InsertionSort<T>& other)
{
    i = 1;
    this->data = other.data;
    
    operations = 0;

    // initializing iter
    operations++;
}

template <typename T>
InsertionSort<T>::~InsertionSort ()
{
    data.clear();
}

template <typename T>
void InsertionSort<T>::sortForward (int steps)
{
    for (size_t stepCount = 0; stepCount < steps; stepCount++)
    {
        if (i >= data.size ())
            return;
        // bound-checking iter
        operations++;

        sortForIter ();

        i++;
        // increasing iter && running through sequence
        operations++;
    }
}

template <typename T>
void InsertionSort<T>::sortForIter ()
{
    T key = data[i];
    // initalizing key, data access
    operations++;
    operations++;
    
    size_t j = i - 1;
    // initializing jter, subtraction
    operations++;
    operations++;

    while (j >= 0 && data[j] > key)
    {
        // bound-checking jter, data access, comparison, comparision
        operations++;
        operations++;
        operations++;
        operations++;

        data[j + 1] = data[j];
        // addition, data access, data update
        operations++;
        operations++;
        operations++;

        j--;
        // subtraction
        operations++;
    }

    data[j + 1] = key;
    // addition, data update
    operations++;
    operations++;
}

#endif /* __INSERTION_SORT_HPP__  */