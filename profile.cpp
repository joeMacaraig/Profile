#include "profile.hpp"

Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns){
    name = new_name; 
    city = new_city;
    country = new_country; 
    pronouns = new_pronouns; 
     
     if(new_age >= 18){
        age = new_age; 
     }
     else{
         age = 0;
     }
}

string Profile::view_profile(){
    string bio = "Name: " + name; 
    bio += "\nAge: " + to_string(age); 
    bio += "\nPronouns: " + pronouns; 
    string hobby_print = "Hobbies:\n";

    for(int i = 0; i < hobbies.size(); i++){
        hobby_print += " - " + hobbies[i] + "\n";
     }

     return bio + "\n" + hobby_print; 
}

void Profile::add_hobbies(string new_hobby){
    hobbies.push_back(new_hobby);
}