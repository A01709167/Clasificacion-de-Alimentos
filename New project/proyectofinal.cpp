//This will be a nutrition plan project where I will classify different foods into food types to simplify a balanceed nutrition.

//Here i'm writing some extra code to see it reflected on github
#include <iostream>
using namespace std;

int addnumbers(int array[], int size){
    int sum = 0;
    for (int i=0; i<size; i++){
        sum += array[i];  
    }
    return sum;
}

int main(){
    int size = 3;
    cout <<"What size do you want the array to be?: " <<endl;
    cin >> size;
    while (size<=0){
        cout << "Size not valid, enter another one: " <<endl;
        cin >> size;
    }
    int array[size];
    int val = 0;
    for (int i=0; i < size; i++){
        cout <<"Enter the value for the array: " <<endl;
        cin >> val;
        array[i] = val;

    }
    cout<< "The result is " << addnumbers(array, size) <<endl;
    return 0;
}

//Se supone que esto debería mostrarse en el git
//O no sé, la verdad no muestra nada
