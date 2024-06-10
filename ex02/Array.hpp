#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
private:
	T* data;
	unsigned int size_;
public:
	Array() : data(NULL), size_(0) {}
	Array(unsigned int size) : data(new T[size]), size_(size) {}
	Array(const Array& other) : data(new T[other.size_]), size_(other.size_)
	{
		for (unsigned int i = 0; i < size_; i++)
		{
			data[i] = other.data[i];
		}
	}
	Array& operator=(const Array& other)
	{
		if (this != &other)
		{
			delete[] data;
			data = new T[other.size_];
			size_ = other.size_;
			for (unsigned int i = 0; i < size_; i++)
			{
				data[i] = other.data[i];
			}
		}
		return *this;
	}
	T& operator[](unsigned int index)
	{
		if (index >= size_)
		{
			throw std::exception();
		}
		return data[index];
	}
	const T& operator[](unsigned int index) const
	{
		if (index >= size_)
		{
			throw std::exception();
		}
		return data[index];
	}
	unsigned int size() const
	{
		return size_;
	}
	~Array()
	{
		delete[] data;
	}
};

#endif
