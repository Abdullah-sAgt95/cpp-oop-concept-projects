# Class Members

## What are Class Members?

Everything declared inside a class.

## Types of Class Members

- Data members → variables that store data
- Member functions → functions/methods that perform actions

## Access Specifiers

- `public` → accessible from outside the class
- `private` → accessible only from inside the class

## Example

```cpp
class Person
{
private:
    int x;

public:
    string firstName;
    string lastName;

    string fullName()
    {
        return firstName + " " + lastName;
    }
};

```
## In This Example

- `firstName`, `lastName` → data members
- `fullName()` → member function
- `x` → private data member

### Key Point 
Use `private` to restrict direct access to important data.
Use `public` to expose the parts that should be accessible from outside the class.



