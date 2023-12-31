#version 330 core

#define pi 3.1415

uniform float aspect = 9.0 / 16.0;

uniform vec2 cam_pos = vec2(0.0);
uniform float cam_rot = 0;
uniform float zoom = 1.0;

uniform vec2 entity_pos;
uniform float entity_rot = 0;
uniform float entity_scale = 1;

layout (location = 0) in vec2 a_Pos;
layout (location = 1) in vec2 a_Uv;
layout (location = 2) in vec4 a_Tint;

out V2F {
    vec2 uv;
} v2f;

mat3 createMatrix(vec2 pos, float rot, float scale) {
    float c = cos(rot) * scale;
    float s = sin(rot) * scale;
    return mat3(
        c, s, pos.x,
        -s, c, pos.y,
        0, 0, 1
    );
}

mat3 createMatrixInv(vec2 pos, float rot, float scale) {
    float c = cos(rot) / scale;
    float s = sin(rot) / scale;
    return mat3(
        c, -s, -dot(pos, vec2(c, -s)),
        s,  c, -dot(pos, vec2(s, c)),
        0,  0, 1
    );
}

void main() {

    v2f.uv = a_Pos;

    vec3 v = vec3(a_Pos, 1);

    v *= createMatrix(entity_pos, entity_rot, entity_scale);
    v *= createMatrixInv(cam_pos, cam_rot, zoom);

    v.x *= aspect;
    gl_Position = vec4(v.xy, 0.0, 1.0);
}