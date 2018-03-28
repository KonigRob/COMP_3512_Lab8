#pragma once
#include <vector>
#include <stdexcept>

template<class T, size_t N>
class FixedList
{
public:
	FixedList();
	~FixedList();
	const T& get(unsigned int) const;
	T& operator[](unsigned int);
	int getFirstIndex(const T&) const;
	size_t size() const;
	size_t capacity() const;
	bool add(const T&);
	T remove(const T&);
	/*hi ya rob rob ^w^ */
private:
	const size_t capacity = N;
	size_t size = 0;
	T set[N];
};

template<class T, size_t N>
inline FixedList<T, N>::FixedList()
{
	
}

template<class T, size_t N>
inline FixedList<T, N>::~FixedList()
{

}

template<class T, size_t N>
inline const T & FixedList<T, N>::get(unsigned int index) const
{
	if (index > size) {
		throw std::out_of_range;
	}
	else {
		return set[index];
	}
}

template<class T, size_t N>
inline T & FixedList<T, N>::operator[](unsigned int index)
{
	return [index];
}

template<class T, size_t N>
inline int FixedList<T, N>::getFirstIndex(const T & t) const
{
	for (int i = 0; i < size; ++i) {
		if (t == T[i]) {
			return i;
		}
	}
	return -1;
}

template<class T, size_t N>
inline size_t FixedList<T, N>::size() const
{
	return size;
}

template<class T, size_t N>
inline size_t FixedList<T, N>::capacity() const
{
	return capacity;
}

template<class T, size_t N>
inline bool FixedList<T, N>::add(const T & t)
{
	if (size == capacity) {
		return false;
	}
	else {
		set[size] = t;
		size++;
		return true;
	}
	
}

template<class T, size_t N>
inline T FixedList<T, N>::remove(const T & t)
{
	for (int i = 0; i < N; ++i) {
		if (t == T[i]) {
			return 
		}
	}
}
