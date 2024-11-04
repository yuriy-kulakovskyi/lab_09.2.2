#include <stdio.h>
#include "../include/main.h"
#include <stdarg.h>
#include <cstdarg>
#include <cstdio>

#include <cstdarg>
#include <cstdio>

#define CHECK_EVEN(num) ((num) % 2 == 0)
#define EVEN_MSG(num) printf("Number %d is even.\n", num)
#define ODD_MSG(num) printf("Number %d is odd.\n", num)

#define CHECK_POSITIVE(num) ((num) > 0)
#define POSITIVE_MSG(num) printf("Number %d is positive.\n", num)
#define NEGATIVE_MSG(num) printf("Number %d is negative.\n", num)

void check_numbers(int first, ...) {
  va_list marker;
  va_start(marker, first);

  int i = first;
  while (true) {
#ifdef CHECK_EVEN
    if (CHECK_EVEN(i)) {
      EVEN_MSG(i);
    } else {
      ODD_MSG(i);
    }
#endif

#ifdef CHECK_POSITIVE
    if (CHECK_POSITIVE(i)) {
      POSITIVE_MSG(i);
    } else {
      NEGATIVE_MSG(i);
    }
#endif

    i = va_arg(marker, int);
    if (i == -1) {
      break;
    }
  }
  va_end(marker);
}
