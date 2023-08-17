#version 330 core

uniform sampler2D tex;

out vec4 FragColor;

in V2F {
    vec2 uv;
} v2f;

void main() {
    FragColor = texture(tex, v2f.uv);
}