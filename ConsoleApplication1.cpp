#include <iostream>

using namespace std;

int n = 1;
int counter = 0;
int* arr;


int input() {
    
    while (n != 0) {
        
        cout << "Enter number" << "\n";
        cin >> n;
        
        if (n != 0) {
            arr = (int*)realloc(arr, ((counter + 1) * sizeof(int)));
            arr[counter] = n;
            counter++;
        }
        else {
            break;
        }
    }

    //DEBUG
    //for (int i = 0; i < counter; i++) {
    //    cout << arr[i] << "\n";
    //}

    //counter -= 1;
    return 0;
}

int bubblik() {

    for (int i = 0; i < counter; i++) {
        for (int j = 0; j < counter; j++) {
            if (arr[j] > arr[j + 1]) {
                int b = arr[j]; // создали дополнительную переменную
                arr[j] = arr[j + 1]; // меняем местами
                arr[j + 1] = b; // значения элементов
            }
        }
    }
    return 0;
}

int main() {
    arr = (int*)malloc(sizeof(int));
    input();
    bubblik();

    for (int i = 0; i < counter; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}