extends Node

var is_server: bool = OS.get_environment("GAME_SERVER") == "true"

# Entry point for the whole app
# Determine the type of app this is, and load the entry point for that type
func _ready():
	print("Application started")
	if is_server:
		print("Is server")
		get_tree().change_scene("res://server/ServerEntry.tscn")
	else:
		print("Is client")
		get_tree().change_scene("res://client/ClientEntry.tscn")
	# When running from the editor, this is how we'll default to being a client
#	else:
#		print("Could not detect application type! Defaulting to client.")
#		get_tree().change_scene("res://client/ClientEntry.tscn")
#		#get_tree().change_scene("res://server/ServerEntry.tscn")
