#ifndef NETWORK_HPP
#define NETWORK_HPP

#include <Godot.hpp>
#include <Node.hpp>
#include <PackedScene.hpp>
#include <PacketPeerUDP.hpp>

namespace godot {
    class Network : public Node {
        /*
        class Network is a node which handles:
            - connections to the server
            - starting the game instance
            - 
        */
        GODOT_CLASS(Network, Node)
        private:
            Ref<PackedScene> playerScene;
            Dictionary players;
            const String SERVER_IP = "127.0.0.1";
            const int64_t SERVER_IP = 33333;
            const int64_t MAX_PLAYERS = 1000;
        public:
            static void _register_methods();

            Network();
            ~Network();

            void _init();
            void _ready();
            // no process needed
    };
}

#endif