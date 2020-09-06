#include <string>
using namespace std;

class LoginData {
    private:
        string name;
        string password;
        bool valid;
    public:
    LoginData();
    LoginData(string in_name, string password);
    void is_valid(bool val);
    string get_name();
    string get_password();

    bool is_correct(LoginData in_data);
    };
 
    