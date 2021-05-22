#include<iostream>
#include<string>
using namespace std;
class String{
	private:
		string str1;
		string str2;
		string add;

	public:
	     void get_string(string x, string y){
	     	str1=x;
	     	str2=y;
		 }
		
		string add_string(string x, string y) 
		{
			add =  x + " " + y;
			return add;
		}
		void equate_string(string x, string y){
			if(x==y)
			{
				cout<<"Strings are equal"<<endl;
			}
			else{
				cout<<"Strings are not equal"<<endl;
			}
		}
		 void display ()
		 {	cout<<"Added String 1 & String 2 : "<<add<<endl;
		 }		
		 
		
};
int main(){
	String ASHWANI;
	string str1,str2;
	cout<<"Enter 1st string"<<endl;
	cin>>str1;
	cout<<"Enter 2nd string"<<endl;
	cin>>str2;
	
	ASHWANI.get_string(str1,str2);
	ASHWANI.add_string(str1,str2);
	ASHWANI.equate_string(str1,str2);
	ASHWANI.display();
}