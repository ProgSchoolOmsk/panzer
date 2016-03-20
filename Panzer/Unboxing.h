#ifndef _UNBOXING_H_
#define _UNBOXING_H_

template<class T> class Unboxing
{
	void* v;
public:
	Unboxing(void* value)
		: v(value)
	{
	}

	operator T() const
	{
		return *static_cast<T*>(v);
	}

};

#endif