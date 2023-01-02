# mars-skybox
A Computer Graphics class project: 3D model of Mars with stars skybox with basic lighting in OpenGL.

You can use the mouse along with WASD keys to move around the scene.

![Screenshot](screenshot.jpg)

## How to run
All the libraries required are shipped with this repo. You need to run the .sln file (The project was built with VS 2022). However, the libraries paths needs to be added to project configuration. Under VC++ Directories section in configuration properties: Add the *Libraries/include* to **Include Directories** and *Libraries/lib* to **Library Directories**. Also under linker section -> input: add the glfw3.lib and opengl32.lib libraries. And that's it, You can run the project!

Soucres:
https://www.khronos.org/opengl/wiki/Cubemap_Texture
https://wirewhiz.com/read-gltf-files/
https://www.youtube.com/watch?v=AB_f4slL2H0&list=PLPaoO-vpZnumdcb4tZc4x5Q-v7CkrQ6M-&index=14
https://learnopengl.com/Advanced-OpenGL/Cubemaps
https://learnopengl.com/Getting-started/Camera

This work is based on "Mars" (https://sketchfab.com/3d-models/mars-edbcb2ea20fa472f96a9133b16f2b0b9) by Jiaxing (https://sketchfab.com/saitoyang) licensed under CC-BY-4.0 (http://creativecommons.org/licenses/by/4.0/)
