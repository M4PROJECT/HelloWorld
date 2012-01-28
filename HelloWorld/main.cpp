//
//  main.cpp
//  HelloWorld
//
//  Created by Chong Kim on 1/28/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <string>

class Person
{
    private:
        char* m_name;
        char* m_gender;
        int m_age;
    public:
        Person()
    {
        m_name = "unknown";
        m_gender = "unknown";
        m_age = 1;
    }
        Person(char* Name, char* Gender, int Age)
    {
        m_name = Name;
        m_gender = Gender;
        m_age = Age;
    }
        void Show()
    {
        std::cout << "Person info:\n";
        std::cout << m_name << "\n";
        std::cout << m_gender << "\n";
        std::cout << m_age << "\n";
    }
};

int main (int argc, const char * argv[])
{

    // insert code here...
    std::cout << "hello, first";
    std::cout << "Hello, World!\n";
    std::cout << "This is person object\n";
    Person p1;
    Person p2("Chong","Male",22);
    Person p3("Hong","Male",27);
    std::cout << "This is Person 1 info:\n";
    p1.Show();
    std::cout << "This is Person 2 info:\n";
    p2.Show();
    std::cout << "This is Person 3 info:\n";
    p3.Show();
    return 0;
}

