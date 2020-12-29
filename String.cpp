#include "String.h"

String::String() {str=NULL;}

String::String(const char* str)
{
    this->str = new char[strlen(str)+1];
    strcpy(this->str,str);
}

String::String(const String& obj)
{
    this->str = new char[strlen(obj.str)+1];
    strcpy(this->str, obj.str);
}

String& String::operator=(const String& obj)
{
    if(str!=NULL)
        delete []str;
    this->str = new char[strlen(obj.str)+1];
    strcpy(this->str, obj.str);

    return *this;
}

String& String::operator+(const String& obj)
{
    char *temp = new char[strlen(str)+strlen(obj.str)+1];
    strcpy(temp, str);
    strcat(temp, obj.str);
    
    String *newobj = new String(temp);
    delete []temp;

    return *newobj;
}

String& String::operator+=(const String& obj)
{
    char *temp = new char[strlen(str)+strlen(obj.str)+1];
    strcpy(temp, str);
    strcat(temp, obj.str);

    delete []str;
    str = new char(strlen(temp)+1);
    strcpy(str, temp);

    delete []temp;

    return *this;
}

bool String::operator==(const String& obj)
{
    if(strcmp(str,obj.str)==0)
        return true;
    else
        return false;
}

String::~String()
{
    delete []str;
}

ostream& operator<<(ostream& os, const String& obj)
{
    os<<obj.str;
    return os;
}

istream& operator>>(istream& is, String& obj)
{
    char tmp[100];
    is>>tmp;
    obj = String(tmp);
    return is;
}