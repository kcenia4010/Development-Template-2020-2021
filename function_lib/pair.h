#ifndef INCLUDE_ADD_H_
#define INCLUDE_ADD_H_

template <class T1, class T2>
class TPair
{
	T1 first;
	T2 second;
public:
	TPair(T1 f, T1 s);
	T1 getFirst();
	T2 getSecond();
	void setFirst(T1 f);
	void setSecond(T2 s);

	void swap(TPair& t);
	bool operator > (const TPair& t);
	bool operator < (const TPair& t);
	TPair<T1, T2>& operator = (const TPair& t);
	bool operator == (const TPair& t);
	bool operator != (const TPair& t);



};

template<class T1, class T2>
TPair<T1, T2>::TPair(T1 f, T1 s)
{
	first = f;
	second = s;
}

template <class T1, class T2>
T1 TPair <T1, T2>::getFirst()
{
	return first;
}

template<class T1, class T2>
T2 TPair<T1, T2>::getSecond()
{
	return second;
}

template<class T1, class T2>
inline void TPair<T1, T2>::setFirst(T1 f)
{
	first = f;
}

template<class T1, class T2>
inline void TPair<T1, T2>::setSecond(T2 s)
{
	second = s;
}

template<class T1, class T2>
inline void TPair<T1, T2>::swap(TPair& t)
{
	this->first = t.first;
	this->second = t.second;
}

template<class T1, class T2>
inline bool TPair<T1, T2>::operator>(const TPair& t)
{
	if (first > t.first)
		return 1;
	else if (second > t.second)
		return 1;
	else return 0;
}

template<class T1, class T2>
inline bool TPair<T1, T2>::operator<(const TPair& t)
{
	if (first < t.first)
		return 1;
	else if (second < t.second)
		return 1;
	else return 0;
}

template<class T1, class T2>
inline TPair<T1,T2>& TPair<T1, T2>::operator=(const TPair& t)
{
	this->first = t.first;
	this->second = t.second;
	return *this;
}

template<class T1, class T2>
inline bool TPair<T1, T2>::operator==(const TPair& t)
{
	if ((first == t.first) && (second == t.second))
		return 1;
	else return 0;
}

template<class T1, class T2>
inline bool TPair<T1, T2>::operator!=(const TPair& t)
{
	if ((first == t.first) && (second == t.second))
		return 0;
	else return 1;
}





#endif  // INCLUDE_ADD_H_