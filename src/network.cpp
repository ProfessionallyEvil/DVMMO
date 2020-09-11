#include "network.hpp"

using namespace godot;

void Network::_register_methods() {
    register_method("_init", &Network::_init);
    register_method("_ready", &Network::_ready);
    register_method("_process", &Network::_process);
    register_method("get_server_ip", &Network::get_server_ip);
    register_method("set_server_ip", &Network::set_server_ip);
    register_method("get_server_port", &Network::get_server_port);
    register_method("set_server_port", &Network::set_server_port);
    register_method("get_max_players", &Network::get_max_players);
    register_method("set_max_players", &Network::set_max_players);
}

Network::Network() {}
Network::~Network() {}

void Network::_init() {}
void Network::_ready() {}
void Network::_process(float delta){}

String Network::get_server_ip() {
    return server_ip;
}

void Network::set_server_ip(String server_ip) {
    this->server_ip = server_ip;
}

int64_t Network::get_server_port() {
    return server_port;
}

void Network::set_server_port(int64_t server_port) {
    this->server_port = server_port;
} 

int64_t Network::get_max_players() {
    return max_players;
}

void Network::set_max_players(int64_t max_players) {
    this->max_players = max_players;
}