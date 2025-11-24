#include <iostream>
#include <windows.h>
using namespace std;

main(){
    SetConsoleCP(65001);   
    SetConsoleOutputCP(65001);

    int array[14], array_replace[14], temp_num = 0, max_num = 0, max_neg_num = -2147483648;

    cout << "Введіть 14 чисел:" << endl;

    for(int i = 0; i < 14; i++){ // enter array[]
        cin >> temp_num;

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

    for (int k = 0; k < 14; k++){ // replase array[] num || cout array[]
        cout << array[k] << " ";

        if      (k % 2 == 0 && array[k] < 0) {array_replace[k] = max_num;} 
        else if (k % 2 != 0 && array[k] < 0) {array_replace[k] = max_neg_num;} 
        else    {array_replace[k] = array[k];}
    }

    cout << endl << "Новоутворений массив: ";

    for (int n = 0; n < 14; n++) { // array_replace[]
        cout << array_replace[n] << " ";
    }
}
