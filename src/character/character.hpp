#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <godot_cpp/classes/character_body2d.hpp>

namespace godot {
    class Character : public CharacterBody2D {
        GDCLASS(Character, CharacterBody2D)
    protected:
        static void _bind_methods();
    public:
        void _ready() override;
    };
}
#endif