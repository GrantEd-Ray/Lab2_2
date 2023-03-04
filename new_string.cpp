#include <iostream>
#include "new_string.h"



namespace mt
{
    String::String(char c, size_t size)
    {
        std::cout << "Construct 1" << std::endl;
        m_size = size;
        m_str = new char[m_size+1];
        for (int i = 0; i < m_size; i++)
            m_str[i] = c;
        m_str[m_size] = 0;
    }

    String::String(char* str) : m_size(strlen(str)), m_str(new char[m_size+1])
    {
        std::cout << "Construct 2" << std::endl;
        std::copy(str, str+m_size, m_str);
        m_str[m_size] = 0;
    }

    // Конструктор копирования + делегирующий конструктор
    String::String(const String& other) : String(other.m_str)
    {
        std::cout << "Construct copy" << std::endl;
    }


    String::~String()
    {
        if(m_str != nullptr)
            delete[] m_str;
        std::cout << "Destruct" << std::endl;
    }

    void String::Print() const
    {
        for (int i = 0; i < m_size; i++)
            std::cout << m_str[i];
    }

}