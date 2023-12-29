```markdown
# C - Makefiles

This project involves the practice of writing Makefiles.

## Tests :heavy_check_mark:

* [tests](./tests): Directory containing test files.

## Helper Files :raised_hands:

* [school.c](./school.c): C function that displays a seahorse in text. Used for practicing Makefile throughout the project.

* [main.c](./main.c): Main C function that executes the function defined in [school.c](./school.c).

## Header File :file_folder:

* [m.h](./m.h): Header file defining the function prototype used in `school.c`.

## Tasks :page_with_curl:

* **0. make -f 0-Makefile**
  * [0-Makefile](./0-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). Includes:
    * Rule `all` for building the executable.

* **1. make -f 1-Makefile**
  * [1-Makefile](./1-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). Extends [0-Makefile](./0-Makefile) with:
    * Variable `CC` defining the compiler.
    * Variable `SRC` defining the `.c` files to compile.
    * The `all` rule only recompiles updated source files.

* **2. make -f 2-Makefile**
  * [2-Makefile](./2-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). Extends [1-Makefile](./1-Makefile) with:
    * Variable `OBJ` defining the `.o` files to compile.
    * Variable `NAME` defining the executable name.

* **3. make -f 3-Makefile**
  * [3-Makefile](./3-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). Extends [2-Makefile](./2-Makefile) with:
    * Rule `clean` for deleting Emacs/Vim temporary files and the executable.
    * Rule `oclean` for deleting object files.
    * Rule `fclean` for deleting all temporary files, the executable, and object files.
    * Rule `re` for forcing recompilation of all source files.
    * Variable `RM` defining the command to delete files.

* **4. A complete Makefile**
  * [4-Makefile](./4-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). Extends [3-Makefile](./3-Makefile) with:
    * Variable `CFLAGS` defining the compiler flags `-Wall -Werror -Wextra -pedantic`.

* **5. Island Perimeter**
  * [5-island_perimeter.py](./5-island_perimeter.py): Python function returning the perimeter of an island defined in a grid.
  * Prototype: `def island_perimeter(grid):`
  * Parameter `grid` is a list of a list of integers.
    * Water is represented by `0`.
    * Land is represented by `1`.
    * Each element represents a cell square of side length 1.
    * Grid cells are connected horizontally/vertically (not diagonally).
    * The grid is rectangular, with a width and height not exceeding 100.
    * The grid is completely surrounded by water, and there is either exactly one island or nothing.
    * The island does not contain lakes (water inside disconnected from surrounding land).

* **6. make -f 100-Makefile**
  * [100-Makefile](./100-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). Extends [4-Makefile](./4-Makefile) with:
    * Does not define the variable `RM`.
    * Never uses the string `$(CFLAGS)`.
    * Does not compile if the header `m.h` is missing.
    * Works even if there are existing files of the same name as any of the Makefile rules in the current directory.
```
