#include <Godot.hpp>
#include "gdtest.hpp"

extern "C" void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options *o) {
    godot::Godot::gdnative_init(o);
}

extern "C" void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options *o) {
    godot::Godot::gdnative_terminte(o);
}

extern "C" void GDN_EXPORT godot_nativescript_init(void *handle) {
    // init native script tell godot about the classes in our plugin
    godot::Godot::nativescript_init(handle);
    godot::register_class<godot::GDTest>();
}