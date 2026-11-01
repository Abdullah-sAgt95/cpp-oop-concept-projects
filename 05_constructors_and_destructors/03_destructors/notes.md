
# Destructors in C++

## What Is a Destructor?

A destructor is a special member function that is invoked when an object's lifetime ends or when an object is explicitly deleted.

Its primary purpose is to perform cleanup before the object's destruction is completed.

A destructor is commonly considered the counterpart of a constructor.

- Constructor: Initializes an object.
- Destructor: Performs cleanup during object destruction.

## Destructor Syntax

```cpp
class Person
{
public:
    Person()
    {
        cout << "Constructor called!" << endl;
    }

    ~Person()
    {
        cout << "Destructor called!" << endl;
    }
};
```

The tilde symbol (`~`) appears before the class name to identify the destructor.

## Destructor Characteristics

- A destructor has the same name as its class, preceded by `~`.
- It has no return type, not even `void`.
- It does not accept parameters.
- A class has only one destructor.
- Destructors cannot be overloaded.
- A destructor can be virtual.
- It is invoked automatically when an automatic object's lifetime ends.
- It is also invoked when an object allocated with `new` is properly deleted.

## 1. Automatic Object Destruction

Example:

```cpp
void fun1()
{
    Person person1;
}
```

When `fun1()` is called:

1. `person1` is created.
2. The constructor executes.
3. The function finishes.
4. The destructor executes automatically.

Expected output:

```text
Constructor called!
Destructor called!
```

Objects with automatic storage duration are destroyed when their lifetime ends, typically upon leaving their scope.

## 2. Dynamic Memory Allocation

C++ allows programmers to allocate memory dynamically during program execution.

The `new` operator can allocate memory and construct an object.

Example:

```cpp
void fun2()
{
    Person* person2 = new Person;
}
```

In this example:

- `new Person` creates a dynamically allocated object.
- The constructor executes.
- `person2` stores the object's address.
- The pointer variable goes out of scope when the function ends.
- The dynamically allocated object is not automatically deleted.

This causes a memory leak because the allocated memory is no longer reachable through that pointer.

## 3. Releasing Dynamic Memory

To properly destroy an object allocated using `new`, use `delete`.

```cpp
void fun2()
{
    Person* person2 = new Person;

    delete person2;
}
```

Execution:

1. Memory is allocated.
2. The constructor executes.
3. The object is used.
4. `delete` invokes the destructor.
5. The allocated memory is deallocated.

Expected output:

```text
Constructor called!
Destructor called!
```

## 4. Stack and Heap

In introductory C++ programming, automatic objects are commonly associated with stack storage, while dynamically allocated objects are commonly associated with heap storage.

### Automatic Object

```cpp
int x = 10;
```

The variable normally has automatic storage duration when declared inside a function.

Its lifetime ends when execution leaves its scope.

### Dynamically Allocated Object

```cpp
int* ptr = new int(10);

delete ptr;
```

The allocated integer exists until it is explicitly deleted or otherwise managed by an owning resource-management object.

Important: The pointer itself and the dynamically allocated object have separate lifetimes.

## 5. Memory Management and Pointers

A pointer is a variable that stores an address.

Example:

```cpp
int x = 10;
int* ptr = &x;
```

Here:

- `x` is an integer variable.
- `ptr` stores the address of `x`.
- `*ptr` accesses the value stored at that address.

A pointer does not necessarily refer to dynamically allocated memory.

### Dynamic Allocation Example

```cpp
int* ptr = new int(30);

cout << *ptr << endl;

delete ptr;
```

The `new` operator allocates memory.

The `delete` operator releases memory allocated with the corresponding non-array form of `new`.

For arrays allocated using `new[]`, use `delete[]`.

## 6. Why Are Destructors Useful?

Destructors are useful for releasing resources owned by an object.

Common examples include:

- Closing files.
- Releasing dynamically allocated memory.
- Releasing operating-system resources.
- Closing network connections.
- Releasing locks and other acquired resources.

This cleanup is commonly associated with RAII (Resource Acquisition Is Initialization), a fundamental C++ resource-management technique.

## 7. Constructor vs. Destructor

| Constructor | Destructor |
|---|---|
| Initializes an object. | Performs cleanup during destruction. |
| Uses the class name. | Uses `~` followed by the class name. |
| Can accept parameters. | Cannot accept parameters. |
| Can be overloaded. | Cannot be overloaded. |
| Runs during object construction. | Runs during object destruction. |

## 8. Important Memory Management Notes

### Automatic Variables

Ordinary local variables generally have automatic storage duration.

They do not remain allocated until the program terminates.

### Dynamic Allocation

Dynamic allocation is useful when an object's lifetime or size needs to be managed independently of a local scope.

However, dynamic allocation does not automatically make a program faster.

### Modern C++ Best Practices

Modern C++ generally prefers:

- Automatic objects when possible.
- `std::vector` for dynamically sized collections.
- `std::string` for text.
- `std::unique_ptr` for exclusive dynamic ownership.
- `std::shared_ptr` when shared ownership is genuinely needed.

These techniques reduce manual memory management and the risk of memory leaks.

## 9. Important Clarifications

- A destructor does not necessarily free all memory an object points to.
- Data members are destroyed automatically as part of object destruction.
- Raw pointers do not automatically delete their pointed-to objects.
- A destructor can be virtual and participate in overriding.
- Destructors are not normally used as a replacement for explicit database transactions or error handling.
- `new` must be paired with appropriate resource management, often `delete` or a smart pointer.
- Using pointers does not guarantee better performance.

## Key Points

- A destructor is a special member function used during object destruction.
- It begins with the tilde symbol (`~`).
- It does not accept parameters or return a value.
- A class cannot overload its destructor.
- Automatic objects are destroyed when their lifetime ends.
- Objects allocated with `new` require proper ownership and cleanup.
- `delete` invokes the destructor for an object allocated using the corresponding form of `new`.
- Destructors are essential for safe resource management.
- Modern C++ favors RAII and standard library resource-management types.
