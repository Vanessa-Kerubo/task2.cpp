# Stack and Factorial in C++

## 📌 Overview

This project demonstrates the implementation and use of a **Stack data structure in C++**.

The program introduces the basic operations of a stack and applies the **LIFO (Last In, First Out)** principle to calculate factorials from `1!` up to `n!`.

This project was developed as part of a **Data Structures and Algorithms** assignment.

## 🎯 Objectives

The project aims to:

* Understand the Stack data structure.
* Understand the **LIFO (Last In, First Out)** principle.
* Implement basic stack operations.
* Use forward and backward stacks.
* Calculate factorials from `1!` to `n!`.
* Practice implementing data structures using C++.

## 🧱 Stack Operations

The project demonstrates the following stack operations:

* **Push** — adds an element to the top of the stack.
* **Pop** — removes the element from the top of the stack.
* **isEmpty** — checks whether the stack is empty.
* **Top** — keeps track of the element currently at the top.

### Example

If we push:

```text
10
20
30
```

The stack becomes:

```text
TOP → 30
      20
      10
```

When the elements are popped, the order is:

```text
30
20
10
```

This demonstrates **LIFO: Last In, First Out**.

## 🔢 Factorial Implementation

For a value of `n = 5`, the program calculates:

```text
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
```

The program uses two stacks to reverse the order of the numbers.

### Forward Stack

Numbers are pushed from `1` to `n`:

```text
1 → 2 → 3 → 4 → 5
```

Because a stack follows LIFO, they are popped as:

```text
5 → 4 → 3 → 2 → 1
```

### Backward Stack

The popped values are transferred into a second stack. This reverses their processing order so that they can be popped as:

```text
1 → 2 → 3 → 4 → 5
```

The factorials can then be calculated sequentially.

## 💻 Technologies Used

* **C++**
* **GNU g++ Compiler**
* **Visual Studio Code**

## ▶️ How to Run

1. Clone or download this repository.
2. Open the project in Visual Studio Code or another C++ IDE.
3. Compile the C++ file using a C++ compiler such as `g++`.
4. Run the generated executable.
5. Enter the value of `n` when prompted.

Example:

```text
Enter the value of n: 5
```

Output:

```text
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
```

## 📚 Applications of Stacks

Stacks are commonly used in:

* Browser history
* Undo and redo operations
* Function calls
* Expression evaluation
* Backtracking
* Maze solving
* Depth-first search
* Memory management

## 👩🏽‍💻 Author

**Vanessa Bundi**

Software Engineering Student
Multimedia University
2025–2029

---

*This project was created for learning and practicing Data Structures and Algorithms in C++.*
