#ifndef MAIN_H
#define MAIN_H

#define CHECK_EVEN(x) ((x) % 2 == 0)
#define CHECK_POSITIVE(x) ((x) > 0)

#define EVEN_MSG(x) printf("Число %d є парним\n", (x))
#define ODD_MSG(x) printf("Число %d є непарним\n", (x))
#define POSITIVE_MSG(x) printf("Число %d є додатнім\n", (x))
#define NEGATIVE_MSG(x) printf("Число %d є від'ємним\n", (x))

void check_numbers(int first, ...);

#endif
