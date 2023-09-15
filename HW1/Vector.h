/**
 * @file Vector.h
 * @author Tucker Self
 * @date 2023-09-15
 * @brief Declarations for custom vector class
 * 
 * The declarations of all the functions present in a custom vector class
 */

#indef VECTOR_H
#define VECTOR_H

class Vector{
 private:
  int *vec_prt;
  int vec_size, vec_capacity;
  
 public:

/**
 * The default constructor that initializes an empty vector
 *
 * @pre 
 * @post vec_ptr is NULL, vec_size=0, and vec_capacity=0
 * 
 */
  Vector();


/**
 * vector constructor that initializes a dynamic array of appropriate size and copies data from other array
 * to new array
 *
 * @param const Vector &other the array to be copied
 * @pre 
 * @post vec_ptr is initialized, and its array contains other.vec_ptr's data, vec_size=other.vec_size, and 
 * vec_capacity=other.vec_capacity
 * 
 */
  Vector(const Vector &other);


/**
 * Deconstructor to deallocate vec_ptr
 *
 * @pre 
 * @post vec_ptr has been deallocated, current_size=0, and capacity=0
 * 
 */
  ~Vector();


/**
 * Assignment operator for vector class
 *
 * @param const Vector &other 
 * @pre 
 * @return Vector& The changed vector
 * @post vec_ptr is initialized, and its array contains other.vec_ptr's data, vec_size=other.vec_size, and
 * vec_capacity=other.vec_capacity
 * 
 */
  Vector& operator=(const Vector &other);


/**
 * returns number of elements in a vector
 *
 * @pre 
 * @return int the number of elements
 * @post 
 * 
 */
  int size();


/**
 * Returns currently allocated storage capacity of a vector
 *
 * @pre 
 * @return int the allocated storage capacity
 * @post 
 * 
 */
  int capacity();


/**
 * stores element at the end of a vector
 *
 * @param int element the element to be stored
 * @pre 
 * @return void 
 * @post Item element has is stored at the end of the vector
 * 
 */
  void push_back(int element);


/**
 * requests capacity increase to vector to contain at least the number of given elements
 *
 * @param int n number of elements desired
 * @pre vector have less allocated data than requested
 * @return void 
 * @post Vector capacity is now n. Vector size (and contents) remains the same
 * 
 */
  void reserve(int n);


/**
 * returns a reference to the element at position index
 *
 * @param unsigned int index the position index at which to get the reference
 * @pre 
 * @return int& the reference at position index given
 * @post 
 * 
 */
  int& operator[](unsigned int index);
  
}
