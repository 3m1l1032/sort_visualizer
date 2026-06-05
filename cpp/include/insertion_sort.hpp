/* 
 * Emilio Cazares Borbon, 2026
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

private:
    // algorithm intermediate
    size_t i;

    void sortForIter ();
};

template <typename T>
InsertionSort<T>::InsertionSort ()
{
    i = 1;
}

template <typename T>
InsertionSort<T>::InsertionSort (std::vector<T> data)
{
    i = 1; 
    this->data = data;
}

template <typename T>
InsertionSort<T>::InsertionSort (const InsertionSort<T>& other)
{
    i = 1;
    this->data = other.data;
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

        sortForIter ();
        i++;
    }
}

template <typename T>
void InsertionSort<T>::sortForIter ()
{
    T key = data[i];

    size_t j = i - 1;
    while (j >= 0 && data[j] > key)
    {
        data[j + 1] = data[j];
        j--;
    }

    data[j + 1] = key;
}

#endif /* __INSERTION_SORT_HPP__  */