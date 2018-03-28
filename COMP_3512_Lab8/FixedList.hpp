#pragma once

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
inline const T & FixedList<T, N>::get(unsigned int) const
{
	// TODO: insert return statement here
}

template<class T, size_t N>
inline T & FixedList<T, N>::operator[](unsigned int)
{
	// TODO: insert return statement here
}

template<class T, size_t N>
inline int FixedList<T, N>::getFirstIndex(const T &) const
{
	return 0;
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
inline bool FixedList<T, N>::add(const T &)
{
	return false;
}

template<class T, size_t N>
inline T FixedList<T, N>::remove(const T &)
{
	return T();
}
