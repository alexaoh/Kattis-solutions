#include <cmath>
#include <iostream>

using namespace std; 

int main(){
    int a = 1, b, c;

    while (true) 
    {
        cin >> a >> b >> c;
        if (a == 0) return 0;
        if (pow((double)a, (double)2) + pow((double)b, (double)2) == pow((double)c, (double)2) || 
            pow((double)a, (double)2) + pow((double)c, (double)2) == pow((double)b, (double)2) ||     
            pow((double)c, (double)2) + pow((double)b, (double)2) == pow((double)a, (double)2))
        {
            printf("right\n");
        } else
        {
            printf("wrong\n");
        }
    }
}       
