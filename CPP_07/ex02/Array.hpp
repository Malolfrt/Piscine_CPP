/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:29:37 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/02 16:58:30 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template < typename T >
class Array
{
	public:
		Array() {
			this->_array = NULL;
			this->_size = 0;
		};
		
		Array( unsigned int n ) {
			this->_array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				this->_array[i] = T();
			this->_size = n;
		};
		
		Array( const Array &src ) {
			this->_array = new T[src.size()];
			for (unsigned int i = 0; i < src.size(); i++)
			{
				this->_array[i] = src._array[i];
			}
			this->_size = src.size();
		};
		
		Array& operator=(const Array &src) {
			if (this != &src)
			{
				delete [] this->_array;
				this->_array = new T[src.size()];
				for (unsigned int i = 0; i < src.size(); i++)
				{
					this->_array[i] = src._array[i];
				}
				this->_size = src.size();
			}
			return *this;
		};

		T& operator[]( unsigned int index ) {
			if (index >= this->_size)
				throw isOutOfBound();
			return this->_array[index];
		};

		size_t	size() const {
			return this->_size;
		};

		~Array() {
			if (this->_array != NULL)
				delete [] this->_array;
		};

		class isOutOfBound: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "The index is out of bound of the Array";
				}
		};

	private:
		size_t _size;
		T	*_array;
		
};