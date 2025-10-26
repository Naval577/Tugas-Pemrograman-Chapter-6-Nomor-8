#include <iostream>
#include <cmath>
using namespace std;

int jari_jari (int x1, int x2, int y1, int y2 ){
  return sqrt((pow((x1-x2),2)) + (pow((y1-y2),2)));
}
int poin_poin_awal (int x1, int x2, int y1, int y2){
  return x1,x2,y1,y2;
}
int keliling(double r){ 
  const double phi=3.1416;
  return 2*phi*r;
}
double luas (double r){
  const double phi=3.1416;
  return phi*r*r;
}

int main (){ 
  int x1, x2, y1, y2;
  cout << " berapa saja nilai koordinat x1, x2, y1, dan y2: ";
  cin >> x1 >> x2 >> y1 >> y2;

  double r = jari_jari(x1, x2, y1, y2);
  
    cout << "jari-jari: " << r << endl;
    cout << "Diameter: " << 2 * r << endl;
    cout << "keliling: " << keliling(r) << endl;
    cout << "luas: " << luas(r) << endl;

    return 0;
}