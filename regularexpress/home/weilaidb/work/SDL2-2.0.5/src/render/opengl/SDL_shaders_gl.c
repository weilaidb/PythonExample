#if SDL_VIDEO_RENDER_OGL && !SDL_RENDER_DISABLED
typedef struct
GL_ShaderData;
struct GL_ShaderContext
;
static const char *shader_source[NUM_SHADERS][2] =
;
static SDL_bool
CompileShader(GL_ShaderContext *ctx, GLhandleARB shader, const char *defines, const char *source)
static SDL_bool
CompileShaderProgram(GL_ShaderContext *ctx, int index, GL_ShaderData *data)
static void
DestroyShaderProgram(GL_ShaderContext *ctx, GL_ShaderData *data)
GL_ShaderContext *
GL_CreateShaderContext()
void
GL_SelectShader(GL_ShaderContext *ctx, GL_Shader shader)
void
GL_DestroyShaderContext(GL_ShaderContext *ctx)
