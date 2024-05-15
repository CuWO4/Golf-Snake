# Golf Snake

A minimalist implementation of the classic game Snake using minimal code.

---

## Rules

#### Objective

To create a Snake program with as few lines of code as possible, adhering to the [program constraints](#program-constraints) and [line-breaking rules](#line-breaking-rules). In case of equal line counts, prioritize minimizing the number of characters (excluding whitespace).

#### Program Constraints

* **Input Handling**: Ability to read `W`, `A`, `S`, `D` keys for controlling the snake's movement without blocking; case insensitivity; processing of all inputs in the buffer per frame; discarding of invalid inputs (impossible direction changes, characters other than `W`, `A`, `S`, `D`).

* **Movement Handling**: Recording of the snake's body position; updating of the snake's body position after movement.

* **Food Handling**: Properly increasing the snake's length upon eating food; generating new food; ensuring new food does not appear on the snake's body.

* **Failure Handling**: Detection of failure upon snake collision with walls or itself, leading to program termination.

* **Output Handling**: Generation of a visual interface on the console; see [Sample](#Sample) for the interface layout.

* **Stability**: Prevention of program crashes under any circumstance.

* **Syntax Requirement**: Utilization of ISO C99 standard syntax.

* **No Undefined Behavior**: Ensuring the program exhibits no undefined behavior.

#### Line-breaking Rules

* **Not Allowed**: Chaining of independent statements separated by semicolons.

    Example:
    ```c
    int a = 0; b = 1;
    ```

    Correct Approach:
    ```c
    int a = 0;
    b = 1;
    ```

* **Not Allowed**: Lack of line breaks within the braces following `if`, `while`, `for` statements.

    Example:
    ```c
    if (a == 0) { b = 1; }

    if (a == 0) {
        b = 1; }

    if (a == 0) { b = 1;
    }
    ```

    Correct Approach:
    ```c
    if (a == 0) {
        b = 1;
    }
    ```

    Subject to the above rules,

* **Allowed**: Chaining of a single expression after `if`, `while`, `for` statements.

    Example:
    ```c
    if (a == 0) b = 1;
    ```

* **Allowed**: Chaining within the parentheses of `if`, `while`, `for` expressions.

* **Allowed**: Chaining using comma expressions.
    Example:
    ```c
    while (c = getchar(), c != EOF);
    ```

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

```
| ` ` ` ` ` ` ` `|
| `*` ` ` ` ` ` `|
| ` ` `@`@` ` ` `|
| ` ` ` `@` `@` `|
| ` ` ` `@` `@` `|
| ` ` ` `@`@`@` `|
| ` ` ` ` ` ` ` `|
| ` ` ` ` ` ` ` `|
```