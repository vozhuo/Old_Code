#include<iostream>
using namespace std;

class Fruit
{
private:
    double a,b;
public:
    virtual int input() { }
    virtual int total() { }
};
class Apple : public Fruit
{
private:
    double a,b;
public:
    virtual int input()
    {
        cin>>a>>b;
    }
    virtual int total()
    {
        return a*30*b;
    }
};
class Banana : public Fruit
{
private:
    double a,b;
public:
    virtual int input()
    {
        cin>>a>>b;
    }
    virtual int total()
    {
        return a*25*b;
    }
};
class Pear : public Fruit
{
private:
    double a,b;
public:
    virtual int input()
    {
        cin>>a>>b;
    }
    virtual int total()
    {
        return a*20*b;
    }
};

int main()
{
    Fruit* fruit;
    string fruit_name;
    double sum = 0.0;
    int cases;
    cin >> cases;
    for(int i = 1; i <= cases; i++)
    {
        cin >> fruit_name;
        if(fruit_name == "Apple")
            fruit = new Apple();
        if(fruit_name == "Banana")
            fruit = new Banana();
        if(fruit_name == "Pear")
            fruit = new Pear();
        fruit->input();
        sum += fruit->total();
        delete fruit;
    }
    cout << "Total Price : " << sum << endl;
    return 0;
}
