#include <iostream>
using namespace std;

void nilai(){	
	int score;
	char grade;
	cout << "Enter your score : ", cin>>score;
	
	cout<<"->using IF-ELSE"<<endl;
	if (score >= 80 && score <= 100){
		grade = 'A';
		cout<<"You got "<<grade<<endl;
	} else {
		if (score > 100) {
			cout<<"please re-check your score."<<endl;
		} else {
			if (score >= 70){
			grade = 'B';
			cout<<"You got "<<grade<<endl;
		} else {
			if (score >= 60) {
				grade = 'C';
				cout<<"You got "<<grade<<endl;
			} else {
				if (score >= 50) {
					grade = 'D';
					cout<<"You got "<<grade<<endl;
				} else {
					grade = 'E';
					cout<<"You got "<<grade<<endl;
				}
			}
		}
		}
	}
	
	cout<<endl<<endl;
	cout<<"-> using SWITCH-CASE"<<endl;
	switch (grade){
		case 'A' :{
			cout<<"You got "<<grade<<", congrats."<<endl;
			break;
		}
		case 'B' : {
			cout<<"You got "<<grade<<", keep it up."<<endl;
			break;
		}
		case 'C' : {
			cout<<"You got "<<grade<<", let's try harder'."<<endl;
			break;
		}
		case 'D' : {
			cout<<"You got "<<grade<<", ......."<<endl;
			break;
		}
		case 'E' : {
			cout<<"You got "<<grade<<", you fool."<<endl;
			break;
		}
		default : {
			cout<<"[default]"<<endl;
			break;
		}
	}
}

main(){
	cout<<"[Determine the grade]"<<endl;
	Dan:
	cout<<endl;	
	nilai();
	
	char trus;
	cout<<"\nAda lagi? (Y/T)", cin>>trus;
	if(toupper(trus) == 'Y'){
		goto Dan;
	} else {
		cin.get();
	}
}
