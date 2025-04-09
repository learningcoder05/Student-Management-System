#include<iostream>
#include<vector>
using namespace std;
class Student{
    string name;
    int roll;
    float CGPA;
    vector<string> listOfCourses;
    public:
    Student(){
        name="john doe";
        roll=001;
        CGPA=9.0;
        listOfCourses={"Mathematics","FOCP"};
        cout<<"Hello\n";
    }
    Student(string n,int rn,float cg,string lC){
        name=n;
        roll=rn;
        CGPA=cg;
        listOfCourses.push_back(lC);
    }
};
int main(){
    Student student;
    Student student("Naman",001,9.5,"");
return 0;
}