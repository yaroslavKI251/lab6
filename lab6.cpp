#include <iostream>
#include <windows.h>
using namespace std;

main(){
    SetConsoleCP(65001);   
    SetConsoleOutputCP(65001);

    int array[14], array_replace[14], max_num = 0, max_neg_num = -2147483648;
    int checkArray(int array[14]);

    cout << "Введіть 14 чисел:" << endl;

    for(int i = 0; i < 14; i++){ // enter array[]
        cin >> array[i];

        if(cin.fail()){
            cout << "err" << endl;
            return 1;
        }
    }

    int check = checkArray(array);
    if(check != 0){ // backup array replace
        cout << "Всі числа в массиві додатні! змінюю массив на резервну копію..." << endl << "Готово!" << endl;
        int array_backup[14] =  {1, -2, 3, -4, 5, 6, -7, -8, -9, 10, -11, 12, 13, -14};
        for(int j = 0; j < 14; j++){
            array[j] = array_backup[j];
        }
    } 

    for(int k = 0; k < 14; k++) {
        array_replace[k] = 0;
        
        if (array[k] > max_num) {max_num = array[k];} // max element

        if (array[k] < 0 && array[k] > max_neg_num) {max_neg_num = array[k];} // max negative element
    }

    if(check != 0){
        cout << endl << "Заданий резервний массив: ";
    } else {
        cout << endl << "Заданий массив:           ";
    }
    

    for (int n = 0; n < 14; n++){ // replase array[] num || cout array[]
        cout << array[n] << " ";

        if      (n % 2 == 0 && array[n] < 0) {array_replace[n] = max_num;} 
        else if (n % 2 != 0 && array[n] < 0) {array_replace[n] = max_neg_num;} 
        else    {array_replace[n] = array[n];}
    }

    cout << endl << "Новоутворений массив:     ";

    for (int p = 0; p < 14; p++) { // array_replace[]
        cout << array_replace[p] << " ";
    }
}

int checkArray(int array[14]){
    int check = 1;
    for(int i = 0; i < 14; i++){
        if(array[i] < 0) {
            check = 0;
            break; 
        }
    }
    return check;
}
