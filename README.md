# C++ - Module 04: Inheritance & Polymorphism

![42 school](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Standard](https://img.shields.io/badge/Standard-C%2B%2B98-blue?style=flat-square)

## About

This repository contains exercises for Module 04, focusing on class inheritance, virtual functions, and object copying semantics in C++ (C++98 style). Each exercise isolates a small set of concepts so you can explore how polymorphism and ownership interact in simple, testable programs.

## Project Goals

- Understand class inheritance and method overriding
- Practice virtual destructors and runtime polymorphism
- Implement correct copy semantics (deep copy) for classes that manage dynamic memory
- Observe object lifetime and resource ownership in simple programs

## Exercise Overview

The repository contains the following exercise directories:

- `ex00/`
  - Implements a basic `Animal` class hierarchy with `Dog` and `Cat` classes and the corresponding wrong implementation to show what happens without `virtual` methods or destructors.
  - Learning concepts: simple inheritance, virtual functions, correct destructor usage, polymorphic `makeSound()` behavior.

- `ex01/`
  - Introduces a `Brain` class used by `Dog` and `Cat` to demonstrate deep copy semantics when objects contain dynamically allocated members.
  - Learning concepts: Rule of Three (constructor, copy constructor, assignment operator), deep vs shallow copy, dynamic allocation and cleanup.

- `ex02/`
  - Builds on `ex01` with tests that exercise copying, assignment, and ensure the `Brain` contents are copied correctly between objects.
  - Learning concepts: verifying deep copy correctness, object lifetime across copies and assignments.

Each exercise is intentionally small and focused to make it easy to compile, run, and inspect behavior.

## Compilation

Each exercise has its own `Makefile` and can be built independently.

### Build an Exercise

```bash
cd ex00
make
```

Replace `ex00` with any other exercise directory as needed.

### Available Targets

- `make` - Compile the exercise
- `make clean` - Remove object files
- `make fclean` - Remove object files and the executable
- `make re` - Rebuild everything from scratch

### Compilation Flags

- Compiler: `c++`
- Standard: `-std=c++98`
- Warnings: `-Wall -Wextra -Werror`

## Technical Notes

- The codebase follows the C++98 standard as required for these exercises.
- Focus is on explicit ownership management — prefer RAII and proper destructors.
- Avoids unnecessary abstractions so the learning goal remains clear.

## Testing

- Build each exercise with `make` and run the produced executable to observe behavior.
- Check polymorphic behavior by calling `makeSound()` on base-class pointers to derived instances.
- Verify deep copy by copying objects that contain a `Brain` member and ensuring internal state is not shared.

## Author

**opopov** - 42 School Student
