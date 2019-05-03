/*former Shape.h by MrGodin from his snow day program: https://forum.planetchili.net/viewtopic.php?f=3&t=3881 */
#pragma once

#include <vector>

template <typename T>
class _Vec2
{
public:
	inline			_Vec2() {}
	inline			_Vec2(T x, T y)
		:
		x(x),
		y(y)
	{}
	inline			_Vec2(const _Vec2& vect)
		:
		_Vec2(vect.x, vect.y)
	{}
	
	inline _Vec2&	operator=(const _Vec2 &rhs)
	{
		this->x = rhs.x;
		this->y = rhs.y;
		return *this;
	}
	inline _Vec2&	operator+=(const _Vec2 &rhs)
	{
		this->x += rhs.x;
		this->y += rhs.y;
		return *this;
	}

	inline T		operator*(const _Vec2 &rhs) const
	{
		return this->x * rhs.x + this->y * rhs.y;
	}
	inline _Vec2	operator+(const _Vec2 &rhs) const
	{
		return _Vec2(*this) += rhs;
	}
	
	
	inline _Vec2&	operator*=(const T &rhs)
	{
		this->x *= rhs;
		this->y *= rhs;
		return *this;
	}
	inline _Vec2	operator*(const T &rhs) const
	{
		return _Vec2(*this) *= rhs;
	}

public:
	T x;
	T y;
};

typedef _Vec2< float > Vec2f;


