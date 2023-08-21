#include <iostream>

using namespace std;
class Student{
    string name;
    int rollno;
    float mark1,mark2,mark3,total;
public:
    void input(){
        cout<<"enter name  , rollno ,mark1,mark2, mark3";
        cin>>name>>rollno>>mark1>>mark2>>mark3;
    }
    void sum(){
        total = mark1+mark2+mark3;
    }
    void display(){
        cout<<name<<","<<rollno<<","<<total<<endl;
    }
    /***getter for totalmarks ****/
    float gettotal(){
        return(total);
    }
    /***getter for rollno ****/
    float getroll(){
        return(rollno);
    }
};
int main()
{
    int n,i,roll;
    cout<<"enter no of student";
    cin>>n;
    Student array[n];     /********************creation of array of object*/
    for(i=0;i<n;i++){
        array[i].input();
        array[i].sum();
    }
    cout<<"student info"<<endl;
    float max=array[0].gettotal();/*******assuming array index 0 is max total number*/
    float min=array[0].gettotal();/*******assuming array index 0 is minimum total number*/
    for(i=0;i<n;i++){
        array[i].display();
        if(max<array[i].gettotal()){
            max=array[i].gettotal();
            roll=array[i].getroll();/***getting rollno of max scored student*/
        }
    }cout<<"max ="<<max;cout<<"roll = "<<roll<<endl;;

    for(i=0;i<n;i++){
        if(min>array[i].gettotal()){
            min=array[i].gettotal();
            roll=array[i].getroll();
        }
    }
    cout<<"min ="<<min;cout<<" roll ="<<roll<<endl;
}
