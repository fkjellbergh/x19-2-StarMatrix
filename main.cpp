#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;


int main()

{

  vector <vector <string> > starMatrix;

    int r;
    int c;

    do{
       cout<<"Please input the amount of rows you would like to create. Please enter positive whole numbers."<<endl;
       cin>>r;
       cout<<"Please enter the amount of columns you would like to create. Please enter positive whole numbers."<<endl;
       cin>>c;
      }while(r < 0 && c <  0);

       starMatrix.resize(r);
       starMatrix[r].resize(c);

    for(int row=0; row < starMatrix.size(); row++)
        {

    for(int column=0; column < starMatrix[row].size(); column++)
        { 
          char star = '*';;
          starMatrix.push_back(star);
        }

        }
}

