/**
 * @file Vector.cpp
 * @author Tucker Self
 * @date 2023-09-15
 * @brief Vector Definitions
 * 
 * the definitions and code of the functions of a custom vector class
 */

#include <iostream>
#include <fstream>
#include "Vector.h"

using namespace std;

Vector::Vector(){
  vec_ptr = NULL;
  vec_size = 0;
  vec_capacity = 0;
}

Vector::Vector(int capacity){
  vec_ptr = new int [capacity];
  vec_size = 0;
  vec_capacity = capacity;
}

Vector::Vector(const Vector &other){
  vec_ptr = other.vec_ptr;
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;
}

Vector::~Vector(){
  delete[] vec_ptr;
  vec_size = 0;
  vec_capacity = 0;
}

Vector& Vector::operator=(const Vector &other){
  vec_ptr = other.vec_ptr;
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;
  return *this;
}

int Vector::size(){
  int i = 0;
  while(vec_ptr[i] != '\0'){
    i++;
  }
  if(i>vec_size)
    vec_size = i;
  return vec_size;
}

int Vector::capacity(){
  return vec_capacity;
}

void Vector::push_back(int element){
  if(vec_ptr[vec_size-1] == '\0')
    vec_ptr[vec_size-1] = element;
  else{
    reserve(vec_size);
    vec_ptr = new int (vec_capacity);
    vec_ptr[vec_size-1] = element;
  }
}

void Vector::reserve(int n){
  if(n > vec_capacity){
    vec_capacity = 2*vec_capacity;
    vec_ptr = new int [vec_capacity];
  }
}

int& Vector::operator[](unsigned int index){
  return vec_ptr[index];
}
