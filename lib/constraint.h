#ifndef _CONSTRAINT_H
#define _CONSTRAINT_H

#include <stdint.h>

typedef struct _constraint constraint_t;
typedef unsigned int value_t;

constraint_t* constraint_init(value_t value);
void constraint_free(constraint_t *con);
void constraint_set(constraint_t *con, uint32_t prefix, int len, value_t value);
value_t constraint_lookup_ip(constraint_t *con, uint32_t address);
uint64_t constraint_count_ips(constraint_t *con, value_t value);
uint32_t constraint_lookup_index(constraint_t *con, uint64_t index, value_t value);
void constraint_paint_value(constraint_t *con, value_t value);

#endif //_CONSTRAINT_H
