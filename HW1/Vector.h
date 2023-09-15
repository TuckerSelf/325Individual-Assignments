#indef VECTOR_H
#define VECTOR_H

class Vector{
 private:
  int *vec_prt;
  int vec_size, vec_capacity;
  
 public:
  Vector();

  Vector(const Vector &other);

  ~Vector();

  Vector& operator=(const Vector &other);

  int size();

  int capacity();

  void push_back(int element);

  void reserve(int n);

  int& operator[](unsigned int index);
  
}
