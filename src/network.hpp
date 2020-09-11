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
            String server_ip = "127.0.0.1";
            int64_t server_port = 33333;
            int64_t max_players = 1000;
        public:
            static void _register_methods();

            Network();
            ~Network();

            void _init();
            void _ready();
            void _process(float delta);
            /* how should the entry point to the server actually work... */

            String get_server_ip();
            void set_server_ip(String server_ip);

            int64_t get_server_port();
            void set_server_port(int64_t server_port);

            int64_t get_max_players();
            void set_max_players(int64_t max_players);
    };
}

#endif