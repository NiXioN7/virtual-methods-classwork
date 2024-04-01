#include <iostream>
using namespace std;
class Movement
{
public:
    virtual void movement()
    {
        
    }
};
class Swim:public Movement
{
    void movement() override
    {
        cout << "Бульк - бульк" << endl;
    }
};
class Teleport : public Movement
{
    void movement() override
    {
        int n = rand() % 100;
        cout << "опа и я исчез, а куда не знаю" << endl;
        if (n % 2 == 0)
        {
            cout << "Просчитался но где..." << endl;
        }
    }
};
class Fly: public Movement
{
    void movement() override
    {
        cout << "Ну все, бб, я полетел" << endl;
    }
};
class Lay :public Movement
{
    void movement() override
    {
        cout << "Все, я спать" << endl;
    }
};
class Person
{
public:
    void move(Movement* move)
    {
        move->movement();
    }
};
int main()
{
    setlocale(0, "ru");
    srand(time(NULL));
    Person person;
    Swim swim;
    person.move(&swim);
    Fly fly;
    person.move(&fly);
    Teleport tp;
    person.move(&tp);
}
