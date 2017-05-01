//
//  HashTable.h
//  ArrayProject
//
//  Created by Smith, Arick on 5/1/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#ifndef HashTable_h
#define HashTable_h

#include <cmath>
#include <assert.h>
#include "HashNode.hpp"

using namespace std;
template<class Type>
class HashTable
{
private:
    long capacity;
    long size;
    double efficiencyPercentage;
    HashNode<Type> ** hashTableStorage;
    bool isPrime(long sampleNumber);
    void resize();
    long nextPrime(long current);
    long findPosition(HashNode<Type> * data);
    long handleCollision(HashNode<Type> * data, long currentPosition);
    
    
    
public:
    HashTable();
    ~HashTable();
    void add(Type data);
    bool remove(Type data);
    void displayContents();
    
};


template<class Type>
HashTable<Type> :: HashTable()
{
    this->capacity = 101;
    this->efficiencyPercentage = .667
    this->size = 0;
    this->hashTableStorage = HashNode<Type> * [capacity];
}

template<class Type>
HashTable<Type> :: ~HashTable()
{
    delete [] hashTableStorage;
}

#endif /* HashTable_h */
