#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([gui], [0.1], [neil@themcphails.uk])
AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_SRCDIR([info.c])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.
PKG_CHECK_MODULES([SDL], [sdl])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CHECK_FUNCS([atexit])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
