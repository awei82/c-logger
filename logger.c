#include <stdio.h>

#include "logger.h"

int main() {
    logger_init(LOG_WARN, stderr);
    log_trace("test trace");
    log_debug("test debug");
    log_warn("test warn");
    log_error("test error");
    log_fatal("test fatal");
}