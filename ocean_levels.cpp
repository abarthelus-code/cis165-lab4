
#include <iostream>

int main()
{ using namespace std;
    
    const double OCEAN_LEVEL = 1.5;
    
    int fiveYears = 5;
    int sevenYears = 7;
    int tenYears = 10;
    
    double oceanLevel5 = OCEAN_LEVEL * fiveYears;
    double oceanLevel7 = OCEAN_LEVEL * sevenYears;
    double oceanLevel10 = OCEAN_LEVEL * tenYears;
    
    cout << "Ocean Level Increase In 5 years = " << oceanLevel5 << " millimeters" <<  endl;
    cout << "Ocean Level Increase In 7 years = " << oceanLevel7<< " millimeters" <<  endl;
    cout << "Ocean Level Increase In 10 years = " << oceanLevel10 << " millimeters" <<  endl;
    
    return 0;
}
