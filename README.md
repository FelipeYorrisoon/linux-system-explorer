# Linux System Explorer

A Linux system inspection tool written in C to explore operating system information, processes, memory, and kernel interfaces through reproducible experiments.

The project is developed as a hands-on engineering portfolio focused on Linux internals, systems programming, and low-level software development.

## Engineering Focus

- C programming, memory management, and debugging
- Linux userspace and kernel interfaces
- System calls and process execution
- Process and memory inspection
- `/proc` filesystem exploration
- Automated testing and code quality
- Reproducible experiments and technical documentation

## Current Status

**In development — initial implementation available.**

The first implementation retrieves operating system identification information using the `uname()` interface.

The codebase is being progressively organized into independent modules, with an emphasis on understanding the relationship between C applications, system interfaces, and the Linux kernel.

## Implemented Features

- [x] Initial C implementation
- [x] Operating system identification using `uname()`
- [x] Kernel release and machine information retrieval
- [ ] Modular system information architecture
- [ ] Automated test suite

## Planned Features

- System and kernel information
- Memory information through `/proc/meminfo`
- System uptime through `/proc/uptime`
- Process inspection through `/proc`
- Human-readable and JSON output
- Automated testing and continuous integration
- Documented system-call experiments using `strace`

## Technology Stack

| Technology | Purpose |
|---|---|
| C | Systems programming |
| Ubuntu Linux | Development and target environment |
| GCC | Compilation |
| GNU Make | Build automation |
| Git | Version control |
| strace | System-call investigation |

## Requirements

- Ubuntu Linux
- GCC
- GNU Make
- Git

## Getting Started

Clone the repository:

```bash
git clone https://github.com/FelipeYorrisoon/linux-system-explorer.git
cd linux-system-explorer
```

### Build

Compile the current implementation:

```bash
gcc -Wall -Wextra -Wpedantic src/computador.c -o computador
```

### Run

```bash
./computador
```

> The build process will be migrated to GNU Make as the project architecture evolves.

## Project Structure

```text
linux-system-explorer/
├── docs/
│   ├── architecture.md
│   ├── development-log/
│   ├── syscall-notes.md
│   └── testing.md
├── src/
├── scripts/
├── tests/
│   └── fixtures/
├── Makefile
├── README.md
└── LICENSE
```

## Documentation

- [Architecture](docs/architecture.md)
- [Testing](docs/testing.md)
- [System Call Notes](docs/syscall-notes.md)

## Learning & Development Log

Development notes, experiments, implementation decisions, and investigation results are recorded in:

`docs/development-log/`

The project emphasizes understanding how Linux works internally rather than simply implementing features without understanding their underlying mechanisms.

## License

See [LICENSE](LICENSE).

## Author

**Felipe Yorrison**

C/C++ Developer | Systems Programming | Security & Firmware

[GitHub](https://github.com/FelipeYorrisoon)
