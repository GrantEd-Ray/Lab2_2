#pragma once

namespace mt
{
    class String
    {
    private:
        size_t m_size;
        char* m_str = nullptr;
    public:
        String() = default;

        String(char c, size_t size);


        String(int c, size_t size) = delete;

        String(char* str);

        // Конструктор копирования + делегирующий конструктор
        String(const String& other);

        String& operator=(const String& other)
        {
            // Copy-and-swap
            String temp = other;
            std::swap(m_size, temp.m_size);
            std::swap(m_str, temp.m_str);
            return *this;
        };

        ~String();

        void Print() const;


    };
}
