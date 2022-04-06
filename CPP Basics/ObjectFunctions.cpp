#include <iostream>

using namespace std;

class Student{
    
    private :
    string name;
    string major;
    double gpa;
    
    public :
    
    Student(string pName, string pMajor, double pGpa){
        setName(pName);
        setMajor(pMajor);
        setGpa(pGpa);
    }
    
    void setName(string pName){
        name = pName;
    }
    void setMajor(string pMajor){
        if(pMajor == "Computer Science" || pMajor == "Business" || pMajor == "Art"){
            major = pMajor;
        }else{
            cout << "Invalid Major (Computer Science - Business - Art";
            major = "Invalid Major";
        }
        
    }
    void setGpa(double pGpa){
        if(pGpa<=5.5 && pGpa >= 2.0){
            gpa = pGpa;
        }else{
            cout << "Invalid GPA (2.0-5.5)";
            gpa = 0;
        }
        
    }
    
    bool hasHonors(){
        if(gpa>=3.5){
            return true;
        }else{
            return false;
        }
    }
    
    string getName(){
        return name;
    }
    
    string getMajor(){
        return major;
    }
    
    double getGpa(){
        return gpa;
    }
};

int main() {
    Student student1("Jim","Psychology",3.6);
    Student student2("Pam","Art",2.4);
    cout << student1.getMajor() << endl;
    cout<< "Is Jim on the Honorable List : " << student1.hasHonors() << endl;
    cout<< "Is Pam on the Honorable List : " << student2.hasHonors() << endl;
    // BOOLEAN VALUES GET PRINTED OUT AS 1 AND 0
    return 0;
}
