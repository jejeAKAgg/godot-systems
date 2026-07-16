#include "character.hpp"
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

void Character::_bind_methods() {}

void Character::_ready() {
    UtilityFunctions::print("Le systeme Character est bien charge en C++ !");
}