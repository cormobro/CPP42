#include "Serializer.hpp"

Serializer::Serializer()
{
	return ;
}

Serializer::Serializer(const Serializer &copy)
{
	(void)copy;
	return ;
}

Serializer & Serializer::operator = (const Serializer &copy)
{
	(void)copy;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*Serializer::deserialize(uintptr_t ptr)
{
	return (reinterpret_cast<Data *>(ptr));
}
