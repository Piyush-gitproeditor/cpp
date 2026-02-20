#include <bits/stdc++.h>
using namespace std;
class vehicle{

  public:
    vehicle()
    {
        cout<< "This is a vehicle" <<endl;
    }
};
class fourwheeler : public vehicle
{
  public:
    fourwheeler()
    {
        cout << "4 wheeler vehicles" << endl;
    }
};
class car : public fourwheeler
{
  public:
    car()
    {
        cout << "This 4 Wheeler Vehicle is a Car" << endl;
    }
};

int main()
{
    car obj;
    return 0;
}