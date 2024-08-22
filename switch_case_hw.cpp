//calculate how any 100 rupee,50rupee,20 rupee, 1 rupee notes will be require to make 1330
#include <iostream>
using namespace std;

int main() {
    int amount = 1330;
    int n100, n50, n20, n1;

    switch (1) {  // Using switch to control the flow
        case 1:
            n100 = amount / 100;  // Calculate number of 100 rupee notes
            amount = amount % 100; // Update remaining amount
            cout << "100 Rupee notes: " << n100 << endl;
        case 2:
            n50 = amount / 50;   // Calculate number of 50 rupee notes
            amount = amount % 50; // Update remaining amount
            cout << "50 Rupee notes: " << n50 << endl;
        case 3:
            n20 = amount / 20;   // Calculate number of 20 rupee notes
            amount = amount % 20; // Update remaining amount
            cout << "20 Rupee notes: " << n20 << endl;
        case 4:
            n1 = amount;  // Remaining amount will be the number of 1 rupee coins
            cout << "1 Rupee coins: " << n1 << endl;
    }

    return 0;
}
