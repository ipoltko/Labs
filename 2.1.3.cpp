#include <iostream>
#include <math.h>

using namespace std;
int main(void) {
    int sys;
    float m, ft, in;
// Insert your code here
    start:
    cout<<endl<<"0 for meters & 1 for ft: ";
    cin>>sys;
    if (sys==0)
    {
        cin>>m;
        ft=m*3.28084;
        in=(ft-floor(ft))*12;
        printf("%f m = %.0f'%.0f''",m,floor(ft),in);
        goto start;
    } else
        if (sys==1)
        {
            cin>>ft>>in;
            m=ft/3.28084+in/39.37;
            printf("%.0f'%f'' = %f m",ft,in,m);
            goto start;
        }
    return 0;
}
