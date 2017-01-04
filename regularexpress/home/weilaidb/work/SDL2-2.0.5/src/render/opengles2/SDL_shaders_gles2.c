#if SDL_VIDEO_RENDER_OGL_ES2 && !SDL_RENDER_DISABLED
static const Uint8 GLES2_VertexSrc_Default_[] = " \
uniform mat4 u_projection; \
attribute vec2 a_position; \
attribute vec2 a_texCoord; \
attribute float a_angle; \
attribute vec2 a_center; \
varying vec2 v_texCoord; \
\
void main() \
\
";
static const Uint8 GLES2_FragmentSrc_SolidSrc_[] = " \
precision mediump float; \
uniform vec4 u_color; \
\
void main() \
\
";
static const Uint8 GLES2_FragmentSrc_TextureABGRSrc_[] = " \
precision mediump float; \
uniform sampler2D u_texture; \
uniform vec4 u_modulation; \
varying vec2 v_texCoord; \
\
void main() \
\
";
static const Uint8 GLES2_FragmentSrc_TextureARGBSrc_[] = " \
precision mediump float; \
uniform sampler2D u_texture; \
uniform vec4 u_modulation; \
varying vec2 v_texCoord; \
\
void main() \
\
";
static const Uint8 GLES2_FragmentSrc_TextureRGBSrc_[] = " \
precision mediump float; \
uniform sampler2D u_texture; \
uniform vec4 u_modulation; \
varying vec2 v_texCoord; \
\
void main() \
\
";
static const Uint8 GLES2_FragmentSrc_TextureBGRSrc_[] = " \
precision mediump float; \
uniform sampler2D u_texture; \
uniform vec4 u_modulation; \
varying vec2 v_texCoord; \
\
void main() \
\
";
static const Uint8 GLES2_FragmentSrc_TextureYUVSrc_[] = " \
precision mediump float; \
uniform sampler2D u_texture; \
uniform sampler2D u_texture_u; \
uniform sampler2D u_texture_v; \
uniform vec4 u_modulation; \
varying vec2 v_texCoord; \
\
void main() \
\
";
static const Uint8 GLES2_FragmentSrc_TextureNV12Src_[] = " \
precision mediump float; \
uniform sampler2D u_texture; \
uniform sampler2D u_texture_u; \
uniform vec4 u_modulation; \
varying vec2 v_texCoord; \
\
void main() \
\
";
static const Uint8 GLES2_FragmentSrc_TextureNV21Src_[] = " \
precision mediump float; \
uniform sampler2D u_texture; \
uniform sampler2D u_texture_u; \
uniform vec4 u_modulation; \
varying vec2 v_texCoord; \
\
void main() \
\
";
static const GLES2_ShaderInstance GLES2_VertexSrc_Default = ;
static const GLES2_ShaderInstance GLES2_FragmentSrc_SolidSrc = ;
static const GLES2_ShaderInstance GLES2_FragmentSrc_TextureABGRSrc = ;
static const GLES2_ShaderInstance GLES2_FragmentSrc_TextureARGBSrc = ;
static const GLES2_ShaderInstance GLES2_FragmentSrc_TextureRGBSrc = ;
static const GLES2_ShaderInstance GLES2_FragmentSrc_TextureBGRSrc = ;
static const GLES2_ShaderInstance GLES2_FragmentSrc_TextureYUVSrc = ;
static const GLES2_ShaderInstance GLES2_FragmentSrc_TextureNV12Src = ;
static const GLES2_ShaderInstance GLES2_FragmentSrc_TextureNV21Src = ;
#if GLES2_INCLUDE_NVIDIA_SHADERS
#define GL_NVIDIA_PLATFORM_BINARY_NV 0x890B
static const Uint8 GLES2_VertexTegra_Default_[] = ;
static const Uint8 GLES2_FragmentTegra_None_SolidSrc_[] = ;
static const Uint8 GLES2_FragmentTegra_Alpha_SolidSrc_[] = ;
static const Uint8 GLES2_FragmentTegra_Additive_SolidSrc_[] = ;
static const Uint8 GLES2_FragmentTegra_Modulated_SolidSrc_[] = ;
static const Uint8 GLES2_FragmentTegra_None_TextureSrc_[] = ;
static const Uint8 GLES2_FragmentTegra_Alpha_TextureSrc_[] = ;
static const Uint8 GLES2_FragmentTegra_Additive_TextureSrc_[] = ;
static const Uint8 GLES2_FragmentTegra_Modulated_TextureSrc_[] = ;
static const GLES2_ShaderInstance GLES2_VertexTegra_Default = ;
static const GLES2_ShaderInstance GLES2_FragmentTegra_None_SolidSrc = ;
static const GLES2_ShaderInstance GLES2_FragmentTegra_Alpha_SolidSrc = ;
static const GLES2_ShaderInstance GLES2_FragmentTegra_Additive_SolidSrc = ;
static const GLES2_ShaderInstance GLES2_FragmentTegra_Modulated_SolidSrc = ;
static const GLES2_ShaderInstance GLES2_FragmentTegra_None_TextureSrc = ;
static const GLES2_ShaderInstance GLES2_FragmentTegra_Alpha_TextureSrc = ;
static const GLES2_ShaderInstance GLES2_FragmentTegra_Additive_TextureSrc = ;
static const GLES2_ShaderInstance GLES2_FragmentTegra_Modulated_TextureSrc = ;
static GLES2_Shader GLES2_VertexShader_Default = ;
static GLES2_Shader GLES2_FragmentShader_None_SolidSrc = ;
static GLES2_Shader GLES2_FragmentShader_Alpha_SolidSrc = ;
static GLES2_Shader GLES2_FragmentShader_Additive_SolidSrc = ;
static GLES2_Shader GLES2_FragmentShader_Modulated_SolidSrc = ;
static GLES2_Shader GLES2_FragmentShader_None_TextureABGRSrc = ;
static GLES2_Shader GLES2_FragmentShader_Alpha_TextureABGRSrc = ;
static GLES2_Shader GLES2_FragmentShader_Additive_TextureABGRSrc = ;
static GLES2_Shader GLES2_FragmentShader_Modulated_TextureABGRSrc = ;
static GLES2_Shader GLES2_FragmentShader_None_TextureARGBSrc = ;
static GLES2_Shader GLES2_FragmentShader_Alpha_TextureARGBSrc = ;
static GLES2_Shader GLES2_FragmentShader_Additive_TextureARGBSrc = ;
static GLES2_Shader GLES2_FragmentShader_Modulated_TextureARGBSrc = ;
static GLES2_Shader GLES2_FragmentShader_None_TextureRGBSrc = ;
static GLES2_Shader GLES2_FragmentShader_Alpha_TextureRGBSrc = ;
static GLES2_Shader GLES2_FragmentShader_Additive_TextureRGBSrc = ;
static GLES2_Shader GLES2_FragmentShader_Modulated_TextureRGBSrc = ;
static GLES2_Shader GLES2_FragmentShader_None_TextureBGRSrc = ;
static GLES2_Shader GLES2_FragmentShader_Alpha_TextureBGRSrc = ;
static GLES2_Shader GLES2_FragmentShader_Additive_TextureBGRSrc = ;
static GLES2_Shader GLES2_FragmentShader_Modulated_TextureBGRSrc = ;
static GLES2_Shader GLES2_FragmentShader_TextureYUVSrc = ;
static GLES2_Shader GLES2_FragmentShader_TextureNV12Src = ;
static GLES2_Shader GLES2_FragmentShader_TextureNV21Src = ;
const GLES2_Shader *GLES2_GetShader(GLES2_ShaderType type, SDL_BlendMode blendMode)
