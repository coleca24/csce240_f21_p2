#ifndef SUPERSTRING_H_
#define SUPERSTRING_H_
// Author: <Enter name here>
// Email: <Enter email here>
// Section #: <Enter section here>
// Copyright 2021 <Enter Name Here>
// Modified from template code @coleca24 GitHub
#include <iostream>
#include <string>

class SuperString {
 public:
    // Constructors
   //  SuperString();
   //  explicit SuperString(std::string);
   //  SuperString(int, char);
   //  SuperString(const SuperString&);

    // Destructor
   //  ~SuperString();

    // Member Functions
    void print();
    char get(int);
   //  int find(char, int start = 0);
   //  int find(std::string, int start = 0);
   //  int length();
   //  SuperString substr(int, int);

   //  SuperString reverse();
   //  SuperString replace(int, int, std::string);
   //  void push_back(char);
   //  void append(std::string);
   //  void append(const SuperString&);
   //  bool removeAll(char);

   // Extra Credit
   //  void replace(char, char);
   //  void replace(std::string, std::string);
   //  void replace(char, std::string);
   //  bool isUpper();
   //  bool isLower();
   //  bool isTitleCase();

 private:
    // Member Variables
    char *data;
    int size;
};



#endif  // SUPERSTRING_H_
