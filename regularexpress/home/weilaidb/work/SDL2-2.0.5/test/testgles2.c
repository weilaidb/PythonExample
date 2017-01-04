#if defined(__IPHONEOS__) || defined(__ANDROID__) || defined(__EMSCRIPTEN__) || defined(__NACL__)
#define HAVE_OPENGLES2
typedef struct GLES2_Context
GLES2_Context;
static SDLTest_CommonState *state;
static SDL_GLContext *context = NULL;
static int depth = 16;
static GLES2_Context ctx;
static int LoadContext(GLES2_Context * data)
static void
quit(int rc)
#define GL_CHECK(x) \
x; \
static void
rotate_matrix(float angle, float x, float y, float z, float *r)
static void
perspective_matrix(float fovy, float aspect, float znear, float zfar, float *r)
static void
multiply_matrix(float *lhs, float *rhs, float *r)
void
process_shader(GLuint *shader, const char * source, GLint shader_type)
const float _vertices[] =
;
const float _colors[] =
;
const char* _shader_vert_src =
" attribute vec4 av4position; "
" attribute vec3 av3color; "
" uniform mat4 mvp; "
" varying vec3 vv3color; "
" void main()  ";
const char* _shader_frag_src =
" precision lowp float; "
" varying vec3 vv3color; "
" void main()  ";
typedef struct shader_data
shader_data;
static void
Render(unsigned int width, unsigned int height, shader_data* data)
int done;
Uint32 frames;
shader_data *datas;
void loop()
int
main(int argc, char *argv[])
int
main(int argc, char *argv[])
