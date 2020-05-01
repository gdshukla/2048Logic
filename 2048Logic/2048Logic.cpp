// 2048Logic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "C2048.h"
#include "utility.h"

void test()
{
    const int count = 10;
    int a[count];
    int max = INT_MIN;      // assign minimuj possible value so that every possible int is above or equal to it
    int number = 0;
    std::cout << "enter values:";
    for (int i = 0; i < count; i++)
    {
        std::cin >> number;
        a[i] = number;
        if (number > max)
        {
            max = number;   // current number if below previously stored number, save it as max
        }
    }
    std::cout << max;
}

void test1()
{
    int userNum[10];
    int maxVal = 0;

    for (int i = 0; i < sizeof(userNum)/sizeof(int); i++) {
        std::cin >> userNum[i];
    }
    for (int i = 0; i < sizeof(userNum) / sizeof(int); i++) {
        if (userNum[i] > maxVal) {
            maxVal = userNum[i];
        }
    }
    std::cout << maxVal << std::endl;
}
int main()
{
    int x = 5;
    int &y = x;
    int *z = &y;
    x = 1;
    std::cout << (x + y + z);
//    test1();
    const size_t size = 8;
    C2048 g(size);
    std::string s;

    while (1)
    {
        gotoxy(0, 0);
        if (g.addNewValue() == 0)
        {
            //gotoxy(0, 5);
            //std::cout << "All spots filled ...";
        }
        g.print();
        gotoxy(0, size+1);
        std::cout << "Scroe: " << g.getScore();
        gotoxy(0, size+2);

        int v = getchar();
        if (v == 'q')
        {
            break;
        }
        std::getline(std::cin, s);
        gotoxy(0, 0);
        switch (v)
        {
        case 'w':
        case 'W':
            g.toUp();
            g.print();
            break;
        case 's':
        case 'S':
            g.toDown();
            g.print();
            break;
        case 'a':
        case 'A':
            g.toLeft();
            g.print();
            break;
        case 'd':
        case 'D':
            g.toRight();
            g.print();
            break;
        default:
            continue;
        }


        //std::cout << "up\n";
        //g.toUp();
        //g.print();
        //std::cout << "left\n";
        //g.toLeft();
        //g.print();
        //std::cout << "down\n";
        //g.toDown();
        //g.print();
        //std::cout << "right\n";
        //g.toRight();
        //g.print();
    }



    std::cout << "Hello World!\n";
}

