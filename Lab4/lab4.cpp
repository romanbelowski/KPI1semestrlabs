//Варіант 26
#include <iostream>
#include <cmath> 

using namespace std;
int main()
{
    int a, b, i, res = 0, n;
    cout << " Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 = 1) {
            a = i;
            b = i * i;
            cout << "\n i = "<<i<<" - unpaired =>\n a = i = "<<a<<'\n'<<" b = i^2 = "<<b;
         
        }
        else {
            a = i / 2;
            b = i + 7;
            cout << "\n i = " << i << " - paired =>\n a = i/2 = " << a << '\n' << " b = i + 7 = " <<b;
        }
        res += (a - b) * (a - b);
        cout << "\n Result += (a-b)^2 => \n Result += (" << a << '-' << b << ")^2 => \n Result += " << (a - b) * (a - b) 
            <<"\n  Now Result = "<<res<<'\n';
    }
    cout << "\n\n   Final Result = " << res;
    
}
}