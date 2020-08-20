#ifndef GDTEST_HPP
#define GDTEST_HPP

#include <Godot.hpp>
#include <Spatial.hpp>

namespace godot {

    class GDTest : public Spatial
        GODOT_CLASS(GDTest, Spatial);
    
    public:
        static void _register_methods();
        void _init();
    };

}

#endif /* !GDTEST_HPP */

