# CPP-03 — Inheritance

Inheritance and object construction through a family of ClapTrap classes. Part of my 42 C++ coursework.

## Exercises

Each directory is a separate program with its own Makefile and entry point.

| Directory | Focus | Executable |
| --- | --- | --- |
| [ex00](ex00/) | ClapTrap base class | `ClapTrap` |
| [ex01](ex01/) | ScavTrap derived class | `ScavTrap` |
| [ex02](ex02/) | FragTrap derived class | `FragTrap` |
| [ex03](ex03/) | DiamondTrap and multiple inheritance | `DiamondTrap` |

Executable names above follow the current Makefiles, including names reused between exercises.

## Build and run

Requirements: Make and a C++ compiler supporting C++98. The Makefiles use `c++` with `-Wall -Wextra -Werror -std=c++98`.

From the repository root, build the first exercise:

```sh
make -C ex00
cd ex00
./ClapTrap
```

Return to the repository root to build another exercise by replacing `ex00` with its directory. Run it from that directory when it uses relative data files. Inspect its `main.cpp` (or `tests.cpp` / `src/main.cpp`) for the included examples and expected arguments.

```sh
make -C ex00 clean   # Remove object files
make -C ex00 fclean  # Remove object files and executable
make -C ex00 re      # Rebuild
```

## Study notes

These are learning exercises, not a general-purpose library. Read the class headers alongside the implementations, then use the supplied entry points to explore the behavior. This README documents the repository contents and build commands; it does not claim an official evaluation result.
