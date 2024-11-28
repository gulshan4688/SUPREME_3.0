#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    int id;
    int age;
    string name;
    int nos;

private:
    int *gpa;
    string gf;

public:
    // student constr
    Student()
    {
        cout << "student default constr called" << endl;
    }

    // parameterized constr
    Student(int id, int age, string name, int nos)
    {
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
    }
    // copy constsr
    Student(const Student &srcobj)
    {
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->gpa = srcobj.gpa;
    }
    void study()
    {
        cout << this->name << " studies" << endl;
    }
    void sleeps()
    {
        cout << this->name << " sleeps" << endl;
    }
    void bunk()
    {
        cout << this->name << " bunks" << endl;
    }
    // default destr
    ~Student()
    {
        cout << "student default destr called" << endl;
    }

private:
    void gfChatting()
    {
        cout << "student chats with gf" << endl;
    }
};
int main()
{
    Student A;
    A.id = 1;
    A.name = "mani";
    Student(1,2,"mani", 6);
    Student C=A;
    cout<<C.name<<endl;;
    return 0;
}