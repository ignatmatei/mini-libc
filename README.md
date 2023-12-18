# Mini-libc

## Objectives

- Learn about the structure and functionalities provided by the standard C library
- Accommodate with the syscall interface in Linux
- Gain a better understanding of strings and memory management functions
- Learn how the standard C library provides support for low-level input/output operations

## Statement

Build a **minimalistic** [**standard C library**](https://en.wikipedia.org/wiki/C_standard_library) implementation for Linux systems (named **mini-libc**), that can be used as a replacement for the **system libc** ([glibc](https://www.gnu.org/software/libc/) in Linux).
The goal is to have a minimally functional libc with features such as string management, basic memory support and POSIX file I/O.

The implementation of mini-libc will be **freestanding**, i.e. it will not use any outside library calls.
It will be implemented on top of the system call interface provided by Linux on an `x86_64` architecture.
Any function you require, that is typically part of libc, you will have to implement.
You can reuse functions that you implement in other parts of the mini-libc.



## Resources

- [GNU libc manual](https://www.gnu.org/software/libc/manual/html_mono/libc.html)

- [musl implementation of the standard C library for Linux-based systems](https://elixir.bootlin.com/musl/latest/source)

- Syscall interface in Linux - [Linux man pages online](https://man7.org/linux/man-pages/index.html)

- [glibc implementation of the standard C library for Linux-based systems](https://elixir.bootlin.com/glibc/latest/source)
