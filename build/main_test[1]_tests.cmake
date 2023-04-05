add_test([=[Project.Demo]=]  /Users/vlzqz/school/AVelazquez-project7/build/main_test [==[--gtest_filter=Project.Demo]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Project.Demo]=]  PROPERTIES WORKING_DIRECTORY /Users/vlzqz/school/AVelazquez-project7/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  main_test_TESTS Project.Demo)
