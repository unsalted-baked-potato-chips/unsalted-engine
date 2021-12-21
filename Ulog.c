#include <stdio.h>
#include "ulog.h"

static File *log_stream = stderr;

static const char prefix[][] = {
  [DEBUG] = "DEBUG",
  [INFO] = "INFO",
  [WARN] = "WARN",
  [ERROR] = "ERROR",
  [FATAL] = "FATAL"
};

void set_ulog_stream(FILE * stream){
  log_stream = stream;
}

void log(const char * desc, log_level level){
  fprintf(log_stream, "%s: %s.\n", prefix[level], desc);
}
