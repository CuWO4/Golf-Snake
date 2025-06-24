# Golf Snake

A minimalist implementation of the classic game Snake using minimal code.

---

## Rules

To create a Snake program with as few number of characters as possible, adhering to the [program constraints](#program-constraints).

### Program Constraints

* **Input Handling**: Ability to read `W`, `A`, `S`, `D` keys for controlling the snake's movement without blocking; case insensitivity; processing of all inputs in the buffer per frame; discarding of invalid inputs (impossible direction changes, characters other than `W`, `A`, `S`, `D`).

* **Movement Handling**: Recording of the snake's body position; updating of the snake's body position after movement.

* **Food Handling**: Properly increasing the snake's length upon eating food; generating new food randomly; ensuring new food does not appear on the snake's body.

* **Failure Handling**: Detection of failure upon snake collision with walls or itself, leading to program termination.

* **Output Handling**: Generation of a visual interface on the console; see [Sample](#sample) for the interface layout.

* **Frame Length**: Frame times should be long enough to make the game human-controllable.

* **Library Usage**: Allowed to use the standard library and platform-specific libraries (e.g., `windows.h` for Windows and `unistd.h` for Linux). Allowed to include `-include` in compile options instead of preprocessing commands. Not allowed to include your own libraries.

* **Stability**: Prevention of program crashes under any circumstance.

* **Syntax Requirement**: Utilization of ISO C99 standard syntax.

* **No Undefined Behavior**: Ensuring the program exhibits no undefined behavior.

## Environment

* Windows 22H2

* clang 17.0.1

## Compile

```bash
make
```

## Usage

```bash
make run
```

## Sample

```shell
| ` ` ` ` ` ` ` `|
| `*` ` ` ` ` ` `|
| ` ` `@`@` ` ` `|
| ` ` ` `@` `@` `|
| ` ` ` `@` `@` `|
| ` ` ` `@`@`@` `|
| ` ` ` ` ` ` ` `|
| ` ` ` ` ` ` ` `|
```
