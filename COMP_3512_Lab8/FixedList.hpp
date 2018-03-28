#pragma once
#include <vector>

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
	try {
		return T[index];
	}
	catch (E e) {
		return e
	}

}

template<class T, size_t N>
inline T & FixedList<T, N>::operator[](unsigned int index)
{
	// TODO: insert return statement here
}

template<class T, size_t N>
inline int FixedList<T, N>::getFirstIndex(const T & t) const
{
	for (int i = 0; i < N; ++i) {
		if (t == T[i]) {
			return i;
		}
	}
	return -1;
}

template<class T, size_t N>
inline size_t FixedList<T, N>::size() const
{
	return size_t();
}

template<class T, size_t N>
inline size_t FixedList<T, N>::capacity() const
{
	return size_t();
}

template<class T, size_t N>
inline bool FixedList<T, N>::add(const T & t)
{
	return false;
}

template<class T, size_t N>
inline T FixedList<T, N>::remove(const T & t)
{
	for (int i = 0; i < N; ++i) {
		if (t == T[i]) {
			
		}
	}
}
