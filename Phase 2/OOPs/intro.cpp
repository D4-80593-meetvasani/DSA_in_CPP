#include<iostream>
#include <cstring>
using namespace std;

class Hero

{
//properties
    
    private:
    int health;

    public:
    char level ;
    char *name;
    static int timeTocomplete;


    ///------------------------constructor calling------------------------->
    Hero(){
        cout<<endl;
        cout<<"Kans structor called !!!"<<endl;
        cout<<endl;
        name  = new char[100];
    }


    //<-------------------parameterized kanstructor----------------------->

    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this -> health = health;
        cout<<endl;
        cout<<"Parameterized kans tructor called !!!"<<endl;
        cout<<endl;
    }

    //<-----------------DOUBLE parameterized kanstructor----------------->

     Hero(int health,char level){
        this -> health = health;
        this -> level = level;
        cout<<endl;
        cout<<"double Parameterized kans tructor called !!!"<<endl;
        cout<<endl;
    }
    //<----------------------- copy kanstructor------------------------->

    Hero(Hero& temp){
        //===================//
        // deep copy //

        char *ch = new char[strlen(temp.name)+1];

        strcpy(ch,temp.name);

        this->name=ch;

        //===================// 
        cout<<endl;
        cout<<"Copy kans tructor called !!!"<<endl;
        cout<<endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    // <------------------------------------------------------------------>


    void print(){
        cout<<endl;
        cout<<"Name is "<<this->name<<endl;
        cout<<endl;

        cout<<"Health is "<<health<<" || & level is "<<level<<endl;
        cout<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }

    void setName(char name[]){
        strcpy(this->name ,name);
    }

    static int random(){
        return timeTocomplete;
    }
    // <===============================Destructor=================================>

    ~Hero(){
        cout<<endl;
        cout<<"Bhrata Destructor called !!!"<<endl;
        cout<<endl;
    }

};

 int Hero :: timeTocomplete = 5;
 

int main()
{

    // cout<<Hero::timeTocomplete<<endl;
    cout<<Hero::random()<<endl;

    // Hero Drona;                                 }    NOT Recommended                     
    // cout<<Drona.timeTocomplete<<endl;           }    NOT Recommended           


    // <==========================Destructor=======================================>

        // Hero Duryodhan;

        // Hero *Dushashan = new Hero;

        // delete Dushashan;

    //<========================Shallow and deep copy======================================>

    // Hero Maharathi;
    // Maharathi.setHealth(100);
    // Maharathi.setLevel('M');
    // char name[7] = "Karna";
    // Maharathi.setName(name);

    // Maharathi.print();

    //<========================Default copy constructor===================================>


    // Hero Angraj(Maharathi);
    // Angraj.print();

    // <__________________ OR ____________>

    // Hero Angraj = Maharathi;
    // Angraj.print();

    // <------------------------------------>

    // Maharathi.name[0] = 'V';
    // Maharathi.print();
    // Angraj.print();
    
    // <------------copy assignment operator------------------->

    // Maharathi = Angraj;
    // Maharathi.print();
    // Angraj.print();

    //<========================== COPY KANSTRUCTOR ====================================>    

    // Hero Nakul(70,'H');
    // Nakul.print();

    // Hero Sahadev(Nakul);
    // Sahadev.print();

    //=================================================================================>

    //object creation

    //<---------------------------static allocation----------------------------------->
    
    //<---------------Default kanstructor (no parameters)------------------------------>

    // Hero Arjun;
    // Arjun.print();


    //<-------------------------single parameterized kanstructor----------------------->

    // Hero Arjun(100);
    // Arjun.print();
    
    // cout<<Arjun.getHealth()<<endl;
    // cout<<"Address of arjun "<<&Arjun<<endl;

    //<-------------------------double parameterized kanstructor--------------------->

    // Hero Drona(100,'B');   
    // Drona.print();

    /*
<======================================================>
    // Arjun.health=70;
    Arjun.level='g';

    // cout<<"size : "<<sizeof(h1)<<endl;

    // cout<<"Health is "<<Arjun.health<<endl;

    cout<<"Health is "<<Arjun.getHealth()<<endl;

    Arjun.setHealth(50);//using setter

    cout<<"Health is "<<Arjun.getHealth()<<endl;

    Arjun.setLevel('G');

    cout<<"Level is "<<Arjun.level<<endl;
<======================================================>
    */


 //<------------------------------dynamic allocation---------------------------------->

//<------------------------------------------------------>

    // Hero *Bhim = new Hero;
    //  cout<<"Health is "<<(*Bhim).getHealth()<<endl;
    //  (*Bhim).setHealth(100);
    //   cout<<"Health is "<<Bhim->getHealth()<<endl;
    // (*Bhim).setLevel('V');
    // cout<<"Level is "<<Bhim->level<<endl;

//<------------------------------------------------------>

    return 0;
}