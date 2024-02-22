#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <windows.h>

using namespace std;

void lineBIG();
void lineSMALL();
void lineXL();
void menu();
void pointerAndDA();
void exit();
void sleep();

int main(){
	
	menu();
	
	return 0;
	
}

void menu(){
	
	lineBIG();
	int choice;
	
	cout << "\nThis is your Technical Summative Assessment 4! \n" << endl;
	
	cout << "What do you wanna do? \n" << endl;
	
	cout << "[1] - Perform Activity\n[2] - Exit \n" << endl;
	
	cout << "Choice: ";
	cin >> choice;
	
	switch(choice)
		{
			case 1:
				
				system("cls");
				sleep();
				system("cls");
				pointerAndDA();
				break;
				
			case 2:
				
				system("cls");
				sleep();
				system("cls");
				
				lineBIG();
				
				cout << "\nExiting TSA4, ";
				
				exit();
				break;
				
			default:
				
			cout << "That is an invalid option" << endl;
			
			system("pause");
			sleep();
			system("cls");
			menu();
	
	}
}

void pointerAndDA(){
	
	int size;
	
	cout << "Enter size of an array ";
	cin >> size;
	
	int* array = new int[size];
	
	cout << "Array Size: " << size << "\n" << endl;
	
	for(int x = 0; x < size; x++){
		
		array[size] = x;
		
		cout << "Index: " << array[size] << "\tAddress: " << &array[x] << endl;
		
	}
	
}

void lineSMALL(){
	
	
	cout << "==============";
	
}

void lineBIG(){
	
	
	cout << "===================================================";
	
}

void lineXL(){
	
	cout << "===================================================================================";
	
}

void sleep(){
	
	cout << "Loading";
    for (int i = 0; i <=4; i++){
    	Sleep(150);
    	cout << ".";
	}
	
}

void exit(){
	
	cout << "goodbye..." << endl;
	
	abort();
	
}
