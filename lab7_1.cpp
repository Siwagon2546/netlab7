#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}	
	return y;	
}

string Text1,Text2,Text3,Text4;

int main(){
    cout << "Input text: ";
	cin >>Text1;
	Text2 = func3(Text1);
	Text3 = func1(Text2);
	Text4 = func1(Text1);

    cout << "Reversed text: ";
	cout << (Text4)<<"\n";
    cout << "Palindrome: ";
	if(Text2 == Text3)
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
	}

    return 0;
}
