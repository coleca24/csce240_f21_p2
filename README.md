# Project 1 CSCE 240 Fall 2021 (30 points)
In this project, you will be creating your own string class (called SuperString). At this point we have used the `std::string` object (https://www.cplusplus.com/reference/string/string/) in C++ quite a bit. You should now have an idea of how to use some of the functions it contains (like the find and replace). In this project, you will create an object that mimicks some of this functionality and also builds on it! 

Your SuperString object is already defined for you in the `SuperString.h` file in your GitHub repo. Below I will describe more details about all of the variables and functions. **Make sure that you read this all the way through before starting! There is important information at the end about how to run the code!**

## SuperString member variables: 
- `char *data`: a dynamic pointer array that holds each character of the string within that SuperString object
- `int size`: the size of the `data` array (how many characters it holds)

## SuperString Constructors: 
- `SuperString()`: The default constructor. Should: 
  - set `size` to 0 
  - allocate the `data` array to a new char array of size `size`
- `explicit SuperString(std::string)`: Alt. Constructor #1. Should:
  - set `size` to the length of the string passed in
  - allocate the `data` array to a new char array of size `size`
  - fill the contents of the `data` array with the contents of the string passed in
- `SuperString(int, char)`: Alt. Constructor #2. Should:
  - set `size` to the value of the int passed in 
  - allocate the `data` array to a new char array of size `size`
  - fill all contents of the `data` array with the character passed in
- `SuperString(const SuperString&)`: Copy Constructor. Should: 
  - set `size` to the size of the object passed in 
  - allocate the `data` array to a new char array of size `size`
  - fill all contents of the `data` array with the same contents as the passed object's data

## SuperString Destructor: 
- `~SuperString()`: Should deallocate the data array

## SuperString Member Functions

## Timing of Commits
### Commit #1 Due 9/29 by Midnight
Functions to complete: 
1. `SuperString();`
2. `explicit SuperString(std::string);`
3. `SuperString(int, char);`
4. `SuperString(const SuperString&);`
5. `~SuperString();`
6. `int length();`
7. `int find(char, int start = 0);`
8. `int find(std::string, int start = 0);`
9. `SuperString substr(int, int);`

### Commit #1 Due 10/6 by Midnight
Functions to complete:
1. `SuperString reverse(const SuperString&);`
2. `SuperString replace(int, int, std::string);`
3. `void push_back(char);`
4. `void append(std::string);`
5. `void append(const SuperString&);`
6. `bool removeAll(char);`
