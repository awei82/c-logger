# logger.c
A simple logging library implemented in C99 - forked from https://github.com/rxi/log.c

![screenshot](https://cloud.githubusercontent.com/assets/3920290/23831970/a2415e96-0723-11e7-9886-f8f5d2de60fe.png)


## Usage
**[logger.c](logger.c?raw=1)** and **[logger.h](logger.h?raw=1)** should be dropped
into an existing project and compiled along with it. The library provides 6
function-like macros for logging:

```c
log_trace(const char *fmt, ...);
log_debug(const char *fmt, ...);
log_info(const char *fmt, ...);
log_warn(const char *fmt, ...);
log_error(const char *fmt, ...);
log_fatal(const char *fmt, ...);
```

Each function takes a printf format string followed by additional arguments:

```c
log_trace("Hello %s", "world")
```

Resulting in a line with the given format printed to stderr:

```
 May 27 08:15:25 TRACE src/main.c:11: Hello world
```

#### Initializing the logger
The logger requires `logger_init()` to be ran before logging starts. It is also used to set the log level and desired log output location.

```c
logger_init(LOG_WARN, stderr);
```

#### LOG_USE_COLOR
If the library is compiled with `-DLOG_USE_COLOR` ANSI color escape codes will
be used when printing.


## License
This library is free software; you can redistribute it and/or modify it under
the terms of the MIT license. See [LICENSE](LICENSE) for details.
