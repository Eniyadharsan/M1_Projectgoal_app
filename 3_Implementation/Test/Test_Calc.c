#include "unity.h"


#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_reminder(void);
void test_power(void);
void tes_modulus(void);

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
  RUN_TEST(test_reminder);
  RUN_TEST(test_power);
  RUN_TEST(test_modulus);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) 
{
  TEST_ASSERT_EQUAL(20, addition(10, 10));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1000, addition(500, 500));
}

void test_subtract(void)
{
  TEST_ASSERT_EQUAL(-1, subtraction(0, 1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(400, subtraction(500, 100));
}

void test_multiply(void) 
{
  TEST_ASSERT_EQUAL(0, multiplication(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiplication(2, 5));
}

void test_divide(void) 
{
  TEST_ASSERT_EQUAL(0, division(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, division(2, 2));
}

void test_remider(void) 
{
  TEST_ASSERT_EQUAL(0, reminder(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, reminder(2, 2));
}

void test_power(void) 
{
  TEST_ASSERT_EQUAL(1, power(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(4, power(2, 2));
}

void test_modulus(void) 
{
  TEST_ASSERT_EQUAL(1, modulus(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2, modulus(2, 4));
}