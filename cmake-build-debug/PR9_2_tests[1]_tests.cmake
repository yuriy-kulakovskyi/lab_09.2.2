add_test([=[CheckTest.HandleCheck]=]  [==[/Users/yura_kulakovskyi/Documents/C++/AP/PR9/PR9_2_2/cmake-build-debug/PR9_2_tests]==] [==[--gtest_filter=CheckTest.HandleCheck]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[CheckTest.HandleCheck]=]  PROPERTIES WORKING_DIRECTORY [==[/Users/yura_kulakovskyi/Documents/C++/AP/PR9/PR9_2_2/cmake-build-debug]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  PR9_2_tests_TESTS CheckTest.HandleCheck)
