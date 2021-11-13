#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
char masiv[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int b;
void Grid(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(j == 2){
				cout<<masiv[i][j]<<" "<<endl;
			}else{
				cout<<masiv[i][j]<<" ";
			}
		}
	}
	cout<<endl;
}
void GenerateMole(){
	srand(time(NULL));
	b = rand() % 9;
	if(b == 0){
		masiv[0][0] = 'X';
		b = 1;
	}else if(b == 1){
		masiv[0][1] = 'X';
		b = 2;
	}else if(b == 2){
		masiv[0][2] = 'X';
		b = 3;
	}else if(b == 3){
		masiv[1][0] = 'X';
		b = 4;
	}else if(b == 4){
		masiv[1][1] = 'X';
		b = 5;
	}else if(b == 5){
		masiv[1][2] = 'X';
		b = 6;
	}else if(b == 6){
		masiv[2][0] = 'X';
		b = 7;
	}else if(b == 7){
		masiv[2][1] = 'X';
		b = 8;
	}else if(b == 8){
		masiv[2][2] = 'X';
		b = 9;
	}
}
void RemoveMole(){
    if(masiv[0][0] == 'X'){
        masiv[0][0] = '1';
    }
    if(masiv[0][1] == 'X'){
        masiv[0][1] = '2';
    }
    if(masiv[0][2] == 'X'){
        masiv[0][2] = '3';
    }
    if(masiv[1][0] == 'X'){
        masiv[1][0] = '4';
    }
    if(masiv[1][1] == 'X'){
        masiv[1][1] = '5';
    }
    if(masiv[1][2] == 'X'){
        masiv[1][2] = '6';
    }
    if(masiv[2][0] == 'X'){
        masiv[2][0] = '7';
    }
    if(masiv[2][1] == 'X'){
        masiv[2][1] = '8';
    }
    if(masiv[2][2] == 'X'){
        masiv[2][2] = '9';
    }
}
char Whack(){
	int a;
	cin >> a;
	if(a == b){
		system("cls");
		RemoveMole();
	}else if(a != b){
		cout<<"You missed!"<<endl;
		return '/';
	}
}
int main(){
	char start;
	cout<<"Whack-a-mole!"<<endl;
	cout<<endl;
	Grid();
	cout<<endl;
	cout<<"Do you want to start? y/n"<<endl;
	cin >> start;
	if(start == 'y'){
		system("cls");
		while(1){
			cout<<"Whack-a-mole!"<<endl;
			cout<<endl;
			GenerateMole();
			Grid();
			Whack();
			
		}
	}else if(start == 'n'){
		cout<<"Start the program again whenever you are ready!"<<endl;
		return 0;
	}	
}
