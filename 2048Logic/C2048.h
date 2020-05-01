#pragma once
#include <iostream>
#include <vector>

class C2048
{
    std::vector<std::vector<int>> v;
    size_t size;
    unsigned long score;
    const int defaultValue = 0;

    int generateValue(int min, int max);
    int clamp(int min, int max, int val);
    int modify(int *first, int *second);
    int getDigitCount(int value);
    std::string getOutString(int digitCount);
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();

public:
    C2048() :size(0), score(0){}
    C2048(size_t _size);
    int addNewValue();
    void print();
    void toLeft();
    void toRight();
    void toUp();
    void toDown();
    unsigned long getScore() const;

};

