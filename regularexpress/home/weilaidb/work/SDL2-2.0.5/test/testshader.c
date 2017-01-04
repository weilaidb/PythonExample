static SDL_bool shaders_supported;
static int      current_shader = 0;
enum ;
typedef struct  ShaderData;
static ShaderData shaders[NUM_SHADERS] = ;
static PFNGLATTACHOBJECTARBPROC glAttachObjectARB;
static PFNGLCOMPILESHADERARBPROC glCompileShaderARB;
static PFNGLCREATEPROGRAMOBJECTARBPROC glCreateProgramObjectARB;
static PFNGLCREATESHADEROBJECTARBPROC glCreateShaderObjectARB;
static PFNGLDELETEOBJECTARBPROC glDeleteObjectARB;
static PFNGLGETINFOLOGARBPROC glGetInfoLogARB;
static PFNGLGETOBJECTPARAMETERIVARBPROC glGetObjectParameterivARB;
static PFNGLGETUNIFORMLOCATIONARBPROC glGetUniformLocationARB;
static PFNGLLINKPROGRAMARBPROC glLinkProgramARB;
static PFNGLSHADERSOURCEARBPROC glShaderSourceARB;
static PFNGLUNIFORM1IARBPROC glUniform1iARB;
static PFNGLUSEPROGRAMOBJECTARBPROC glUseProgramObjectARB;
static SDL_bool CompileShader(GLhandleARB shader, const char *source)
static SDL_bool CompileShaderProgram(ShaderData *data)
static void DestroyShaderProgram(ShaderData *data)
static SDL_bool InitShaders()
static void QuitShaders()
static int
power_of_two(int input)
GLuint
SDL_GL_LoadTexture(SDL_Surface * surface, GLfloat * texcoord)
void InitGL(int Width, int Height)
void DrawGLScene(SDL_Window *window, GLuint texture, GLfloat * texcoord)
int main(int argc, char **argv)
int
main(int argc, char *argv[])
