#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}







#include <iostream>
using namespace std;
int main() {

    int n =20;
    
    for(int i = 2 ; i<=n ; i++){
        bool prime = true;
    for (int j = 2; j*j <= i; j++) { 
            if (i%j == 0 ) {
                prime = false;
                break;
            }
    }
    if (prime) {
        cout<<i<<endl;
    }
}
    return 0;
}
