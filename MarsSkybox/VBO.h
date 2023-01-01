#ifndef VBO_CLASS_H
#define VBO_CLASS_H

#include<glm/glm.hpp>
#include<glad/glad.h>
#include<vector>

// Structure to standardize the vertices used in the meshes
struct Vertex
{
	glm::vec3 position;
	glm::vec3 normal;
	glm::vec3 color;
	glm::vec2 texUV;
};



class VBO
{
public:
	GLuint ID;
	// Constructor
	VBO(std::vector<Vertex>& vertices);
	void Bind();
	void Unbind();
	void Delete();
};

#endif