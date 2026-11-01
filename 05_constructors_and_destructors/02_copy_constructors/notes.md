
# Copy Constructors in C++

## What Is a Copy Constructor?

A copy constructor is a special constructor used to initialize a new object from an existing object of the same class.

Its main purpose is to create a new object by copying the state of another object.

## Copy Constructor Syntax

```cpp
ClassName(const ClassName& oldObject)
{
    // Copy data from oldObject.
}
```

### Explanation

- `ClassName` - The name of the class.
- `const` - Prevents modification of the source object through this reference.
- `&` - Passes the source object by reference, avoiding an unnecessary copy.
- `oldObject` - The existing object whose data will be copied.

## Example: Address Class

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

    Address(const Address& oldObject)
    {
        _city = oldObject._city;
    }

    string getCity() const
    {
        return _city;
    }
};
```

### Creating and Copying Objects

```cpp
Address address1("Manchester");

Address address2(address1);
Address address3 = address1;
```

Both `address2` and `address3` are initialized using the copy constructor.

## Copy Initialization vs. Copy Assignment

These operations may look similar, but they are different.

### 1. Copy Initialization

Creates a new object from an existing object.

```cpp
Address address2 = address1;
```

The copy constructor is used.

### 2. Copy Assignment

Assigns the state of an existing object to another existing object.

```cpp
Address address2("London");

address2 = address1;
```

The copy assignment operator is used.

**Important:** Copy initialization and copy assignment are not the same operation.

## Compiler-Generated Copy Constructor

If a programmer does not explicitly declare a copy constructor, the compiler can implicitly declare one.

For a simple class containing `int`, `float`, and `std::string` members, the compiler-generated copy constructor usually provides the expected behavior.

It copies each member using the appropriate copying operation for that member.

## Member-Wise Copying

Member-wise copying means that each data member is copied from the source object into the new object.

For example:

```cpp
Address(const Address& oldObject)
{
    _city = oldObject._city;
}
```

The new object receives its own `_city` member containing the copied string.

**Note:** Member-wise copying does not always mean a deep copy. For example, copying a raw pointer normally copies the pointer value rather than the dynamically allocated object it points to.

## Why Use Copy Constructors?

- Initialize new objects using existing objects.
- Define custom copying behavior when necessary.
- Control how an object's resources are copied.
- Support object copying in C++.

## Copy Constructor vs. Parameterized Constructor

| Parameterized Constructor | Copy Constructor |
|---|---|
| Initializes an object using supplied values. | Initializes an object from another object of the same class. |
| Can accept different types of parameters. | Commonly accepts `const ClassName&`. |
| Example: `Address("Manchester")` | Example: `Address(address1)` |

## Important Notes

- A copy constructor initializes a new object.
- It is commonly declared using `const ClassName&`.
- It can be defined explicitly by the programmer.
- The compiler can generate one automatically when appropriate.
- Copy constructors and copy assignment operators perform different operations.
- Simple classes containing standard library types often do not need a manually written copy constructor.

## Key Points

- A copy constructor creates a new object from an existing object.
- `const` protects the source object from modification through the reference.
- `&` avoids passing the source object by value.
- Copy initialization uses the copy constructor.
- Assignment between existing objects uses the copy assignment operator.
- Member-wise copying is the default copying behavior for many simple classes.
