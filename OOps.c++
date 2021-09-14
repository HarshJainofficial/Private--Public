#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    string name;
};
int main()
{
    Student Output;
    Output.id = 12;
    Output.name = "Annonymous";

    cout << "This is " + Output.name   << " and This is id " <<  Output.id  << endl ;
    cout << "This is Just update case" ;
    return 0;
}