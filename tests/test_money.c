#include <check.h>
#include <stddef.h>
#include "../src/money.h"

START_TEST(money_creation_and_deletion) {
	money_t *m = money_new(10, "PLN");
	ck_assert(m != 0);
	money_delete(m);
} END_TEST

Suite* money_suite(void) {
	size_t test_cases = 1;
	TCase* tc[test_cases];
	//fill test cases with unit tests
	tc[0] = tcase_create("First case");
	tcase_add_test(tc[0], money_creation_and_deletion);
	//fill suite with test cases
	Suite* suite = suite_create("money_t");
	for(size_t i = 0; i < test_cases; i++) suite_add_tcase(suite, tc[i]);

	return suite;
}

int main(void) {
	Suite* suite = money_suite();
	SRunner* srunner = srunner_create(suite);
	srunner_run_all(srunner, CK_VERBOSE);
	int failures = srunner_ntests_failed(srunner);
	srunner_free(srunner);

	return failures;
}
