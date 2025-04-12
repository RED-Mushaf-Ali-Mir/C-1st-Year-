#ifndef Def_H
#define Def_H

class Signup{
    private:

        string username;
        string password;
        int key;
        int account_num;
static  int acounts_created;
        bool pass_chck(){}
        bool set_key(){}
    public:

    Signup(){}
    
    bool set_username(){}
    bool set_password(){}
    bool set_key(){}
    bool AccCreated(){}
};

class Login{
     private:
    string username;
    string password;
    int key; 

    public:
    Login(string,string){}
    
    bool chck_Account(){}
    bool change_pass(){}

};

#endif