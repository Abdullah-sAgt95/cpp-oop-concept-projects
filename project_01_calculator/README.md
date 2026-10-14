
# Project 01: Simple Calculator

## Overview

A simple calculator application developed in C++ using Object-Oriented Programming (OOP).

The project demonstrates two fundamental OOP principles: **Encapsulation** and **Abstraction**.

The calculator performs arithmetic operations, maintains the current result, and tracks the most recent operation.

## Features

- Addition
- Subtraction
- Multiplication
- Division
- Clear / Reset
- Display the current result
- Track the last operation and its operand
- Handle division by zero according to the project requirements

## OOP Concepts Applied

### 1. Encapsulation

The `Calculator` class keeps its internal data members private:

- `_result` - Stores the current result.
- `_trackingNumber` - Stores the operand used in the latest operation.
- `_trackingOperation` - Stores the name of the latest operation.

These values are managed through public methods rather than being modified directly from outside the class.

### 2. Abstraction

The class provides a simple public interface:

- `add()`
- `subtract()`
- `multiply()`
- `divide()`
- `clear()`
- `printResult()`

Users can perform calculations without needing to understand the internal implementation.

## Division by Zero

According to the project requirements, when the divisor is zero, it is replaced with `1` before division.

```cpp
if (isZero(number))
{
    number = 1;
}
```

**Note:** This is a project-specific requirement, not standard calculator behavior.

## Example Usage

```cpp
Calculator calculator;

calculator.add(10);
calculator.add(100);
calculator.subtract(20);
calculator.divide(2);
calculator.multiply(3);

calculator.printResult();
```

### Expected Output

```text
Result After Multiplying 3 is: 135
```

The calculator maintains its result between operations until `clear()` is called.

## Technologies Used

- Language: C++
- Programming Paradigm: Object-Oriented Programming (OOP)
- Development Environment: Visual Studio

## How to Run

1. Open Visual Studio.
2. Create a C++ Console Application.
3. Replace the generated source code with the contents of `code.cpp`.
4. Build and run the application.

## Project Structure

```text
project_01_calculator/
├── code.cpp
└── README.md
```

## Learning Outcomes

Through this project, I practiced:

- Creating classes and objects.
- Applying encapsulation and abstraction.
- Using public and private access specifiers.
- Implementing methods to manage object state.
- Tracking arithmetic operations.
- Using `const` member functions for read-only operations.
- Organizing a simple C++ OOP application.
