#include <iostream>

using namespace std;
class hero
{
private:
    int health;

public:
     
    char level;
    char *name;
// simple constructor
    hero(){
        cout<<"constructor called"<<endl;
        name = new char[100];
    }

// parameterised constructor
    hero(int health){
        cout<<"this->"<<this <<endl;
        this->health=health;

    }

    hero(int health, char level)
    {
        // cout<<"this->"<<this <<endl;
        this->health = health;
        this->level = level;

    }

    //copy constructor 
    hero(hero& temp)
    {
        cout<<"copy constructor called" <<endl;
      this->health = temp.health;
      this->level = temp.level;
    }

    int gethealth()
    {
        return health;
    }

    int getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;
    }

    void print()
    {   cout<<endl;
        cout<<"Name: "<<this->name<<" ";
        cout<<"level "<<this->level<<" ";
        cout<<"health "<<this->health<<" ";
        cout<<endl;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }
};

int main()
{    
    hero hero1;
     
    hero1.sethealth(12);
    hero1.setlevel('f');

    char name[7]="Ankit";
    hero1.setname(name);

    hero1.print();

    hero hero2(hero1);

    hero2.print();

    hero1.name[0]='G';
    hero1.print();










    // hero s(70, 'k');

    // s.print();

// copy constructor
    // hero r(s);
    // r.print();

    //ritesh.health = suresh.health;
    //ritheh.level = suresh.level



//     // object created statically  
//     hero ramesh(10);
//     cout<<"address of ramesh " << &ramesh <<endl;
//     ramesh.gethealth();

//     hero temp(30,'a');
//     cout<<"address of ramesh" << &temp <<endl;

//    // object created dynamically

//    hero *b = new hero(12);


   /* hero a;
    a.sethealth(80);
    a.setlevel('b');
    cout << "level is :" << a.level << endl;
    cout << "helath is :" << a.gethealth() << endl;

    // dynamacilly allocating the memory

    hero *b = new hero;

    b->sethealth(48);
    b->setlevel('c');
    // cout<<"level is :"<<(*b).level<<endl;
    // cout<<"helath is :"<<(*b).gethealth()<<endl;

    cout << "level is :" << b->level << endl;
    cout << "helath is :" << b->gethealth() << endl;

    //     // creation of object
    //     hero ramesh;
    //     cout<<"Ramesh health is "<<ramesh.gethealth()<<endl;
    //     ramesh.sethealth(50) ;
    //     cout<<"size :"<<sizeof(ramesh)<<endl;

    //     cout<<"health is "<<ramesh.gethealth()<<endl;
    //     return 0;*/
}
