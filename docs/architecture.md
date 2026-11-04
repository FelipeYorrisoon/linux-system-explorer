# Architecture

## Project goal

Linux System Explorer inspects Linux system information through userspace
interfaces and presents the results in a clear, testable format.

## Initial design

The application will be divided into small modules:

- `main.c`: command-line entry point and argument handling
- `system_info.c`: kernel and system information
- `process_info.c`: process information from `/proc`

Parsing logic should be separated from filesystem access where practical,
so parsing functions can be tested using fixture files.

## Design principles

- Prefer small functions with clear responsibilities.
- Check system-call and file-operation errors.
- Do not assume `/proc` entries remain available during inspection.
- Avoid fixed-size buffers when a safer alternative is practical.
- Keep output separate from data collection.
- Document limitations and reproduce experiments.
