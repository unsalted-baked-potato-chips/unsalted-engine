#ifndef UNSALTED_ENGINE_ULOG_H
#define UNSALTED_ENGINE_ULOG_H

#include <stdio.h>

typedef static const enum _log_level {
    DEBUG = 0,
    INFO = 1,
    WARN = 2,
    ERROR = 3,
    FATAL = 4
} log_level;

void set_log_stream(FILE *);
void log(const char *, log_level);

#endif //UNSALTED_ENGINE_ULOG_H
