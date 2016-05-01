<<<<<<< HEAD
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

=======
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

>>>>>>> 8741c33791b00aaaeb1340fcbb4448af72ca9d88
#endif