#include <iostream>
using namespace std;

class employee      // this is how you declare a class
{
public:     // only the public access modifier type allows you to access the
            // inside content inside of a class
            
    string Name;    // and inside those classes you can write normal code
    string Company;
    int Age;

    void print()    // this function will print all the variable content
    {
        cout << "My name is " << Name << endl;
        cout << "I work for " << Company << endl;
        cout << "and I am " << Age << "years old" << endl;
    }

    employee(string name, string company, int age)      // so this is a constructor
    {
        Name = name;
        Company = company;
        Age = age;
    }

};

class employee_private      // this is how you declare a class
{
private:    // the private access modifier makes all the content inside
            // your class accessable only inside of the class

    string Name;    // and inside those classes you can write normal code
    string Company;
    int Age;

};

class employee_protected      // this is how you declare a class
{
protected:    // the protected access modifier makes all the content inside
              // your class accessable only inside of the class

    string Name;    // and inside those classes you can write normal code
    string Company;
    int Age;

};

int main()
{
    /*
    employee employee1;                 but instead of doing this
    employee1.Name = "gabriel";         let's make our own constructor
    employee1.Company = "turn";
    employee1.Age = 19;
    */

    employee employee1 = employee("gabriel", "fork", 19);
    employee1.print();


    return 0;
}