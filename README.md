# C++ - Module 04: Inheritance, Polymorphism and Deep Copy

![42 school](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Standard](https://img.shields.io/badge/Standard-C%2B%2B98-blue?style=flat-square)

## **About**
- **Purpose**: Learn and practice key OOP concepts in C++98: inheritance, polymorphism, virtual destructors, and deep copy semantics.
- **Scope**: Small, focused exercises that demonstrate object lifetime, dynamic allocation, and safe copying across class hierarchies.

## **Exercises**
- **ex00**: Basic polymorphism and virtual destructor examples. Source and build: [ex00/Makefile](ex00/Makefile), [ex00/main.cpp](ex00/main.cpp)
- **ex01**: Adding `Brain` and deep-copy behavior between `Dog` and `Cat`. Source and build: [ex01/Makefile](ex01/Makefile), [ex01/main.cpp](ex01/main.cpp)
- **ex02**: Further tests for deep copy and memory safety. Source and build: [ex02/Makefile](ex02/Makefile), [ex02/main.cpp](ex02/main.cpp)

Each exercise contains relevant class implementations (for example, `Animal.hpp/.cpp`, `Dog.hpp/.cpp`, `Cat.hpp/.cpp`, and `Brain.hpp/.cpp`) in the exercise directories.

## **Learning Goals**
- Implement polymorphic class hierarchies using virtual functions and destructors.
- Ensure correct copy semantics (deep copy vs shallow copy) when classes manage heap memory.
- Observe object lifetime and memory ownership in stack vs heap allocations.
- Write small, testable programs that exercise class behavior.

## **Compilation**
- Each exercise has its own `Makefile`. Build an exercise with:

```bash
cd ex01
make
```

- Common `Makefile` targets:
  - `make` - compile the exercise
  - `make clean` - remove object files
  - `make fclean` - remove object files and the executable
  - `make re` - clean and rebuild

- Compiler flags used: `-Wall -Wextra -Werror -std=c++98` and the default `c++` compiler.

## **Testing & Verification**
- Build each exercise and run the produced executable with representative inputs.
- For exercises that demonstrate memory management, run with `valgrind` (if available) to verify there are no leaks or invalid accesses:

```bash
valgrind --leak-check=full ./a.out
```

(Replace `./a.out` with the actual executable name produced by the `Makefile`.)

## **Notes & Conventions**
- Code targets the C++98 standard per the module requirements.
- Avoid forbidden C-style allocation functions; favor RAII and C++ constructors/destructors.
- Keep classes small and focused; prefer clear ownership semantics when using raw pointers.

## **Author**
- **opopov** — 42 School Student
