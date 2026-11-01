
# Constructors in C++

## What Is a Constructor?

A constructor is a special member function of a class that is invoked when an object is created.

Its primary purpose is to initialize an object's state.

The term "constructor" is related to construction, meaning building or creating something.

## Constructor Characteristics

- A constructor has the same name as its class.
- It does not have a return type, not even `void`.
- It is invoked automatically during object initialization.
- It can accept parameters.
- A class can have multiple constructors with different parameter lists.
- Constructors cannot be declared `const` or `static`.

## 1. Default Constructor

A default constructor is a constructor that can be called without arguments.

Example:

```cpp
class Student
{
public:
    Student()
    {
        cout << "Student object created!" << endl;
    }
};

int main()
{
    Student student1;
}
```

### Important Notes

- If a class has no user-declared constructors, the compiler can implicitly declare a default constructor.
- If you declare a constructor that requires arguments, the compiler will not automatically declare a default constructor.
- You can explicitly provide your own default constructor.

Example:

```cpp
class Student
{
public:
    Student() = default;

    Student(string name)
    {
        // Initialize the student.
    }
};
```

## 2. Parameterized Constructor

A parameterized constructor accepts arguments to initialize an object with specific values.

Example:

```cpp
class Address
{
private:
    string _city;

public:
    Address(string city)
    {
        _city = city;
    }

    string getCity() const
    {
        return _city;
    }
};
```

Creating an object:

```cpp
Address address1("Manchester");
```

The constructor receives `"Manchester"` and assigns it to `_city`.

## 3. Constructor Overloading

Constructor overloading means defining multiple constructors in the same class with different parameter lists.

Example:

```cpp
class Student
{
private:
    string _name;

public:
    Student()
    {
        _name = "Unknown";
    }

    Student(string name)
    {
        _name = name;
    }
};
```

Both constructions are valid:

```cpp
Student student1;
Student student2("Ahmed");
```

### Overloading vs. Overriding

- **Overloading:** Multiple functions or constructors with the same name but different parameter lists.
- **Overriding:** A derived class provides its own implementation of an inherited virtual function.

Declaring a parameterized constructor does not mean overriding the default constructor.

## 4. Member Initializer Lists

A constructor can initialize data members using a member initializer list.

Example:

```cpp
Address(string city) : _city(city)
{
}
```

This initializes `_city` directly instead of assigning a value inside the constructor body.

Member initializer lists are particularly important for `const` members, reference members, and certain class-type members.

## 5. Constructors and Encapsulation

Constructors work with encapsulation by allowing objects to receive initial values while keeping their data members private.

For example, an `Address` object can receive its address information during creation without exposing its internal variables.

## Key Points

- Constructors initialize objects.
- Their names match the class name.
- They have no return type.
- They are invoked automatically during object initialization.
- A default constructor can be called without arguments.
- A parameterized constructor receives arguments.
- The compiler does not always generate a default constructor.
- Constructor overloading is different from method overriding.
- Member initializer lists provide direct member initialization.
