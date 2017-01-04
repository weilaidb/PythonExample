#define AVDEVICE_OPENGL_ENC_SHADERS_H
static const char * const FF_OPENGL_VERTEX_SHADER =
"uniform mat4 u_projectionMatrix;"
"uniform mat4 u_modelViewMatrix;"
"attribute vec4 a_position;"
"attribute vec2 a_textureCoords;"
"varying vec2 texture_coordinate;"
"void main()"
"";
static const char * const FF_OPENGL_FRAGMENT_SHADER_RGBA_PACKET =
#if defined(GL_ES_VERSION_2_0)
"precision mediump float;"
"uniform sampler2D u_texture0;"
"uniform mat4 u_colorMap;"
"varying vec2 texture_coordinate;"
"void main()"
"";
static const char * const FF_OPENGL_FRAGMENT_SHADER_RGB_PACKET =
#if defined(GL_ES_VERSION_2_0)
"precision mediump float;"
"uniform sampler2D u_texture0;"
"uniform mat4 u_colorMap;"
"varying vec2 texture_coordinate;"
"void main()"
"";
static const char * const FF_OPENGL_FRAGMENT_SHADER_RGBA_PLANAR =
#if defined(GL_ES_VERSION_2_0)
"precision mediump float;"
"uniform sampler2D u_texture0;"
"uniform sampler2D u_texture1;"
"uniform sampler2D u_texture2;"
"uniform sampler2D u_texture3;"
"varying vec2 texture_coordinate;"
"void main()"
"";
static const char * const FF_OPENGL_FRAGMENT_SHADER_RGB_PLANAR =
#if defined(GL_ES_VERSION_2_0)
"precision mediump float;"
"uniform sampler2D u_texture0;"
"uniform sampler2D u_texture1;"
"uniform sampler2D u_texture2;"
"varying vec2 texture_coordinate;"
"void main()"
"";
static const char * const  FF_OPENGL_FRAGMENT_SHADER_YUV_PLANAR =
#if defined(GL_ES_VERSION_2_0)
"precision mediump float;"
"uniform sampler2D u_texture0;"
"uniform sampler2D u_texture1;"
"uniform sampler2D u_texture2;"
"uniform float u_chroma_div_w;"
"uniform float u_chroma_div_h;"
"varying vec2 texture_coordinate;"
"void main()"
"";
static const char * const FF_OPENGL_FRAGMENT_SHADER_YUVA_PLANAR =
#if defined(GL_ES_VERSION_2_0)
"precision mediump float;"
"uniform sampler2D u_texture0;"
"uniform sampler2D u_texture1;"
"uniform sampler2D u_texture2;"
"uniform sampler2D u_texture3;"
"uniform float u_chroma_div_w;"
"uniform float u_chroma_div_h;"
"varying vec2 texture_coordinate;"
"void main()"
"";
static const char * const FF_OPENGL_FRAGMENT_SHADER_GRAY =
#if defined(GL_ES_VERSION_2_0)
"precision mediump float;"
"uniform sampler2D u_texture0;"
"varying vec2 texture_coordinate;"
"void main()"
"";
