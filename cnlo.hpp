

// Value ok
union Value {
    bool mBool;
    int mInt;
    double mDouble;
    std::string * mString;
};  

class Cnlo
{
public:
    enum pType
    {
        cnull = 0,
        cbool,
        cint,
        cdouble,
        cstring,
        carray,
        object
    };

    Cnlo();
    Cnlo(pType type);
    Cnlo(bool value);
    Cnlo(int value);
    Cnlo(double value);
    Cnlo(const char * value);
    Cnlo(const std::string & value);

private:
    std::list<Cnlo> * mArray;
    std::map<std::string, Cnlo> * mObject;  // ok
    mValue mValue;
    pType mType;  // ok
    // xpValue m_value;
}


















