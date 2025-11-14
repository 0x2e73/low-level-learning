# Questions & Confusions - Phase 0

> **Rule:** Never leave a question unanswered. If you don't know, that's your next investigation task.

## Currently Investigating

### What exactly happens during `malloc()`?
**Status:** Investigating
**Started:** [Date]
**Target:** Understand by Week 2

**Investigation Plan:**
- [ ] Read glibc malloc.c source code (simplified version at https://sourceware.org/git/?p=glibc.git)
- [ ] Run `strace -e brk,mmap ./test_malloc` to see syscalls
- [ ] Read "Understanding glibc malloc" article
- [ ] Study CS:APP Section 9.9 (Dynamic Memory Allocation)
- [ ] Trace through malloc call in gdb, step by step
- [ ] Watch video: "How malloc() works" by Jacob Sorber

**Findings So Far:**
- [Date] malloc uses brk() for small allocations (<128KB typically)
- [Date] malloc uses mmap() for large allocations
- [Date] Free blocks are maintained in bins/lists
- [More findings as I learn...]

**Final Answer:**
[To be filled when investigation complete]

---

### Why does `int *p = &x;` work but `int *p = x;` doesn't?
**Status:** Investigating
**Started:** [Date]
**Target:** Understand by Week 1

**Investigation Plan:**
- [ ] Compile both, see compiler error message
- [ ] Understand type system: pointer vs value
- [ ] Print addresses and values to see difference
- [ ] Draw memory diagram

**Findings So Far:**
- [Date] ...

**Final Answer:**
[To be filled]

---

## Unanswered (Backlog)

*Add new questions here as they arise. Move to "Investigating" when you start working on them.*

- How does the linker resolve symbols?
- What's the difference between `extern` and `static`?
- Why do we need both stack AND heap?
- What causes stack overflow exactly?
- How does `printf()` actually work?

---

## Answered

<!-- Move questions here once fully resolved -->

### [Example] Why do we use `const` for string literals?
**Answered:** [Date]

**Answer:**
String literals like `"hello"` are stored in read-only memory (typically .rodata section). If you try to modify them (e.g., `s[0] = 'H'`), you get undefined behavior (often segfault on modern systems).

Using `const char *s = "hello"` signals to the compiler that this points to immutable data, and the compiler will warn you if you try to modify it.

**Key insight:** `char str[] = "hello"` creates a mutable copy on the stack, while `char *str = "hello"` points to read-only data.

---

## Confusions Worth Tracking

*Things that confused me but now make sense*

- [Date] I thought pointers and arrays were the same thing → Learned they're different (array names decay to pointers in most contexts, but sizeof() shows the difference)
- [Date] Confused about when to use malloc vs when to use stack → Learned...

---

*Last updated: [Date]*