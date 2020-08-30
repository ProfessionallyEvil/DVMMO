#ifndef GDTEST_HPP
#define GDTEST_HPP

#include <Godot.hpp>
#include <Sprite3D.hpp>
#include <Spatial.hpp>

namespace godot {
    class GDTest : public Sprite3D {
        GODOT_CLASS(GDTest, Sprite3D)
        private:
            float time_passed;
        public:
            static void _register_methods();
    
            GDTest();
            ~GDTest();

            void _init(); // the initilizer called by Godot
            void _process(float delta);
    };

    class FuckYou : public Spatial {
        GODOT_CLASS(FuckYou, Spatial)
        private:
            String message;
        public:
            static void _register_methods();

            FuckYou();
            ~FuckYou();

            void _init();
            void _process(float delta);
            String get_message() const;
    };
}

#endif /* !GDTEST_HPP */