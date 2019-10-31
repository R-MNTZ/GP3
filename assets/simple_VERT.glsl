#version 400

layout(location = 0) in vec3 pos;
layout(location = 2) in vec2 texCoords;
layout(location = 3) in vec3 normal;


out vec3 position;
out VS_OUT {
	vec2 texCoords0;
} vs_out;

uniform mat4 MVP;

void main()
{
	
	gl_Position = MVP * vec4(pos, 1.0f);
	vs_out.texCoords0 = texCoords;
	
}