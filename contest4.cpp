#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=1; i<=t; i++) {
        int a,b,c;
        cin >> a >> b >> c;

        double s = (a+b+c)/2.0;

        double triangle_area = sqrt(s*(s-a)*(s-b)*(s-c));

        double circle_radius = triangle_area/(2*3.1416);
        if(circle_radius >= 12 && circle_radius <= 32) {
            cout << "Case : " << i << "  Amazing" << endl;
        } else {
            cout << "Case : " << i << "  not AMAZING" << endl;
        }
    }
    return 0;
}
