# Classes and Objects

## What is a Class?

A class is a blueprint for creating objects.

It defines:

- Data → attributes/data members
- Behavior → methods/member functions
- Access control → `private` and `public`

A class is also a user-defined data type.

## What is an Object?

An object is an instance of a class.

It represents a specific entity created from that class.

Example:

```cpp
class Person
{
public:
    string firstName;
    string lastName;
};

int main() {

    Person person1;

    return 0;
}
```


## In This Example
- `Person` → class 
- `person1` → object (instance of `Person`)

```
| Class                     | Object                            |
| ------------------------- | --------------------------------- |
| A blueprint               | An instance of a class            |
| Defines data and behavior | Represents a specific entity      |
| A user-defined data type  | A variable created from the class |
```

### Key Point
A class defines the structure and behavior.
An objetc is a specific instance created from that class.