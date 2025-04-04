#include <iostream>
using namespace std;
int main() {
      int wood_balance = 1000;
    int w1 = 1, d1 = 2, h1 = 3;
    int w2 = 1, d2 = 2, h2 = 3;
    int w3 = 1, d3 = 2, h3 = 3;
    
    // Calculo primera caja
    int area = (w1 * d1) + 2 * (w1 * h1 + d1 * h1);
    wood_balance -= area;
    cout << "Madera contrachapada restante: " << wood_balance << endl;
    
    //Calculo segunda cja
    area = (w2 * d2) + 2 * (w2 * h2 + d2 * h2);
    wood_balance -= area;
    cout << "Madera contrachapada restante: " << wood_balance << endl;
    
    // Calculo tercera caja
    area = (w3 * d3) + 2 * (w3 * h3 + d3 * h3);
    wood_balance -= area;
    cout << "Madera contrachapada restante: " << wood_balance << endl;

    return 0;
}
