#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Student{
    string name;
    int roll;
    float CGPA;
    vector<string> listOfCourses;
    public:
    Student(){
        name="John Doe";
        roll=001;
        CGPA=9.0;
        listOfCourses={"Mathematics","FOCP"};
    }

    Student(string n,int rn,float cg,string lC){
        name=n;
        roll=rn;
        CGPA=cg;
        listOfCourses.push_back(lC);
    }

    Student(Student &t){
        name=t.name;
        roll=t.roll+1;
        CGPA=t.CGPA;
        listOfCourses=t.listOfCourses;
    }

    void updateCGPA(){
            float c;
            cout<<"Enter updated CGPA: ";
            cin>>c;
            if(c>10 || c<0){
                cout<<"Invalid CGPA."; 
            }
            else{
                CGPA==c;
            }
        
    }
    void displayInfo(){
        cout<<"----------Student Records----------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<roll<<endl;
        cout<<"CGPA: "<<CGPA<<endl;
        cout<<"Courses: ";
        for(auto x:listOfCourses){
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<"----------###############----------"<<endl;
    }

    // Functionality
    void checkDuplicacy(){
        sort(listOfCourses.begin(),listOfCourses.end());
        auto it=unique(listOfCourses.begin(),listOfCourses.end());
        listOfCourses.erase(it,listOfCourses.end());
        cout<<"Removed duplicate Subjects."<<endl;
    }
    void addNewCourses(){
        if(listOfCourses.size()>=6){
            cout<<"Maximum Number of Subjects reached."<<endl;
            return;
        }
        else{
        int n;
        int c=6-listOfCourses.size();
        cout<<"Enter number of subjects to add: "<<endl;
        cin>>n;
        if(n<=c){
        string newCourse;
        for(int i=1;i<=n;i++){
            if(i==1){
            cout<<"Enter name of "<<i<<"st subject: ";
            }
            if(i==2){
            cout<<"Enter name of "<<i<<"nd subject: ";
            }
            if(i==3){
            cout<<"Enter name of "<<i<<"rd subject: ";
            }
            if(i>3){
            cout<<"Enter name of "<<i<<"th subject: ";
            }
            cin>>newCourse;
            listOfCourses.push_back(newCourse);
        }
        checkDuplicacy();
        }
        else{
            cout<<"Maximum number of subjects reached."<<endl;
            return;
        }
    }
    }
    ~Student(){
        // clears data ;
    }
};

class basicFunctions: public Student {
    public:
    void menu(){
        cout<<"----------Welcome to Student Management Student----------"<<endl;
        cout<<"What do you want to do?"<<endl;
        cout<<"1. Add new course"<<endl;
        cout<<"2. Update cgpa"<<endl;
        cout<<"3. Display Student records"<<endl;
    }

    int opt(){
        int opt;
        cout<<"Enter your option: ";
        cin>>opt;
        return opt;
    }
};

// class StudentManagementSystem:public Student{
//     vector<Student> stu;
//     public:
//     void addNewStudent(){
//         string n;
//         int rn;
//         float cg;
//         string listOfCourse;
//         cout<<"Enter name of new student: ";
//         cin>>n;
//         cout<<"Enter roll no. of new student: ";
//         cin>>rn;
//         cout<<"Enter cgpa of new student: ";
//         cin>>cg;
//         cout<<"Enter courses of new student: ";
//         cin>>listOfCourse;

//         // cin>>Student::;
//     }

//     int findRollNumber(string n){
//         int roll;

//         return roll;
//     }

//     void displayAllRecords(){

//     }

//     void collectionOfObjects(){
//         // vector<Student> stu;
//     }
// };
int main(){
    Student student;
    basicFunctions b;
    char ans='y';
    while(ans=='y'){
    b.menu();
    switch (b.opt())
    {
    case 1:
        student.addNewCourses();
        break;
    case 2:
        student.updateCGPA();    
        break;
    case 3:
        student.displayInfo();    
    default:
        break;
    }
    cout<<"Wanna continue?(y/n): ";
    cin>>ans;
}
}