
# Properties: Setters and Getters

## What Are Setters and Getters?

Setters and getters are public member functions that provide controlled access to private data members.

- **Getter** → Reads a value.
- **Setter** → Modifies a value.

They are commonly used to implement <u>encapsulation</u> in C++.

## Why Use Setters and Getters?

Instead of accessing data members directly, we can control how they are read and modified.

Benefits include:

- Data hiding and encapsulation.
- Input validation.
- Better control over modifications.
- Easier maintenance.
- Optional logging or auditing of changes.

## Setter Example

A setter is used to modify a private data member.

```cpp
void setFirstName(string firstName)
{
    _firstName = firstName;
}
```

A setter can also include validation before accepting a new value.

## Getter Example

A getter is used to read a private data member.

```cpp
string getFirstName() const
{
    return _firstName;
}
```

The `const` keyword indicates that the function does not modify the object's non-mutable data members.

## Using Setters and Getters

```cpp
Person person1;

person1.setFirstName("Mahr");
person1.setLastName("Yousef");

cout << person1.getFirstName() << endl;
cout << person1.getLastName() << endl;
cout << person1.fullName() << endl;
```

## Direct Access vs Controlled Access

| Direct Access | Setters and Getters |
|---|---|
| Accesses public data directly | Uses public member functions |
| No built-in validation | Can validate values |
| Exposes internal data representation | Can hide implementation details |

## Naming Convention

A leading underscore can be used for private data members:

```cpp
string _firstName;
string _lastName;
```

This is a naming convention, not a C++ requirement.

## Key Points

- Use getters to read private data through a controlled interface.
- Use setters to modify private data through a controlled interface.
- Setters can include validation.
- Not every private member needs both a getter and a setter.
- Getters and setters do not automatically provide security, validation, or audit logging.
