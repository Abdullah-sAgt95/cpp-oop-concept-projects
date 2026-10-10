
# Properties Using Assignment (`=`)

## What Is `__declspec(property)`?

`__declspec` is a Microsoft Visual C++ compiler extension used to specify special declarations or compiler-specific behavior.

The `property` attribute allows a class to expose a property that looks like a regular variable but uses getter and setter functions behind the scenes.

## Property Declaration

```cpp
__declspec(property(get = getFirstName, put = setFirstName))
    string firstName;
```

In this declaration:

- `__declspec` → Microsoft compiler-specific extension.
- `property` → Defines a property.
- `get = getFirstName` → Specifies the getter function.
- `put = setFirstName` → Specifies the setter function.
- `string firstName` → Declares the property name and type.

## How Does It Work?

### Traditional Getter and Setter

```cpp
person1.setFirstName("Paolo");
cout << person1.getFirstName() << endl;
```

We explicitly call the setter and getter functions.

### Property Syntax

```cpp
person1.firstName = "Nesta";
cout << person1.firstName << endl;
```

The property allows us to use syntax similar to a regular variable.

Internally, the compiler uses the associated functions.

## Assignment and Reading

| Operation | Example | Function Called |
|---|---|---|
| Write | `person1.firstName = "Nesta";` | `setFirstName()` |
| Read | `cout << person1.firstName;` | `getFirstName()` |

## Where Is the Data Stored?

The property itself does not store the first name.

The actual data is stored in the private data member:

```cpp
private:
    string _firstName;
```

The getter and setter provide access to this data.

## Why Use Properties?

- Cleaner and more readable syntax.
- Convenient access to private data.
- Reuses existing getter and setter functions.
- Allows validation through the setter.
- Supports encapsulation.

## Important: Compiler Compatibility

`__declspec(property)` is a Microsoft Visual C++ extension.

It is not part of standard C++ and is not portable across all C++ compilers.

For portable C++ code, <u>regular getter and setter functions are generally preferred</u>.

## Key Points

- `__declspec(property)` defines a property using getter and/or setter functions.
- Writing to the property calls its setter.
- Reading from the property calls its getter.
- The property itself does not store the underlying data.
- `__declspec(property)` is specific to Microsoft Visual C++.
- Regular getter and setter functions are the more portable approach.
