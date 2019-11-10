#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include "time.h"

using namespace std;

int main()
{
    int w;
    cout << "Ile masz lat? " << endl;
    cin >> w;
    if(w > 18){
        cout << "Jestes pedofilem" << endl;
    } else if (w > 0){
        cout << "Jestes bombelkiem" << endl;
    } else {
        cout << "Robot" << endl;
    }
    return 0;
}
