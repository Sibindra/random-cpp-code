#include <iostream>
#include <string.h>
using namespace std;

int i,j,temp=0,count;

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
        // not running
        void displayData(Student s){
            cout<<"Name: "<<s.name<<endl
            <<"Amount of weekly exercise you accepted: "<<s.weeklyExercise<<endl
            <<"Percise Grade: "<<s.grade<<endl
            <<"Rounded Grade: "<<(int)s.grade<<endl;
        }

};

int main(){
    Student studentArray[100];
    char prompt[2];
    int choice;

    // menu for all available actions
    cout<<"Menu"<<endl
    <<"1.Input Student Data."<<endl
    <<"2.exit"<<endl;

    // choice for action choosing
    cout<<"Enter your choice: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        // running the inputData() function until user enters anything other than y
        do{
        studentArray->inputData();
        cout<<"Press y to continue"<<endl;
        cin>>prompt;

        // to find terminating condn counting how many data are inserted
        count++;

        } while(strcmp(prompt,"y")==0);

        // displaing the data
        for(int i=0;i<count;i++){
            studentArray->displayData(studentArray[i]);
        }

        break;

    default:
        cout<<"Invalid choice!"<<endl;
        break;
    }

    return 0;
}