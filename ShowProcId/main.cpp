#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "This process id is "<< (long)getpid() << endl;
    return 0;
}
