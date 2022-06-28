#include <iostream>
using namespace std;

class  dot {
private:
    int x;
    int y;
  
public:
    int* z; //pointer z
    dot(); //prototip //fonksiyon
    dot(int, int);
    ~dot(); //yapıcı fonk kendisi olabilir

    int getX();
    int getY();

    void setX(int);
    void setY(int);

    void WriteToScreen();
    bool beginning();


};

dot::dot() { 
    //başlangıç değerleri daima 0 dır  parametresizdir
    cout << "parameterless constructor " << x << " " << endl;
    x = 0;
    y = 0;
    z = new int(5);
}
dot::dot(int x, int y = 8) { //y= 8 varsayılan değer//
    cout << "parameter constructor " << x << " " <<y<< endl;
    this->x = x;// bu sınıfta üretilen x değeri olarak ata 
    this->y = y;
    z = new int(6);


}
dot::~dot(){
    cout << "destructor " <<x<<" " << y << endl;
    delete z; //sistemden kaldırma z yoluyla
}
int dot::getX() {
    return x;

}

int dot::getY() {
    return y;

}
void dot::setX(int x) {
    //  x = _x; b şekilde de olabilir aslında
      //thisi işaretçi diyebiliriz
      //thisbir anahtar kelime dersek this.x diyemeyiz

    this->x = x;



}
void dot::setY(int _y) {
    if (_y > 5)
        y = _y;
    else
        y = 2;
}
void dot::WriteToScreen() {
    cout << x << "," << y << endl;

}



int main()
{
    dot n1(1, 10);
    dot n2(2, 25);
    return 0;
}
