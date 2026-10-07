# Access Specifiers

## What are Access Specifiers?

Access specifiers control how class members can be accessed.

The three main access specifiers in C++ are:

- `public`
- `private`
- `protected`

## Public

`public` members can be accessed from both inside and outside the class.

Example:

```cpp
public:
    string firstName;
    string lastName;
```

These members can be accessed through an object:

```cpp
AccessModifiers modifiers;

modifiers.firstName = "Ali";
modifiers.lastName = "Pina";
```

## Private

`private` members can only be accessed from inside the class.

Example:

```cpp
private:
    int variable1 = 5;

    int function1()
    {
        return 40;
    }
```

This means the following cannot be accessed directly from `main()`:

```cpp
modifiers.variable1;
modifiers.function1();
```

However, other member functions inside the same class can access them.

For example:

```cpp
float function3()
{
    return function1() + variable1 * variable2;
}
```

## Protected

`protected` members can be accessed:

- Inside the class itself
- Inside classes that inherit from it

They cannot normally be accessed directly from outside the class through an object.

Example:

```cpp
protected:
    int variable2 = 100;

    int function2()
    {
        return 50;
    }
```

## Access Comparison

| Access Specifier | Same Class | Derived Class | Outside Class |
|---|---|---|---|
| `public` | Yes | Yes | Yes |
| `protected` | Yes | Yes | No |
| `private` | Yes | No | No |

## Why Use Access Specifiers?

Access specifiers help with:

- Data hiding
- Encapsulation
- Protecting internal implementation
- Controlling how class members are used

## Key Point

Use `public` for members that should be accessible from outside the class.

Use `private` for internal data and functionality that should not be accessed directly from outside the class.

Use `protected` when members should be available to the class itself and its derived classes.