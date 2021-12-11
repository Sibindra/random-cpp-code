#include <iostream>
#include <string.h>
using namespace std;

class Student{
    char name[25];
    int weeklyExercise;
    float grade;

    public:
        // function to input data
        void inputData(){
            cout<<"Enter name: ";
            cin>>name;

            cout<<"Enter weekly exercise you accepted: ";
            cin>>weeklyExercise;

            cout<<"Enter the grade you got: ";
            cin>>grade;
        }

        // function to display data
        void displayData(){
            cout<<"Name: "<<name<<endl
            <<"Amount of weekly exercise you accepted: "<<weeklyExercise<<endl
            <<"Percise Grade: "<<garde<<endl
            <<"Rounded Grade: "<<(int)grade;
        }

        // function to sort by grade
        void gradeSort(){

        }

        // function to sort by name
        void nameSort(){

        }
};

int main(){
    Student studentArray[100];
    char prompt[2];

    // menu for all available actions
    cout<<"Menu"<<endl
    <<"1.Input Student Data."<<endl
    <<"2.Display Student Data."<<endl
    <<"3.exit"<<endl;

    // choice for action choosing
    cout<<"Enter your choice: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        do{
        studentArray->inputData();
        cout<<"Press y to continue"<<endl;
        cin>>prompt;

        } while(strcmp(prompt,"y")==0);

        break;
    case 2:
        // need to fill out terminating condition 
        for(int i=0;studentArray[i]!=-1;i++){
            studentArray->displayData();
        }
    default:
        break;
    }
   




    return 0;
}