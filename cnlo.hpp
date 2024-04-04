

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

    // cnlo["kay"] = "Hello";
    Cnlo();
    Cnlo(pType type);
    Cnlo(bool value);
    Cnlo(int value);
    Cnlo(double value);
    Cnlo(const char * value);
    Cnlo(const std::string & value);

    // cnlo["kay"] = "Hello";
    // Cnlo & Cnlo::operator = (bool value);
    // Cnlo & Cnlo::operator = (int value);
    // Cnlo & Cnlo::operator = (double value);
    // Cnlo & Cnlo::operator = (const char * value);
    // Cnlo & Cnlo::operator = (const std::string & value);

    // int x = cnlo["kay"];
    operator bool();
    operator int();
    operator double();
    operator std::string();

    // cnlo["obj-1"]["kay"]
    Cnlo & operator [] (int index);
    Cnlo & operator [] (const char * key);
    Cnlo & operator [] (const std::string & key);



    

private:
    pType mType;    // ok
    mValue mValue;    // ok
    std::list<Cnlo> * mArray;    // ok
    std::map<std::string, Cnlo> * mObject;  // ok
}


















