#ifndef GDTEST_HPP
#define GDTEST_HPP

#include <Godot.hpp>
#include <Spatial.hpp>

namespace godot {

class GDTest : public Spatial {
    GODOT_CLASS(GDTest, Spatial)

    private:
        String _data;
    public:
        static void _register_methods();
    
        void _init();
    
        void set_data(String new_data);
        String get_data() const;
    
        String a_method();
    };
}

#endif /* !GDTEST_HPP */