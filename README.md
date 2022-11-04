## Minecraft, but it's for UNIX systems (and runs really fast)

#### Features:
- Infinite, procedurally generated world
- Infinite height/depth
- Day/night cycle
- Biomes
- ECS-driven player and entities with full collision and movement
- Full RGB lighting
- Full transparency + translucency support
- Sprite blocks (flowers)
- Animated blocks (water + lava)
- Distance fog
- A whole lot of different block types
- More
 
#### To compile

##### Unix-like systems
`$ git clone --recurse-submodules https://gitlab.gnome.org/shbozz/mimecraft.git`\
`$ make`

Make sure to run `$ make libs` on first compile.
If libraries are not found, ensure that submodules have been cloned.

The game binary, once built with `$ make`, can be found in `./bin/`.

*Be sure* to run with `$ ./bin/game` out of the root directory of the repository.
If you are getting "cannot open file" errors (such as "cannot find ./res/shaders/*.vs"), this is the issue. 

##### Windows
Use WSL you can install WSL/Ubuntu from the command line using `wsl --install` or from the microsoft store,
Ubuntu works best. 

If you encounter issues update your Ubuntu `$ sudo apt upgrade` `$ sudo apt update`. 
You should also install these: `sudo apt install clang cmake make xorg-dev libglu1-mesa-dev doxygen libx11-dev`.
