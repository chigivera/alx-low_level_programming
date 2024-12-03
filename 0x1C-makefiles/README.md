# C Makefiles Project

This project demonstrates the progressive implementation of Makefiles with increasing complexity and functionality. It includes various Makefiles for compiling C programs and a Python script for calculating island perimeters.

## Files Description

### Makefiles

#### 0-Makefile
- Basic Makefile implementation
- Compiles `main.c` and `school.c` into executable named `school`
- Uses simple gcc compilation without variables

#### 1-Makefile
- Introduces variables:
  - `CC`: Compiler variable (gcc)
  - `SRC`: Source files variable
- Builds executable named `school`

#### 2-Makefile
- Introduces object files
- Variables:
  - `CC`: Compiler
  - `SRC`: Source files
  - `OBJ`: Object files (automatically generated from SRC)
  - `NAME`: Executable name
- Only recompiles updated source files
- More efficient compilation process

#### 3-Makefile
- Adds cleaning and maintenance rules
- Variables:
  - All previous variables
  - `RM`: Program to delete files
- Rules:
  - `all`: Build executable
  - `clean`: Delete temporary files and executable
  - `oclean`: Delete object files
  - `fclean`: Delete all generated files
  - `re`: Force recompilation

#### 4-Makefile
- Adds compiler flags
- Variables:
  - All previous variables
  - `CFLAGS`: Compiler flags (-Wall -Werror -Wextra -pedantic)
- Complete production-ready Makefile
- Includes all cleaning and recompilation rules

#### 100-Makefile (Advanced)
- Sophisticated Makefile with special requirements
- Features:
  - Header file dependency (m.h)
  - Limited variable usage
  - Special constraints on commands
  - Enhanced error handling
- Follows advanced Makefile best practices

### Python Script

#### 5-island_perimeter.py
- Calculates the perimeter of an island in a grid
- Input: List of lists representing a grid (0: water, 1: land)
- Features:
  - Handles rectangular grids
  - Supports single island configurations
  - No internal lakes
  - Efficient perimeter calculation

## Usage

### Compiling with Makefiles
```bash
# Basic compilation
make -f 0-Makefile

# Using variables
make -f 1-Makefile

# With object files
make -f 2-Makefile

# With cleaning rules
make -f 3-Makefile
make clean -f 3-Makefile
make fclean -f 3-Makefile
make re -f 3-Makefile

# With compiler flags
make -f 4-Makefile

# Advanced usage
make -f 100-Makefile
```

### Running Island Perimeter Script
```python
#!/usr/bin/python3
from 5-island_perimeter import island_perimeter

grid = [
    [0, 0, 0, 0, 0, 0],
    [0, 1, 0, 0, 0, 0],
    [0, 1, 0, 0, 0, 0],
    [0, 1, 1, 1, 0, 0],
    [0, 0, 0, 0, 0, 0]
]
print(island_perimeter(grid))  # Output: 12
```

## Requirements
- Ubuntu 20.04 LTS
- gcc 9.3.0
- GNU Make 4.2.1
- Python 3
- Allowed editors: vi, vim, emacs

## Project Structure
```
.
├── 0-Makefile
├── 1-Makefile
├── 2-Makefile
├── 3-Makefile
├── 4-Makefile
├── 100-Makefile
├── 5-island_perimeter.py
├── main.c
├── school.c
└── m.h
```