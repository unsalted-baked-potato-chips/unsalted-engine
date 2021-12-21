# Conventions

## Dynamic Memory Allocation

If you don't have to, don't.

Favor strict size limits over dynamic memory allocation.

## Logging/Warings/Errors

Return error status as i8.

Define error status as macros in header file for errorable functions.

Cleanup all dynamic memory before returning using a goto label.

Use Ulog.h with appropriate log levels.

## Macros

Surround macros in parentheses.

Surround function-like macro parameters in paretheses.

Prefer using inline functions over function-like macros.

Only use function-like macros when you require functionality that inlining cannot provide. ie type-agnostic math, passing types as a parameter, compile time evaluation.

## Returning from functions

Errorable funcions should always return error status as an i8.

Only return non-primitives in inline functions.

Non errorable functions that return information should be inlined.
## Typing

Unsalted engine defaults to using fast atomic types. This means they may be larger than they are expected to be. 

Always explicitly cast types to expected types when passing to external libraries even when they may appear to be identical.

Use types defined by internal libraries. This includes specifiers like UINLINE.

