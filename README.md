# C++ Helpers

Compile file:
g++ file_name -o test

Run file and interact:
./test

| File name        		| Description 												   |
| --------------------- |------------------------------------------------------------- |
| 0_hello_world.cpp 		| - Hello world to C++ |
| 1_variables.cpp			| - Using variables |
| 2_data_structures.cpp		| - Using basic data structures (tuples, pointers, array, list, map). Compile using flag: -std=c++11 |
| 3_conditionals.cpp		| - Using if |
| 4_loops.cpp				| - Using loops (While, do and For) |
| 4_loops.cpp				| - Using loops (While, do and For) |
| 5_functions_methods.cpp 	| - Using functions and methods |
| 6_classes.cpp 			| - Create Enumeration, Classes and Inheritance |
| 7_libraries.cpp 			| - Using libraries (time, math and random). Compile using flag: -std=c++11 |
| 8_io.cpp 					| - Read standard input and manipulate files |
| 9_value_transform.cpp		| - Value to string and string to value functions |
| persons.h					| - Class created to be exported - Declaration |
| person.cpp				| - Class created to be exported - Implementation |
| 10_importing_files.cpp	| - Import file |


Compile the last one using:
g++ person.h person.cpp 10_importing_files.cpp -o test