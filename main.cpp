#include <iostream>

using namespace std;

    double sqRoot(double number)
    {
        double start=0, endNum=number;
        double temp=0;

        int round=50;
        while(round!=0)
        {
            temp = (start+endNum)/2;
            if(temp*temp == number)
                {
                    cout << "\n in if body at round = "<<round <<" AND \ttemp = "<<temp;
                    return temp;
                }
            else
                if(temp*temp>number)
                {
                        endNum = temp;
                cout << "\n in else if body at round = "<<round <<" AND \ttemp = "<<temp;
                }
            else
                {
                    start = temp;
                cout << "\n in else body at round = "<<round <<" AND \ttemp = "<<temp;
                }
        round--;
        }
return temp;
    }

int main()
{
    double root = 0.0;
    cout << "\nPlease Enter The Square Root Number :";
    cin >> root;
    double OrignalRoot = 0.0;
    OrignalRoot = sqRoot(root);
    cout << "\nThe Square Root Of The Number ="<<root <<", is ="<<OrignalRoot;
}
