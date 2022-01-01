#include <vector> 
#include <string>

using namespace std; 

class Profile{
    private: 
        int age; 
        string city; 
        string country; 
        string pronouns; 
        vector<string> hobbies;
    public: 
        Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns, string view_profile());
        void add_hobbies(string new_hobby);

};