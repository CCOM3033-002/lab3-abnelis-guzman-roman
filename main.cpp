/* 
Abnelis Guzmán Román
801-23-2086
Lab 3: Tres Numeros Aleatorios
CCOM 3033-002
*/

#include <iostream>
#include <cstdlib>

int main() {
using namespace std;

srand(time(0));
int randomNumberA, randomNumberB, randomNumberC;

    randomNumberA = rand() % (100 - 0 + 1) + 0;
    randomNumberB = rand() % (100 - 0 + 1) + 0;
    randomNumberC = rand() % (100 - 0 + 1) + 0;

cout << "Números aleatorios generados: " << randomNumberA << ' ' << randomNumberB << ' ' << randomNumberC << ' ' << endl;
cout << "Orden descendiente: ";

if (randomNumberA >= randomNumberB && randomNumberB >= randomNumberC) {
    cout << randomNumberA << ' ' << randomNumberB << ' ' << randomNumberC << endl;
} 

else if (randomNumberA >= randomNumberC && randomNumberC >= randomNumberB) {
    cout << randomNumberA << ' ' << randomNumberC << ' ' << randomNumberB << ' ' << endl;
}

else if (randomNumberB >= randomNumberA && randomNumberA >= randomNumberC) {
    cout << randomNumberB << ' ' << randomNumberA << ' ' << randomNumberC <<' ' << endl;
}

else if (randomNumberB >= randomNumberC && randomNumberC >= randomNumberA) {
    cout << randomNumberB << ' ' << randomNumberC << ' ' << randomNumberA << ' ' << endl;
}

else if (randomNumberC >= randomNumberA && randomNumberA >= randomNumberB) {
    cout << randomNumberC << ' ' << randomNumberA << ' ' << randomNumberB << ' ' << endl;
}

else if (randomNumberC >= randomNumberB && randomNumberB >= randomNumberA) {
    cout << randomNumberC << ' ' << randomNumberB << ' ' << randomNumberA << ' ' << endl;   
}

return 0;
}

