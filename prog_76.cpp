#include<iostream>
#include<iomanip>
using namespace std;

// example of virtual base classes

class student{
    protected:
        int roll_number;
        void display_roll_number(void);
    public:
        void set_roll_number(int roll);
};

void student :: set_roll_number(int roll){
    roll_number = roll;
    return;
}

void student :: display_roll_number(void){
    cout << "Roll number : "<<roll_number<<endl;
    return;
}

class PCM : virtual public student{
    protected:
        int physics_marks;
        int chemistry_marks;
        int math_marks;
        void display_PCM_marks(void);
    public:
        void set_PCM_marks(int,int,int);
};

void PCM :: set_PCM_marks(int P,int C,int M){
    physics_marks = P;
    chemistry_marks = C;
    math_marks = M;
    return;
}

void PCM :: display_PCM_marks(void){
    cout<<"Physics marks : "<<physics_marks<<endl<<"Chemistry marks : "<<chemistry_marks<<endl<<"Math marks : "<<math_marks<<endl;
    return;
}

class sports : virtual public student{
    protected:
        int sport_marks;
        void display_sport_marks(void);
    public:
        void set_sport_marks(int);
};

void sports :: set_sport_marks(int spmarks){
    sport_marks = spmarks;
    return;
}

void sports :: display_sport_marks(){
    cout << "Sport marks : "<<sport_marks<<endl;
    return;
}

class result : public PCM,public sports{
    int result;
    public:
        void set_result(void){
            result = physics_marks+math_marks+chemistry_marks+sport_marks;
            return;
        }
        void display(void){
            display_roll_number();
            display_PCM_marks();
            display_sport_marks();
            cout << "Obtained percentage = "<<(result)/4<<"%"<<endl;
            return;
        }
};

int main(void)
{
    result arko;
    arko.set_roll_number(53);
    arko.set_PCM_marks(95,92,95);
    arko.set_sport_marks(92);
    arko.set_result();
    arko.display();
    return(0);
}