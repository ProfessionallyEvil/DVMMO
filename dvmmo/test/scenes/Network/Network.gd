extends Spatial

var network = load("res://bin/network.gdns").new()
func _ready():
	network.set_server_ip("127.0.0.2")
	network.set_server_port(4444)
	network.set_max_players(1000)
	print(network.get_server_ip())
	print(network.get_server_port())
	print(network.get_max_players())


# Called every frame. 'delta' is the elapsed time since the previous frame.
#func _process(delta):
#	pass
