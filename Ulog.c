#include <stdio.h>
#include "ulog.h"

static const char prefix[][] = {
  [DEBUG] = "DEBUG",
  [INFO] = "INFO",
  [WARN] = "WARN",
  [ERROR] = "ERROR",
  [FATAL] = "FATAL"
};

void log(const char * desc, log_level level){
  fprintf( stdout, "%s: %s.\n", prefix[level], desc);
}
