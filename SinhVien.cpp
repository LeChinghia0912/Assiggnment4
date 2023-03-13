// Employee class
#include <iostream>
#include <string>
using namespace std;
 
// Employee Class Declaration
 
class Employee
{
private:
   string name;        
   int idNumber;       
   string department;  
   string position;    
    
public:
   // Constructors
   Employee(string, int, string, string);
   Employee(string, int);
   Employee();
 
   // Mutators
   void setName(string n){ 
      name = n; 
      }
       
   void setIdNumber(int i){ 
      idNumber = i;
       }
       
   void setDepartment(string d){
       department = d; 
       }
       
   void setPosition(string p){ 
      position = p; 
      }
       
   // Accessors
   string getName() { 
      return name; 
      }
       
   int getIdNumber(){ 
      return idNumber; 
      }
       
   string getDepartment(){
       return department; 
       }
       
   string getPosition(){ 
      return position; 
      }
};
 
// Constructor #1
Employee::Employee(string n, int i, string d, string p)
{
   name = n;
   idNumber = i;
   department = d;
   position = p;
}
 
// Constructor #2
Employee::Employee(string n, int i)
{
   name = n;
   idNumber = i;
   department = "";
   position = "";
}
 
// Constructor #3, default constructor
Employee::Employee()
{
   name = "";
   idNumber = 0;
   department = "";
   position = "";
}
 
// Function prototype
void displayEmployee(Employee);
 
// Driver program to demonstrate the class
int main()
{
   string name;
   cout << "nhap ten nhan vien: ";
   cin >> name;
   int idNumber;
   cout << "nhap id nhan vien: ";
   cin >> idNumber;
   string department;
   cout << "nhap nghe nghiep nhan vien:";
   cin >> department;
   string position;
   cout << "nhap chuc vus nhanh vien: ";
   cin >> position;
   
   cout << "TÊN NHÂN VIÊN: " << name << endl;
   cout << "MÃ NHÂN VIÊN: " << idNumber << endl;
   cout << "PHÒNG Ở: " << department << endl;
   cout << "CHỨC VỤ: " << position << endl;
   

   return 0;
    

}