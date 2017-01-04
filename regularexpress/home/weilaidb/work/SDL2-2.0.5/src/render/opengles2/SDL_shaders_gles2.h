#if SDL_VIDEO_RENDER_OGL_ES2
#define SDL_shaderdata_h_
typedef struct GLES2_ShaderInstance
GLES2_ShaderInstance;
typedef struct GLES2_Shader
GLES2_Shader;
typedef enum
GLES2_ShaderType;
#define GLES2_SOURCE_SHADER (GLenum)-1
const GLES2_Shader *GLES2_GetShader(GLES2_ShaderType type, SDL_BlendMode blendMode);
