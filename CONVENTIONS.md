# Conventions

## Dynamic Memory Allocation

If you don't have to, don't.

Favor strict size limits over dynamic memory allocation.

## Returning from functions

Errorable funcions should always return error status as an i8.

Only return non-primitives in inline functions.

Non errorable functions that return information should be inlined.

## Logging/Warings/Errors

Return error status as i8.

Define error status as macros in header file for errorable functions.

Cleanup all dynamic memory before returning using a goto label.

Use Ulog.h with appropriate log levels.
