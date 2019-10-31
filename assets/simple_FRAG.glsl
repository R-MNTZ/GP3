#version 400

uniform vec3 objectColor;
uniform sampler2D diffuse;
in VertexData{
in vec2 texCoord0;
} Vertex;

void main()
{
	 
	    gl_FragColor = texture2D(diffuse, Vertex.texCoord0);
	 
    
}
