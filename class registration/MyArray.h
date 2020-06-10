// project -E.Brown
#ifndef MYARRAY_H
#define MYARRAY_H

#include <iostream>
#include<cassert>

template <typename T>
class MyArray {
public:
    MyArray();
    MyArray(int c);
    T& operator[](int index);
    T& operator[] (int index) const;
    MyArray<T>(const MyArray &g);
    MyArray<T>& operator=(const MyArray<T> &g);
    ~MyArray<T>();

    void push_back(T e);
    void erase(int index);
    int getIndex(T value);
    int getSize() const;
    int getCapacity() const;

private:
    T *data;
    int capacity;
    int size;
    void grow();

};


    // template <class T> must precede every function definition.
    // note that MyArray<T> is the type not MyArray
    template <typename T>
    MyArray<T>::MyArray(): MyArray(10) { }
    //create dynamic array object-constructor
    template <typename T>
    MyArray<T>::MyArray(int c) {
        assert(c>0);
        size = 0;
        capacity = c;
        data = new T[capacity];
    }
    //overload
    template <typename T>
    T& MyArray<T>::operator[](int index) {
        assert(index >=0 && index < size);
        return data[index];
    }
    template <typename T>
    T& MyArray<T>::operator[](int index) const {
        assert(index >=0 && index < size);
        return data[index];
    }
    //copy constructor
    template <typename T>
    MyArray<T>::MyArray(const MyArray& g){
    capacity=g.capacity;
    size=g.size;
    data=new T[g.capacity];
    for(int i=0; i<size; i++) {
       data[i] = g.data[i];//g[i] or g.data[i]
    }
 }
    //assignment overload operator
    template <typename T>
    MyArray<T>& MyArray<T>::operator=(const MyArray& g){
      if(this != &g) {
        if(capacity != g.capacity) {
          delete [] data;
          capacity = g.capacity;
          data = new T[g.capacity]();//T or int?
      }
        size = g.size;
         for(int i=0; i<size; i++) {
         data[i] = g[i];//diddo
      }
   }
    return *this;
}
      //delete
    template <typename T>
    MyArray<T>::~MyArray()
      {
        delete [] data;
      }
    //grow function
    template <typename T>
    void MyArray<T>::grow(){
    capacity=capacity*2+1;
    T* temp = new T[capacity];//add in bracket *2+1 and ()outside bracket?
      for(int i=0; i<size; i++) {
        *(temp+i)=*(data+i);//remove *'s ?'
      }
    delete []  data;
    data = temp;
}


    //push_back for fixed capacity- need grow function to be able to add elements
    template <typename T>
    void MyArray<T>::push_back(T e) {
        // assert(size < capacity);
        if (size == capacity){
        grow();
    }
      data[size++] = e;
  }
    //getsize function
    template <typename T>
    int MyArray<T>::getSize() const {
        return size;
    }
    //get capacity function
    template <typename T>
    int MyArray<T>::getCapacity() const {
        return capacity;
    }
    //getindex
    template <typename T>
    int MyArray<T>::getIndex(T value) {
        for(int i=0; i<getSize(); i++) {
            if(data[i] == value) {//*data or just data
                return i;
            }
        }
        return -1;
    }

    // delete element
    template <typename T>
    void MyArray<T>::erase(int index) {
         for(int i=index;i<getSize()-1;i++)
         {
             data[i]=data[i+1];
         }
         size--;
     }
#endif
