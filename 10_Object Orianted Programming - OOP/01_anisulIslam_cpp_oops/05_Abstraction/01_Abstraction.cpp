#include <iostream>
using namespace std;

//-> Abstacrt Class
class MobileUser
{
public:
    void call()
    {
        cout << "Hello! " << endl;
    }
    virtual void sendMessage() = 0; //-> pUre VVirtual Function Has No_body
};

class Rahim : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "Hi, This is rahim" << endl;
    }
};

class kahim : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "Hi, This is kahim" << endl;
    }
};
int main()
{
    // MobileUser m; -> error
    MobileUser *m;
    Rahim r;
    kahim k;

    m = &r;
    m->call();
    m->sendMessage();

    m = &k;
    m->call();
    m->sendMessage();

    return 0;
}