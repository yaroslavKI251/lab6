#include <iostream>
#include <windows.h>
using namespace std;

main(){
    SetConsoleCP(65001);   
    SetConsoleOutputCP(65001);

    cout << "Введіть 14 чисел:" << endl;

    int array[14], array_replace[14], temp_num = 0;
    for(int i = 0; i < 14; i++){ // enter array[]
        cin >> temp_num;

        if(cin.fail()){
            cout << "err" << endl;
            return 1;
        }
        
        array_replace[i] = 0;
        array[i] = temp_num;
    }
}
