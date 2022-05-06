#ifndef _MONEY_H_
#define _MONEY_H_

#include <stddef.h>

typedef struct _money_t money_t;

money_t* money_new(size_t amount, const char* currency);
void money_delete(money_t* money);

#endif
