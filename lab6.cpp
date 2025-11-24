#include <iostream>
#include <windows.h>
using namespace std;

main(){
    SetConsoleCP(65001);   
    SetConsoleOutputCP(65001);
    srand(time(0));

    int size = 0;

    cout << "Введіть розмір массиву: ";
    cin >> size;
    if(cin.fail()){
        cout << "err" << endl;
        return 1;
    }

    int array[size], array_replace[size], temp_num = 0, max_num = 0, max_neg_num = -2147483648;

    for(int i = 0; i < size; i++){ // enter array[]
        temp_num = rand() % 201 - 100;

        if(cin.fail()){
            cout << "err" << endl;
            return 1;
        }
        
        array_replace[i] = 0;
        array[i] = temp_num;
        
        if (temp_num > max_num) {max_num = temp_num;} // max element

        if (temp_num < 0 && temp_num > max_neg_num) {max_neg_num = temp_num;} // max negative element
    }

    cout << endl << "Заданий массив:       ";

    for (int k = 0; k < size; k++){ // replase array[] num || cout array[]
        cout << array[k] << " ";

        if      (k % 2 == 0 && array[k] < 0) {array_replace[k] = max_num;} 
        else if (k % 2 != 0 && array[k] < 0) {array_replace[k] = max_neg_num;} 
        else    {array_replace[k] = array[k];}
    }

    cout << endl << "Новоутворений массив: ";

    for (int n = 0; n < size; n++) { // array_replace[]
        cout << array_replace[n] << " ";
    }
}
