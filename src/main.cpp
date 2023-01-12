#include<iostream>
#include "controller.h"
#include "interface.h"

using namespace std;

int main()
{
    cout << "App is running" << endl;
    Controller *control = new Controller;
    Helper *instance = new Helper;
    instance->init();
    instance->function1();

    return 0;
}