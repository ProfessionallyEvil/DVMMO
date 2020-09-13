#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <Godot.hpp>
#include <KinematicBody.hpp>

/* 
    does each node need to have it's own networking, or just expose an api for which
    some controller code can push updates to the object. The latter would allow the server to 
    more easily move objects in it's simulation perhaps
*/

namespace godot {
    class Player : public KinematicBody {
        /*
            Objects in the game are just puppets. For example
        */
        GODOT_CLASS(Player, KinematicBody)
    private:

    public:
    }
}