#include <iostream>
using namespace std;

int main(){
    int nums[5];
    cout << "Hello World!" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Enter a number: ";
        cin >> nums[i];
    }
    for(int i = 4; i >= 0; i--){
        cout << nums[i] << " ";
    }
    system("pause");
    return 0;
}