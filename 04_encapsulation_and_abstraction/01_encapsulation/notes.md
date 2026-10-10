
# Encapsulation

## OOP Principle #1: Encapsulation

Encapsulation is one of the four fundamental principles of Object-Oriented Programming (OOP).

The four principles are:

1. **Encapsulation** - Bundling data and methods together and controlling access to them.
2. **Abstraction** - Hiding implementation details and exposing essential functionality.
3. **Inheritance** - Creating new classes based on existing classes.
4. **Polymorphism** - Allowing the same interface to represent different behaviors.

## What Is Encapsulation?

Encapsulation means combining related data (variables) and behavior (methods) into a single unit called a **class**.

It also involves controlling access to the class's internal data.

A common approach is to:

- Keep data members `private`.
- Provide `public` methods to interact with the data.
- Use getters and setters when appropriate.

## Encapsulation and Data Hiding

Encapsulation and data hiding are closely related, but they are not exactly the same.

- **Encapsulation** - Groups related data and behavior into a class and defines how they are accessed.
- **Data Hiding** - Restricts direct access to internal implementation details.

In C++, access specifiers such as `private`, `protected`, and `public` help implement data hiding.

## Example in C++

```cpp
#include <iostream>
using namespace std;

class Student
{
private:
    int _gpa = 0;

public:
    void setGPA(int gpa)
    {
        if (gpa >= 0 && gpa <= 100)
        {
            _gpa = gpa;
        }
    }

    int getGPA() const
    {
        return _gpa;
    }
};

int main()
{
    Student student1;

    student1.setGPA(95);

    cout << student1.getGPA() << endl;

    return 0;
}
```

### Explanation

- `Student` - Class that encapsulates data and behavior.
- `_gpa` - Private data member.
- `setGPA()` - Public setter that validates the value before updating it.
- `getGPA()` - Public getter that returns the GPA.
- `const` - Indicates that `getGPA()` does not modify the object's ordinary data members.

Direct access is not allowed:

```cpp
student1._gpa = 95; // Error: _gpa is private.
```

Instead, we use:

```cpp
student1.setGPA(95);
```

## Why Use Encapsulation?

### 1. Data Protection

Prevents uncontrolled direct access to internal data.

### 2. Validation

Allows checking values before modifying them.

For example, `setGPA()` accepts only values between 0 and 100.

### 3. Maintainability

Makes code easier to maintain by separating internal implementation from public interfaces.

### 4. Flexibility

Allows changing internal implementation without necessarily affecting code that uses the class.

### 5. Code Organization

Keeps related data and methods together inside a class.

## Important Notes

- Encapsulation does not mean every variable must always be private.
- Getters and setters are common techniques, but they are not required for every data member.
- Making data private does not automatically validate it.
- Encapsulation is not the same as encryption or complete security.

## Key Points

- Encapsulation is one of the four main OOP principles.
- A class groups related data and behavior.
- Access specifiers control access to class members.
- Private data can be accessed through public methods when appropriate.
- Encapsulation helps improve maintainability, flexibility, and data protection.
