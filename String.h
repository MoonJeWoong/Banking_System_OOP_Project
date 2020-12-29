#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
using std::ostream;
using std::istream;

class String
{
private:
    char *str;
public:
    String();
    String(const char* str);
    String(const String& obj);
    String& operator=(const String& obj);
    String& operator+(const String& obj);
    String& operator+=(const String& obj);
    bool operator==(const String& obj);
    ~String();
    friend ostream& operator<<(ostream&, const String&);
    friend istream& operator>>(istream&, String&);
};

#endif