# DVMMO Design Document

This document captures the core ideas behind the actual game design of Damn Vulnderable MMO.

## High Level Design Goals

### Systems
The project aims to align with the OWASP Game Security Framework to serve as a practical demonstration of the concepts defined within. The project also aims to implement the following systems with various deliberate vulnerabilites:

- [ ] Game economy
- [ ] Combat system
- [ ] User accounts
- [ ] Game manager users
- [ ] In game commands
- [ ] Quest system*
- [ ] Custom content*
- [ ] Scripting system*
- [ ] Anti-cheat system*
- [ ] Any other features that come about as the project evolves

The project also aims to be an actually playable game in addition to serving as a deliberately vulnerable hacking target.

**stretch goals that aren't critical to the minimum viability of the project**

*secret bonus goal: have fun experimenting with some game design :)*

## Architecture

Fully server authoritative to start with and will be loosened up as development progresses / I learn just what the heck I'm doing.

*TODO: insert nice diagram to show the flow of event that constitutes starting up a server which instances the game world or dungeon, enemies, etc then tells the client what assets to load up and where to render them, etc*

## Technology Stack

### Godot Game Engine
### GDNative C++

The intention of using C++ via GDNative is to allow for the 

### Blender

Use for authoring any custom art assets that will be needed further down the line. Generally texturing will likely be done in the game engine to avoid some of the import export issues that can arise.

### Asset Forge

Used for whiteboxing test levels and rooms used for prototyping the dungeon generation.