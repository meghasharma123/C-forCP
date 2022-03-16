#include<unordered_map>
#include <iostream>

using namespace std;
class Student{
    public:
    string fname;
    string lname;
    string rollno;
    Student(string f,string l,string no){
        fname = f;
        lname = l;
        rollno = no;
    }
    bool operator==(const Student &s)const{
        return rollno == s.rollno;
    }
};
class HashFn{
    public:
    size_t operator()(const Student &s)const{
        return s.fname.length()+s.lname.length();
    }
};

int main()
{
    unordered_map<Student,int,HashFn>student_map;
    Student s1("Prateek","Narrang","010");
    Student s2("Rahul","Kumar","552");
    Student s3("Prateek","Saha","044");
    Student s4("Rahul","Kumar","023");
    student_map[s1]=10;
    student_map[s2]=552;
    student_map[s3]=44;
    student_map[s4]=23;
    for(auto s:student_map){
        cout<<s.first.fname<<" "<<s.first.rollno<<endl<<"     Marks "<<s.second<<endl;
    }
    return 0;
}
