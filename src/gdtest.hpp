#ifndef GDTEST_HPP
#define GDTEST_HPP

#include <Godot.hpp>
#include <Sprite.hpp>

namespace godot {

class GDTest : public Sprite {
    GODOT_CLASS(GDTest, Sprite)

    private:
        float time_passed;
    public:
        static void _register_methods();
    
        GDTest();
        ~GDTest();

        void _init(); // the initilizer called by Godot
        void _process(float delta); 
    };
}

#endif /* !GDTEST_HPP */