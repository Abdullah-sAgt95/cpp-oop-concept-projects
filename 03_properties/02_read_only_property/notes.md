
# Read-Only Property

## What Is a Read-Only Property?

A read-only property allows data to be accessed without allowing it to be modified through the public interface.

In C++, we can implement this using a **Getter without a public Setter**.

## How Does It Work?

To create a read-only interface for a data member:

1. Declare the data member as `private`.
2. Create a public Getter to read its value.
3. Do not provide a public Setter to modify it.

## Example

```cpp
class Person
{
private:
    int _id = 10;

public:
    int getId() const
    {
        return _id;
    }
};
```

In this example:

- `_id` → Private data member.
- `getId()` → Public Getter.
- No `setId()` → The ID cannot be modified through a public Setter.

## Using a Read-Only Property

```cpp
Person person1;

cout << person1.getId() << endl;
```

Output:

```text
10
```

The following code is not allowed:

```cpp
person1._id = 20; // Error: _id is private.
```

## Read-Only vs Read-Write

| Read-Only | Read-Write |
|---|---|
| Getter only | Getter and Setter |
| Allows reading | Allows reading and modification |
| No public Setter | Provides a public Setter |

## Why Use Read-Only Properties?

- Prevent unwanted modifications through the public interface.
- Protect internal data from direct external access.
- Support encapsulation.
- Provide controlled access to important information.

## Why Use `const` in Getter Functions?

The `const` keyword is placed after a member function's parentheses to indicate that the function does not modify the object's non-mutable data members.

### Example

```cpp
int getId() const
{
    return _id;
}
```

### Benefits of Using `const`

- **Prevents accidental modifications:** The function cannot directly modify ordinary data members.
- **Improves code safety:** Helps ensure that getter functions only read data.
- **Supports const objects:** Allows the function to be called on `const` objects.
- **Improves readability:** Makes it clear that the function is not intended to modify the object.

### Without `const`

```cpp
int getId()
{
    return _id;
}
```

This function is allowed to modify the object's data members, even if it currently only returns a value.

### With `const`

```cpp
int getId() const
{
    return _id;
}
```

The compiler prevents direct modifications to ordinary data members inside this function.

### Example with a Const Object

```cpp
const Person person1;

cout << person1.getId() << endl;
```

This works because `getId()` is declared as a `const` member function.

### Important Note

`const` after a member function does not make the returned value constant.

It restricts modifications to the object through that member function.

## Naming Convention

A leading underscore can be used for private data members:

```cpp
int _id;
string _firstName;
```

This is a naming convention, not a C++ requirement.

## Read-Only vs Immutable Data

A read-only property does not necessarily mean the underlying data can never change.

The class itself may still modify the private data member.

Example:

```cpp
int _id = 10;
```

The value can be modified by member functions inside the class.

However:

```cpp
const int _id = 10;
```

The value cannot be modified after initialization.

## Key Points

- Use a Getter to provide read access.
- Do not provide a public Setter when external modification should be restricted.
- Keep internal data private when appropriate.
- Read-only access supports encapsulation.
- A Getter without a Setter does not automatically make the underlying data immutable.
- Getter functions should generally be marked `const` when they do not modify the object.
- `const` member functions can be called on `const` objects.
