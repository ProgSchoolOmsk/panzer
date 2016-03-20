#ifndef _BOXING_H_
#define _BOXING_H_

template<class T> class Boxing
{
	T *v;
public:
	Boxing(T const& t)
	{
		v = new T(t);
	}
	operator void* () const
	{
		return v;
	}
};

#endif