#include "money.h"
#include <stdlib.h>

struct _money_t {
	size_t amount;
	const char* currency;
};

money_t* money_new(size_t amount, const char* currency) {
	return NULL;
}

void money_delete(money_t* m) {
}
