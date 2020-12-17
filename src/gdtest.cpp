#include "gdtest.hpp"

using namespace godot;

// GDTest
void GDTest::_register_methods() {
    register_method("_init", &GDTest::_init);
    register_method("_process", &GDTest::_process);
}

GDTest::GDTest() {}
GDTest::~GDTest() {}

void GDTest::_init() {
    time_passed = 0.0;
}

void GDTest::_process(float delta) {
    time_passed += delta;
    rotate_y(time_passed * 2.0 * delta);
}