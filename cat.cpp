#include <iostream>
#include <Windows.h>

using namespace std;

class Cat{
    private:
    string ownname;
    int age;
    int speed;
    

    public:
    Cat(string ownname,int age,int speed){
        this->ownname=ownname;
        this->age=age;
        this->speed=speed;
    };
    ~Cat(){};
    
    char properties()
    {
        return printf("Имя кота %s\nВозраст кота %d лет\nСкорость кота %d км/ч",this->ownname.c_str(),this->age,this->speed);
    }

 
};



int main()
{
     // Set console code page to UTF-8 so console known how to interpret string data
    SetConsoleOutputCP(CP_UTF8);

    // Enable buffering to prevent VS from chopping up UTF-8 byte sequences
    //setvbuf(stdout, nullptr, _IOFBF, 1000);

    Cat cat1("Alex",5,25);
    cout<<cat1.properties() <<endl;
    //cout<<"Hello World the Cat's age is "<< obj.age;

    return 0;
}