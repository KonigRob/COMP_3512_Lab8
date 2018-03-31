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
	const size_t bigsize{ N };
	size_t count{0};
	T set[N];
};

//DESC: Constructor for FixedList (which is empty by instructions by instructor and his bear, Pooh))
//PRE: 
//POST: 
//Return:
template<class T, size_t N>
inline FixedList<T, N>::FixedList()
{
}

//DESC: Destructor, which isn't used.
//PRE: 
//POST: 
//Return:
template<class T, size_t N>
inline FixedList<T, N>::~FixedList()
{
}

//DESC: Get's the number of the pass index as a parameter
//PRE: All number's are positive
//POST: 
//Return: a positive class type, or a exception if out of range
template<class T, size_t N>
inline const T & FixedList<T, N>::get(unsigned int index) const
{
	if (index > count) {
		throw std::out_of_range ("out of range");
	}
	else {
		return set[index];
	}
}

//DESC: overloaded [] operator (look!  I'm commenting!)
//PRE: Takes in a positive int
//POST: 
//Return:
template<class T, size_t N>
inline T & FixedList<T, N>::operator[](unsigned int index)
{
	return set[index];
}

//DESC: Return the first index of a class type
//PRE: 
//POST: 
//Return: the index if found, otherwise -1
template<class T, size_t N>
inline int FixedList<T, N>::getFirstIndex(const T & t) const
{
	for (int i = 0; i < count; ++i) {
		if (t == set[i]) {
			return i;
		}
	}
	return -1;
}

//DESC: Return the number of elements in the list
//PRE: 
//POST: 
//Return: a number
template<class T, size_t N>
inline size_t FixedList<T, N>::size() const
{
	return count;
}

//DESC: Return the max size of the elements that can fit into a pickle jar
//PRE: 
//POST: 
//Return: a number so small, but at the same time so large that Chris himself
//        questions if he's reading these comments still, or is craving pickles.  
//        To the fridge chris, the fridgeeeee
template<class T, size_t N>
inline size_t FixedList<T, N>::capacity() const
{
	return bigsize;
}

//DESC: What happens when Chris doesn't want the pickle he took out?
//      Then clearly he'll try to add it back into the pickle jar.  But if the amount in there
//      is already the max size, then he won't be able to fit it in.
//PRE: 
//POST: 
//Return: A decsion.  Does Chris shove the pickle into the pickle jar with 1 hand or 2?  Will be be successful?
template<class T, size_t N>
inline bool FixedList<T, N>::add(const T & t)
{
	if (count >= bigsize) {
		return false;
	}
	else {
		set[count] = t;
		count++;
		return true;
	}
	
}

//DESC: Ahha!  I've caught you!  Those pickles were meant for our afternoon snack, but now you want them for lunch?
//      Well I don't think there will be enough Mister.  Okay, well, if you do grab one, then tell me which one it was. 
//		If not, then just don't tell me.
//PRE: 
//POST: 
//Return: Which pickle was it!  None you say?  But I see it, behind your back!
template<class T, size_t N>
inline T FixedList<T, N>::remove(const T & t)
{
	for (int i = 0; i < count; ++i) {
		if (t == set[i]) {
			int found = set[i];
			for (int j = i; j < count; ++j) {
				set[j] = set[j + 1];
			}
			return found;
		}
	}
	return NULL;
}
