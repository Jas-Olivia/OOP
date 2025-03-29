#include "Orchestra.h"
#include "Musician.h"

Orchestra::Orchestra() {
    max_size = 0;
    current_members_count = 0;
    members = nullptr;
}

Orchestra::Orchestra(int size) {
    max_size = size;
    current_members_count = 0;
    members = new Musician[size];

}

Orchestra::~Orchestra() {
    delete[] members;
}

int Orchestra::get_current_number_of_members() {
    return current_members_count;
}

bool Orchestra::has_instrument(std::string instrument) {
    for (int i = 0; i < current_members_count; i++)
    {
        if (members[i].get_instrument()==instrument)
        {
            return true;
        }
        
    }
    return false;
}

Musician* Orchestra::get_members() {
    return members;
}

bool Orchestra::add_musician(Musician new_musician) {
    if (current_members_count < max_size)
    {
        members[current_members_count] = new_musician;
        current_members_count ++;
        return true;
    }
    return false;
    
}