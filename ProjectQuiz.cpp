#include <iostream>
using namespace std;
int main(){
     int finalResult=0;
     int playQuiz(void);
     finalResult=playQuiz();
     cout<<"your score is "<<finalResult;
     if(finalResult>=6){
     	cout<<" Hurray! you passed the Quiz ;)";
	 }
	 else{
	 	cout<<"sorry,you failed";
	 }
}
int playQuiz(){
	char Start;
	char option;
	int score=0;
	cout<<"         Welcome to GK Quiz        "	<<endl;
cout<<" read the given below instructions carefully "<<endl;
cout<<"Step 1: Quiz ontains total 5 questions"<<endl;
cout<<"Step 2: Each question carry 2 marks"<<endl;
cout<<"Step 3: There is no negative marking"<<endl;
cout<<"step 4: Please press s  to start the Quiz"<<endl;
cout<<"Step 5: choose any one option out of a,b,c,d "<<endl;
cout<<"Step 6: if u score >=6 , you will pass the Quiz"<<endl;

	cout<<"press s key to start the Quiz"<<endl;
	cin>>Start;
	if(Start=='s'||Start=='S'){
		cout<<"Q1: What is the Capital of India?"<<endl;
		cout<<"(a) Mumbai   (b) Delhi  (c)Chandigarh  (d)Panipat "<<endl;
		cin>>option;
		if(option=='b'||option=='B'){
			score=score+2;
		}
		else{
			score=score+0;
		}
		
		cout<<"Q2: What is the Capital of Canada?"<<endl;
		cout<<"(a) Toronto   (b)Vancouver  (c)Ottawa  (d)Hamilton "<<endl;
		cin>>option;
		if(option=='c'||option=='C'){
			score=score+2;
		}
		else{
			score=score+0;
		}
		
		cout<<"Q3: What is the Capital of USA?"<<endl;
		cout<<"(a) Washington D.C.   (b)New York  (c)Chicago  (d)Los Angeles "<<endl;
		cin>>option;
		if(option=='a'||option=='A'){
			score=score+2;
		}
		else{
			score=score+0;
		}
		
		cout<<"Q4: What is the Capital of australia?"<<endl;
		cout<<"(a) Canberra  (b)Melbourne (c)Darwin  (d)Sydney "<<endl;
		cin>>option;
		if(option=='a'||option=='A'){
			score=score+2;
		}
		else{
			score=score+0;
		}
		
		cout<<"Q5: What is the Capital of France?"<<endl;
		cout<<"(a) Ferrand   (b)Prais  (c)Nice (d)Marseille "<<endl;
		cin>>option;
		if(option=='b'||option=='B'){
			score=score+2;
		}
		else{
			score=score+0;
		}
	}
	
	
	
	else{
		cout<<"wrong value entered...plz select s"<<endl;
	}
	return score;
}
