// pointerToStructure.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
using namespace std;

//structure definition
struct Person {
    string name;
    int age;

    //constructor
    Person(string n = "Richard", int a = 45) {
        name = n;
        age = a;
    }
};

//function prototypes
void myLine(int);

int main()
{
    Person initialValue("Peter", 88);
    cout << "\nInitial values used in the constructor: " << initialValue.name << "\t" << initialValue.age;

    Person me, myFriend;//me and myFriend variables are of Person structure type 
    Person persons[3];//persons array is of Person structure
    cout << "\nThe size of persons[] is " << sizeof(persons) << endl; //calculating the size of the structure array
    cout << "\nThe size of Person is " << sizeof(Person) << endl; //calculating the size of the structure
    int n = (sizeof(persons) / sizeof(Person)); // calculating the size of the array
    cout << "\nThe array size is " << n << endl; //outputing the size of the array
    myLine(50);
    me.name = "Sherein Jack"; //hard coding the value of name
    me.age = 23;//hard coding the value of age

    //output the name and age of me
    cout << "\nYour name is " << me.name;
    cout << "\nYour age is " << me.age;

    //handling the friend's input and output
    cout << "\nEnter friend\'s name: ";
    cin >> myFriend.name;
    cout << "\nEnter friend\'s age: ";
    cin >> myFriend.age;
    cout << "\nYour friend\'s name is " << myFriend.name;
    cout << "\nYour friend\'s age is " << myFriend.age;
    myLine(50);
    // automating the input for the array of structure
    int i; //local to main function
    for (i = 0; i < n; i++) {
        cin.ignore(); //clear the buffer
        cout << "\nEnter the name of the person: ";
        getline(cin, persons[i].name);

        cout << "\n\Enter the age of the person: ";
        cin >> persons[i].age;

    }
    myLine(50);
    //automating the output of the array values
    for (i = 0; i < n; i++) {
        cout << "\nThe name of the person : " << i << " is " << persons[i].name;
        cout << "\n\The age of the person: " << i << " is " << persons[i].age;
    }
    myLine(50);
}

//functions

void myLine(int n) {
    int i;//Local scope i to myLine
    cout << endl;
    for (i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;


}