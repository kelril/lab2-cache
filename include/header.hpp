// Copyright 2018 Kelril <your_email>
#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

#include <iostream>
#include <ctime>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
#include <chrono>
#include <string>

#define l1 262144               //кэш процессора 1-го уровня в байтах
#define l3 6291456              //кэш процессора 3-го уровня в байтах
#define iterations 1000         //количество итераций
#define translate 1024*1024     //перевод в Мбайты
typedef std::chrono::high_resolution_clock Clock;


class Cache {
public:
    Cache();

    std::map<int, int> number_of_experiments();

    void straight_pass();

    void back_pass();

    void random_pass();

    void resultWindow(std::string const &, size_t const &, int const &,
                      double const &);

    ~Cache() {}

private:
    void set_array(int);

    void set_straight(int);

    void set_back(int);

    void set_random(int, std::vector <size_t> &);


public:
    int *_array;
    std::map<int, int> _experiments;
};

#endif // INCLUDE_HEADER_HPP_
