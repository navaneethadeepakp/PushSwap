# Push_Swap

Push_swap is an algorithmic project that sorts data on a stack, with a limited set of instructions, using the lowest possible number of actions. The goal is to manipulate two stacks (Stack A and Stack B) to output the most efficient sequence of commands to sort a random list of integers.

## Features

*   **Robust Input Validation:** Parses both string and multi-argument inputs while rigorously checking for non-numeric characters, duplicate values, and limits exceeding standard integer constraints (`INT_MIN` / `INT_MAX`).
*   **Dynamic Data Indexing:** Normalizes input data by converting raw values into a simplified index, optimizing the sorting logic for sets containing extreme or negative values[cite: 74, 81].
*   **Custom Data Structures:** Utilizes manually managed linked lists (`t_node`) to represent and manipulate the stacks without relying on standard library arrays.
*   **Memory Safety:** Implements strict memory management to ensure all structures, string arrays, and nodes are properly freed upon completion or error.
  
## Sorting Algorithm Overview

The program dynamically selects the most efficient sorting strategy based on the size of the input:
*   **Small Stacks (≤ 7 elements):** Uses highly optimized rotation logic to sort elements with minimal moves.
*   **Large Stacks (> 7 elements):** Implements a custom "Chunk Sort" algorithm. It divides the stack into mathematical chunks based on the square root of the total size, pushing them to Stack B. It then calculates the shortest rotation path (forward or reverse) to push the elements back to Stack A in perfect sequential order.

## Build & Usage

The project is compiled using a provided `Makefile` with strict error flags (`-Wall -Wextra -Werror`). 

### Compilation

```bash
make
```

### Example

```
./push_swap 45 67 89 12 23
```
(The output will be the exact sequence of stack operations (eg, rra, pb, sa) required to sort the numbers.)
