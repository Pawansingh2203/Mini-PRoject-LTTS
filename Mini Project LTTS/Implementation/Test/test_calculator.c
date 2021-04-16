
#include "C:\Users\jarvis\Documents\LNTTS\Mini Project LTTS\Unity\unity.h"
#include <C:\Users\jarvis\Documents\LNTTS\Mini Project LTTS\headerforcalc.h>

/* Modify these two lines according to the project */
#include "C:\Users\jarvis\Documents\LNTTS\Mini Project LTTS\headerforcalc.h"
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */
void test_add(void) {
  TEST_ASSERT_EQUAL(10, add(7, 3));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(150, add(50, 100));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-6, subtract(0, 6));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(90, subtract(100, 10));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, multiply(10, 10));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3, divide(9, 3));
}
