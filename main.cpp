#include <iostream> 
#include "profile.hpp"

using namespace std; 

int main(){
    Profile joseph("Joseph Macaraig", 21, "Los Angeles", "California", "United States", "he/him");
    joseph.add_hobbies("gaming");
    joseph.add_hobbies("listening to music");
    cout << joseph.view_profile();
}