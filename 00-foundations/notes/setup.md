# Setup Notes

## Development Environment
usefull doc : ([gcc-doc](https://gcc.gnu.org/onlinedocs/gcc-15.2.0/gcc))

### Compiler
- Using: [GCC/Clang version]
- Installation: `brew install gcc` (macOS)

### Useful commands
```bash
# Compile
gcc -o program program.c

# Compile with warnings
gcc -Wall -Wextra -o program program.c

# Debug symbols
gcc -g -o program program.c

# Run with valgrind (memory check)
valgrind ./program
```
---
