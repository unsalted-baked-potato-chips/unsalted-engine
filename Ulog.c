#include <stdio.h>
#include "Ulog.h"

static const char prefix[][N_LOG_LEVELS] = {
  [DEBUG] = "DEBUG",
  [INFO] = "INFO",
  [WARN] = "WARN",
  [ERROR] = "ERROR",
  [FATAL] = "FATAL"
};

void ulog(const char * desc, log_level level){
  fprintf( stdout, "%s: %s.\n", prefix[level], desc);
}
