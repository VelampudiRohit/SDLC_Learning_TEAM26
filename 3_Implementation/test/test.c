/**
 * @file test.c
 * @author SDLC Team 26
 * @brief 
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"
#include "games.h"
#include "unity_internals.h"


#define PROJECT_NAME    "All_in_One_Gameportal"


/* Hangman test cases */
void test_showHangman(void);
void test_aplha_in_list(void);
void test_checkalpha(void);
void test_addword(void);

/*Snake game test cases*/
void test_setup(void);
void test_draw(void);
void test_input(void);
void test_logic(void);




char userinput[10];


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/**
 * @brief Start of the application test
 * 
 * @return int 
 */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_showHangman);
  RUN_TEST(test_aplha_in_list);
  RUN_TEST(test_checkalpha);
  RUN_TEST(test_addword);
  /*------------------------*/
  RUN_TEST(test_setup);
  RUN_TEST(test_draw);
  RUN_TEST(test_input);
  RUN_TEST(test_logic);
  
  
  
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}


/**
 * @brief Test function for showHangman()
 * 
 */
void test_showHangman() {
  TEST_ASSERT_EQUAL(5, showHangman(5));
  
  TEST_ASSERT_EQUAL(0, showHangman(0));

  TEST_ASSERT_EQUAL(1, showHangman(1));

  TEST_ASSERT_EQUAL(4, showHangman(4));

  TEST_ASSERT_EQUAL(-1, showHangman(9));  
}

/**
 * @brief test function for aphla_in_list()
 * 
 */
void test_aplha_in_list() {
  strcpy(userinput,'adfe');
  TEST_ASSERT_EQUAL(1, aplha_in_list('e'));

  TEST_ASSERT_EQUAL(0, aplha_in_list('g'));

  TEST_ASSERT_EQUAL(1, aplha_in_list('f'));

  TEST_ASSERT_EQUAL(0, aplha_in_list('b')); 
}

/**
 * @brief test function for checkalpha()
 * 
 */
void test_checkalpha() {
  TEST_ASSERT_EQUAL(1, checkalpha('e'));
  
  TEST_ASSERT_EQUAL(0, checkalpha(8));

  TEST_ASSERT_EQUAL(0,checkalpha('_'));

  TEST_ASSERT_EQUAL(1,checkalpha('a'));

}

/**
 * @brief test function for addword()
 * 
 */
void test_addword() {
  TEST_ASSERT_EQUAL(1, addword());

}

/**
 * @brief test function for setup
 * 
 */
void test_setup()
{
  TEST_ASSERT_EQUAL(1, setup());
}

/**
 * @brief test function for draw
 * 
 */
void test_draw()
{
  TEST_ASSERT_EQUAL(1, draw());
}

/**
 * @brief test function for input()
 * 
 */
void test_input()
{
  TEST_ASSERT_EQUAL(1, input());
}

/**
 * @brief test function for logic()
 * 
 */
void test_logic()
{
  TEST_ASSERT_EQUAL(1, logic());
}


