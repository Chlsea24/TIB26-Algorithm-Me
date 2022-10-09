#include <iostream>
using namespace std;

struct syuDate {
    syuDate(int d, int m, int y):
        day(d),month(m),year(y){
        value_of_date=year*10000 + month*100 + day;
        }
    int day;
    int month;
    int year;
    int value_of_date;
};

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main(){
	
	int k, l, m, o, p, q;
	
	cout<<"Tgl lhir 1 : ";
	cin>>k;
	cout<<"bln lhir 1 : ";
	cin>>l;
	cout<<"thn lhir 1 : ";
	cin>>m;
	
	cout<<"Tgl lhir 2 : ";
	cin>>o;
	cout<<"bln lhir 2 : ";
	cin>>p;
	cout<<"thn lhir 2 : ";
	cin>>q;
	
    syuDate adate(k,l,m);
    syuDate adate2(o,p,q);
    if(adate.value_of_date<adate2.value_of_date)cout<<"the oldest date is: "
        <<adate.month<<'/'<<adate.day<<'/'<<adate.year<<endl;
    else cout<<"the oldest date is: "
        <<adate2.month<<'/'<<adate2.day<<'/'<<adate2.year<<endl;
    
    cout << "================"<<endl<<endl;
    
    Person p1;
    
    cout << "\n\nEnter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ", cin>>p1.age;
    cout << "Enter salary: ", cin>>p1.salary;

    cout << "\nIdentitas p1." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;
    
    /*Person p2;
    
    cout << "\n\nEnter Full name: ";
	cin.get(p2.name, 50);
    cout << "Enter age: ", cin>>p2.age;
    cout << "Enter salary: ", cin>>p2.salary;

    cout << "\nIdentitas p2." << endl;
    cout << "Name: " << p2.name << endl;
    cout <<"Age: " << p2.age << endl;
    cout << "Salary: " << p2.salary;*/

    return 0;
}
