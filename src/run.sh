#!/bin/bash

gcc -g -Wextra -Wall -Werror -pedantic -o assert_test assert_test.c
gcc -g -Wextra -Wall -Werror -pedantic -o gdb_test1 gdb_test1.c
gcc -g -Wextra -Wall -Werror -pedantic -o gdb_test2 gdb_test2.c
gcc -g -Wextra -Wall -Werror -pedantic -o valgrind_test1 valgrind_test1.c
gcc -g -Wextra -Wall -Werror -pedantic -o valgrind_test2 valgrind_test2.c

