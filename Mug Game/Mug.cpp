#include <iostream>

using namespace std;

int main() {
    int inputNumber;
    char inputChange, inputChange2, finalResult;
    cin >> inputNumber >> inputChange;
    finalResult = inputChange;

        for (int i=inputNumber; i>0; i--) {
            cin >> inputChange >> inputChange2;
            if (inputChange == finalResult) {
                finalResult = inputChange2;
            } else if (inputChange2 == finalResult) {
                finalResult = inputChange;
            } else {    
                cout << "Mug Are The Same !" << '\n';
        }

    }
        cout << finalResult << '\n';
        return 0;
}
