#include <iostream>
using namespace std;

class _enemy{
    protected:
    int attackpower;
    public:
    void setattackpower(int p){
        attackpower = p;
    }
};
class _ninja: public _enemy{
    public:
    void attack(){
        cout<<"I am a ninja with attack power: "<<attackpower<<endl;
    }
};

class _monster:public _enemy{
    public:
    void attack(){
        cout<<"I a monster with attack power: "<<attackpower<<endl;
    }
};
int main(){
    _ninja n;
    _monster m;
    _enemy *enemy1=&n;
    _enemy *enemy2=&m;

    enemy1->setattackpower(67);
    enemy2->setattackpower(89);

    n.attack();
    m.attack();
    return 0;

}