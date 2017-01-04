#define ACCEL 0.0001f
#define WIND_RESISTANCE 0.00005f
#define MAX_PARTICLES 2000
static GLuint particleTextureID;
static SDL_bool pointSizeExtensionSupported;
static float pointSizeScale;
enum particleType
;
struct particle
particles[MAX_PARTICLES];
static int num_active_particles;
static int screen_w, screen_h;
void spawnTrailFromEmitter(struct particle *emitter);
void spawnEmitterParticle(GLfloat x, GLfloat y);
void explodeEmitter(struct particle *emitter);
void initializeParticles(void);
void initializeTexture();
int nextPowerOfTwo(int x);
void drawParticles();
void stepParticles(double deltaTime);
int
nextPowerOfTwo(int x)
void
stepParticles(double deltaTime)
void
drawParticles()
void
explodeEmitter(struct particle *emitter)
void
spawnTrailFromEmitter(struct particle *emitter)
void
spawnEmitterParticle(GLfloat x, GLfloat y)
void
initializeParticles(void)
void
initializeTexture()
int
main(int argc, char *argv[])
