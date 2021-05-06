#include <iostream>
using namespace std;

class employee      // this is how you declare a class
{
public:     // only the public access modifier type allows you to access the
            // inside content inside of a class
            
    string name;    // and inside those classes you can write normal code
    string company;
    int Age;

};

class employee_private      // this is how you declare a class
{
private:    // the private access modifier makes all the content inside
            // your class accessable only inside of the class

    string name;    // and inside those classes you can write normal code
    string company;
    int Age;

};

class employee_protected      // this is how you declare a class
{
protected:    // the protected access modifier makes all the content inside
              // your class accessable only inside of the class

    string name;    // and inside those classes you can write normal code
    string company;
    int Age;

};

int main()
{
    employee employee1;
    employee1.name = "gabriel";
    employee1.company = "turn";
    employee1.Age = 19;

    return 0;
}