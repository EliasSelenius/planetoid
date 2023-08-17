
// Basics
typedef signed char int8;
typedef signed short int16;
typedef signed int int32;
typedef signed long long int64;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;
typedef float float32;
typedef double float64;
int printf(const char* format, ...);

// Structs forward declarations
typedef struct Transform Transform;
typedef struct Entity Entity;
typedef struct Planet Planet;
typedef struct VoxelGrid VoxelGrid;
typedef struct Intersection Intersection;
typedef struct Lineseg Lineseg;
typedef struct Ray Ray;
typedef struct GLFWvidmode GLFWvidmode;
typedef struct GLFWgammaramp GLFWgammaramp;
typedef struct GLFWimage GLFWimage;
typedef struct GLFWgamepadstate GLFWgamepadstate;
typedef struct string string;
typedef struct StringBuilder StringBuilder;
typedef struct Shader Shader;
typedef struct Framebuffer Framebuffer;
typedef struct Texture2D Texture2D;
typedef struct Color Color;
typedef struct ColorRgb ColorRgb;
typedef struct DrawBuffers DrawBuffers;
typedef struct vertex vertex;
typedef struct List List;
typedef struct vec2 vec2;
typedef struct ivec2 ivec2;
typedef struct Image Image;

// Enums

// Type aliases
typedef struct FILE FILE;
typedef int64 GLintptr;
typedef int64 GLint64;
typedef uint64 GLuint64;
typedef int64 GLsizeiptr;
typedef struct __GLsync __GLsync;
typedef __GLsync* GLsync;
typedef uint32 GLenum;
typedef uint8 GLboolean;
typedef uint32 GLbitfield;
typedef void GLvoid;
typedef int8 GLbyte;
typedef uint8 GLubyte;
typedef int16 GLshort;
typedef uint16 GLushort;
typedef int32 GLint;
typedef uint32 GLuint;
typedef int32 GLclampx;
typedef int32 GLsizei;
typedef float32 GLfloat;
typedef float32 GLclampf;
typedef float64 GLdouble;
typedef float64 GLclampd;
typedef void* GLeglClientBufferEXT;
typedef void* GLeglImageOES;
typedef char GLchar;
typedef char GLcharARB;
typedef void (*GLDEBUGPROC)(GLenum, GLenum, GLuint, GLenum, GLsizei, GLchar*, void*);
typedef void (*proc_glActiveShaderProgram)(GLuint, GLuint);
typedef void (*proc_glActiveTexture)(GLenum);
typedef void (*proc_glAttachShader)(GLuint, GLuint);
typedef void (*proc_glBeginConditionalRender)(GLuint, GLenum);
typedef void (*proc_glBeginQuery)(GLenum, GLuint);
typedef void (*proc_glBeginQueryIndexed)(GLenum, GLuint, GLuint);
typedef void (*proc_glBeginTransformFeedback)(GLenum);
typedef void (*proc_glBindAttribLocation)(GLuint, GLuint, GLchar*);
typedef void (*proc_glBindBuffer)(GLenum, GLuint);
typedef void (*proc_glBindBufferBase)(GLenum, GLuint, GLuint);
typedef void (*proc_glBindBufferRange)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr);
typedef void (*proc_glBindFragDataLocation)(GLuint, GLuint, GLchar*);
typedef void (*proc_glBindFragDataLocationIndexed)(GLuint, GLuint, GLuint, GLchar*);
typedef void (*proc_glBindFramebuffer)(GLenum, GLuint);
typedef void (*proc_glBindImageTexture)(GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum);
typedef void (*proc_glBindProgramPipeline)(GLuint);
typedef void (*proc_glBindRenderbuffer)(GLenum, GLuint);
typedef void (*proc_glBindSampler)(GLuint, GLuint);
typedef void (*proc_glBindTexture)(GLenum, GLuint);
typedef void (*proc_glBindTransformFeedback)(GLenum, GLuint);
typedef void (*proc_glBindVertexArray)(GLuint);
typedef void (*proc_glBindVertexBuffer)(GLuint, GLuint, GLintptr, GLsizei);
typedef void (*proc_glBlendColor)(GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (*proc_glBlendEquation)(GLenum);
typedef void (*proc_glBlendEquationSeparate)(GLenum, GLenum);
typedef void (*proc_glBlendEquationSeparatei)(GLuint, GLenum, GLenum);
typedef void (*proc_glBlendEquationi)(GLuint, GLenum);
typedef void (*proc_glBlendFunc)(GLenum, GLenum);
typedef void (*proc_glBlendFuncSeparate)(GLenum, GLenum, GLenum, GLenum);
typedef void (*proc_glBlendFuncSeparatei)(GLuint, GLenum, GLenum, GLenum, GLenum);
typedef void (*proc_glBlendFunci)(GLuint, GLenum, GLenum);
typedef void (*proc_glBlitFramebuffer)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
typedef void (*proc_glBufferData)(GLenum, GLsizeiptr, void*, GLenum);
typedef void (*proc_glBufferSubData)(GLenum, GLintptr, GLsizeiptr, void*);
typedef GLenum (*proc_glCheckFramebufferStatus)(GLenum);
typedef void (*proc_glClampColor)(GLenum, GLenum);
typedef void (*proc_glClear)(GLbitfield);
typedef void (*proc_glClearBufferData)(GLenum, GLenum, GLenum, GLenum, void*);
typedef void (*proc_glClearBufferSubData)(GLenum, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, void*);
typedef void (*proc_glClearBufferfi)(GLenum, GLint, GLfloat, GLint);
typedef void (*proc_glClearBufferfv)(GLenum, GLint, GLfloat*);
typedef void (*proc_glClearBufferiv)(GLenum, GLint, GLint*);
typedef void (*proc_glClearBufferuiv)(GLenum, GLint, GLuint*);
typedef void (*proc_glClearColor)(GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (*proc_glClearDepth)(GLdouble);
typedef void (*proc_glClearDepthf)(GLfloat);
typedef void (*proc_glClearStencil)(GLint);
typedef GLenum (*proc_glClientWaitSync)(GLsync, GLbitfield, GLuint64);
typedef void (*proc_glColorMask)(GLboolean, GLboolean, GLboolean, GLboolean);
typedef void (*proc_glColorMaski)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean);
typedef void (*proc_glCompileShader)(GLuint);
typedef void (*proc_glCompressedTexImage1D)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, void*);
typedef void (*proc_glCompressedTexImage2D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, void*);
typedef void (*proc_glCompressedTexImage3D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, void*);
typedef void (*proc_glCompressedTexSubImage1D)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, void*);
typedef void (*proc_glCompressedTexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, void*);
typedef void (*proc_glCompressedTexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, void*);
typedef void (*proc_glCopyBufferSubData)(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr);
typedef void (*proc_glCopyImageSubData)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei);
typedef void (*proc_glCopyTexImage1D)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint);
typedef void (*proc_glCopyTexImage2D)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
typedef void (*proc_glCopyTexSubImage1D)(GLenum, GLint, GLint, GLint, GLint, GLsizei);
typedef void (*proc_glCopyTexSubImage2D)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
typedef void (*proc_glCopyTexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
typedef GLuint (*proc_glCreateProgram)();
typedef GLuint (*proc_glCreateShader)(GLenum);
typedef GLuint (*proc_glCreateShaderProgramv)(GLenum, GLsizei, GLchar**);
typedef void (*proc_glCullFace)(GLenum);
typedef void (*proc_glDebugMessageCallback)(GLDEBUGPROC, void*);
typedef void (*proc_glDebugMessageControl)(GLenum, GLenum, GLenum, GLsizei, GLuint*, GLboolean);
typedef void (*proc_glDebugMessageInsert)(GLenum, GLenum, GLuint, GLenum, GLsizei, GLchar*);
typedef void (*proc_glDeleteBuffers)(GLsizei, GLuint*);
typedef void (*proc_glDeleteFramebuffers)(GLsizei, GLuint*);
typedef void (*proc_glDeleteProgram)(GLuint);
typedef void (*proc_glDeleteProgramPipelines)(GLsizei, GLuint*);
typedef void (*proc_glDeleteQueries)(GLsizei, GLuint*);
typedef void (*proc_glDeleteRenderbuffers)(GLsizei, GLuint*);
typedef void (*proc_glDeleteSamplers)(GLsizei, GLuint*);
typedef void (*proc_glDeleteShader)(GLuint);
typedef void (*proc_glDeleteSync)(GLsync);
typedef void (*proc_glDeleteTextures)(GLsizei, GLuint*);
typedef void (*proc_glDeleteTransformFeedbacks)(GLsizei, GLuint*);
typedef void (*proc_glDeleteVertexArrays)(GLsizei, GLuint*);
typedef void (*proc_glDepthFunc)(GLenum);
typedef void (*proc_glDepthMask)(GLboolean);
typedef void (*proc_glDepthRange)(GLdouble, GLdouble);
typedef void (*proc_glDepthRangeArrayv)(GLuint, GLsizei, GLdouble*);
typedef void (*proc_glDepthRangeIndexed)(GLuint, GLdouble, GLdouble);
typedef void (*proc_glDepthRangef)(GLfloat, GLfloat);
typedef void (*proc_glDetachShader)(GLuint, GLuint);
typedef void (*proc_glDisable)(GLenum);
typedef void (*proc_glDisableVertexAttribArray)(GLuint);
typedef void (*proc_glDisablei)(GLenum, GLuint);
typedef void (*proc_glDispatchCompute)(GLuint, GLuint, GLuint);
typedef void (*proc_glDispatchComputeIndirect)(GLintptr);
typedef void (*proc_glDrawArrays)(GLenum, GLint, GLsizei);
typedef void (*proc_glDrawArraysIndirect)(GLenum, void*);
typedef void (*proc_glDrawArraysInstanced)(GLenum, GLint, GLsizei, GLsizei);
typedef void (*proc_glDrawArraysInstancedBaseInstance)(GLenum, GLint, GLsizei, GLsizei, GLuint);
typedef void (*proc_glDrawBuffer)(GLenum);
typedef void (*proc_glDrawBuffers)(GLsizei, GLenum*);
typedef void (*proc_glDrawElements)(GLenum, GLsizei, GLenum, void*);
typedef void (*proc_glDrawElementsBaseVertex)(GLenum, GLsizei, GLenum, void*, GLint);
typedef void (*proc_glDrawElementsIndirect)(GLenum, GLenum, void*);
typedef void (*proc_glDrawElementsInstanced)(GLenum, GLsizei, GLenum, void*, GLsizei);
typedef void (*proc_glDrawElementsInstancedBaseInstance)(GLenum, GLsizei, GLenum, void*, GLsizei, GLuint);
typedef void (*proc_glDrawElementsInstancedBaseVertex)(GLenum, GLsizei, GLenum, void*, GLsizei, GLint);
typedef void (*proc_glDrawElementsInstancedBaseVertexBaseInstance)(GLenum, GLsizei, GLenum, void*, GLsizei, GLint, GLuint);
typedef void (*proc_glDrawRangeElements)(GLenum, GLuint, GLuint, GLsizei, GLenum, void*);
typedef void (*proc_glDrawRangeElementsBaseVertex)(GLenum, GLuint, GLuint, GLsizei, GLenum, void*, GLint);
typedef void (*proc_glDrawTransformFeedback)(GLenum, GLuint);
typedef void (*proc_glDrawTransformFeedbackInstanced)(GLenum, GLuint, GLsizei);
typedef void (*proc_glDrawTransformFeedbackStream)(GLenum, GLuint, GLuint);
typedef void (*proc_glDrawTransformFeedbackStreamInstanced)(GLenum, GLuint, GLuint, GLsizei);
typedef void (*proc_glEnable)(GLenum);
typedef void (*proc_glEnableVertexAttribArray)(GLuint);
typedef void (*proc_glEnablei)(GLenum, GLuint);
typedef void (*proc_glEndConditionalRender)();
typedef void (*proc_glEndQuery)(GLenum);
typedef void (*proc_glEndQueryIndexed)(GLenum, GLuint);
typedef void (*proc_glEndTransformFeedback)();
typedef GLsync (*proc_glFenceSync)(GLenum, GLbitfield);
typedef void (*proc_glFinish)();
typedef void (*proc_glFlush)();
typedef void (*proc_glFlushMappedBufferRange)(GLenum, GLintptr, GLsizeiptr);
typedef void (*proc_glFramebufferParameteri)(GLenum, GLenum, GLint);
typedef void (*proc_glFramebufferRenderbuffer)(GLenum, GLenum, GLenum, GLuint);
typedef void (*proc_glFramebufferTexture)(GLenum, GLenum, GLuint, GLint);
typedef void (*proc_glFramebufferTexture1D)(GLenum, GLenum, GLenum, GLuint, GLint);
typedef void (*proc_glFramebufferTexture2D)(GLenum, GLenum, GLenum, GLuint, GLint);
typedef void (*proc_glFramebufferTexture3D)(GLenum, GLenum, GLenum, GLuint, GLint, GLint);
typedef void (*proc_glFramebufferTextureLayer)(GLenum, GLenum, GLuint, GLint, GLint);
typedef void (*proc_glFrontFace)(GLenum);
typedef void (*proc_glGenBuffers)(GLsizei, GLuint*);
typedef void (*proc_glGenFramebuffers)(GLsizei, GLuint*);
typedef void (*proc_glGenProgramPipelines)(GLsizei, GLuint*);
typedef void (*proc_glGenQueries)(GLsizei, GLuint*);
typedef void (*proc_glGenRenderbuffers)(GLsizei, GLuint*);
typedef void (*proc_glGenSamplers)(GLsizei, GLuint*);
typedef void (*proc_glGenTextures)(GLsizei, GLuint*);
typedef void (*proc_glGenTransformFeedbacks)(GLsizei, GLuint*);
typedef void (*proc_glGenVertexArrays)(GLsizei, GLuint*);
typedef void (*proc_glGenerateMipmap)(GLenum);
typedef void (*proc_glGetActiveAtomicCounterBufferiv)(GLuint, GLuint, GLenum, GLint*);
typedef void (*proc_glGetActiveAttrib)(GLuint, GLuint, GLsizei, GLsizei*, GLint*, GLenum*, GLchar*);
typedef void (*proc_glGetActiveSubroutineName)(GLuint, GLenum, GLuint, GLsizei, GLsizei*, GLchar*);
typedef void (*proc_glGetActiveSubroutineUniformName)(GLuint, GLenum, GLuint, GLsizei, GLsizei*, GLchar*);
typedef void (*proc_glGetActiveSubroutineUniformiv)(GLuint, GLenum, GLuint, GLenum, GLint*);
typedef void (*proc_glGetActiveUniform)(GLuint, GLuint, GLsizei, GLsizei*, GLint*, GLenum*, GLchar*);
typedef void (*proc_glGetActiveUniformBlockName)(GLuint, GLuint, GLsizei, GLsizei*, GLchar*);
typedef void (*proc_glGetActiveUniformBlockiv)(GLuint, GLuint, GLenum, GLint*);
typedef void (*proc_glGetActiveUniformName)(GLuint, GLuint, GLsizei, GLsizei*, GLchar*);
typedef void (*proc_glGetActiveUniformsiv)(GLuint, GLsizei, GLuint*, GLenum, GLint*);
typedef void (*proc_glGetAttachedShaders)(GLuint, GLsizei, GLsizei*, GLuint*);
typedef GLint (*proc_glGetAttribLocation)(GLuint, GLchar*);
typedef void (*proc_glGetBooleani_v)(GLenum, GLuint, GLboolean*);
typedef void (*proc_glGetBooleanv)(GLenum, GLboolean*);
typedef void (*proc_glGetBufferParameteri64v)(GLenum, GLenum, GLint64*);
typedef void (*proc_glGetBufferParameteriv)(GLenum, GLenum, GLint*);
typedef void (*proc_glGetBufferPointerv)(GLenum, GLenum, void**);
typedef void (*proc_glGetBufferSubData)(GLenum, GLintptr, GLsizeiptr, void*);
typedef void (*proc_glGetCompressedTexImage)(GLenum, GLint, void*);
typedef GLuint (*proc_glGetDebugMessageLog)(GLuint, GLsizei, GLenum*, GLenum*, GLuint*, GLenum*, GLsizei*, GLchar*);
typedef void (*proc_glGetDoublei_v)(GLenum, GLuint, GLdouble*);
typedef void (*proc_glGetDoublev)(GLenum, GLdouble*);
typedef GLenum (*proc_glGetError)();
typedef void (*proc_glGetFloati_v)(GLenum, GLuint, GLfloat*);
typedef void (*proc_glGetFloatv)(GLenum, GLfloat*);
typedef GLint (*proc_glGetFragDataIndex)(GLuint, GLchar*);
typedef GLint (*proc_glGetFragDataLocation)(GLuint, GLchar*);
typedef void (*proc_glGetFramebufferAttachmentParameteriv)(GLenum, GLenum, GLenum, GLint*);
typedef void (*proc_glGetFramebufferParameteriv)(GLenum, GLenum, GLint*);
typedef void (*proc_glGetInteger64i_v)(GLenum, GLuint, GLint64*);
typedef void (*proc_glGetInteger64v)(GLenum, GLint64*);
typedef void (*proc_glGetIntegeri_v)(GLenum, GLuint, GLint*);
typedef void (*proc_glGetIntegerv)(GLenum, GLint*);
typedef void (*proc_glGetInternalformati64v)(GLenum, GLenum, GLenum, GLsizei, GLint64*);
typedef void (*proc_glGetInternalformativ)(GLenum, GLenum, GLenum, GLsizei, GLint*);
typedef void (*proc_glGetMultisamplefv)(GLenum, GLuint, GLfloat*);
typedef void (*proc_glGetObjectLabel)(GLenum, GLuint, GLsizei, GLsizei*, GLchar*);
typedef void (*proc_glGetObjectPtrLabel)(void*, GLsizei, GLsizei*, GLchar*);
typedef void (*proc_glGetPointerv)(GLenum, void**);
typedef void (*proc_glGetProgramBinary)(GLuint, GLsizei, GLsizei*, GLenum*, void*);
typedef void (*proc_glGetProgramInfoLog)(GLuint, GLsizei, GLsizei*, GLchar*);
typedef void (*proc_glGetProgramInterfaceiv)(GLuint, GLenum, GLenum, GLint*);
typedef void (*proc_glGetProgramPipelineInfoLog)(GLuint, GLsizei, GLsizei*, GLchar*);
typedef void (*proc_glGetProgramPipelineiv)(GLuint, GLenum, GLint*);
typedef GLuint (*proc_glGetProgramResourceIndex)(GLuint, GLenum, GLchar*);
typedef GLint (*proc_glGetProgramResourceLocation)(GLuint, GLenum, GLchar*);
typedef GLint (*proc_glGetProgramResourceLocationIndex)(GLuint, GLenum, GLchar*);
typedef void (*proc_glGetProgramResourceName)(GLuint, GLenum, GLuint, GLsizei, GLsizei*, GLchar*);
typedef void (*proc_glGetProgramResourceiv)(GLuint, GLenum, GLuint, GLsizei, GLenum*, GLsizei, GLsizei*, GLint*);
typedef void (*proc_glGetProgramStageiv)(GLuint, GLenum, GLenum, GLint*);
typedef void (*proc_glGetProgramiv)(GLuint, GLenum, GLint*);
typedef void (*proc_glGetQueryIndexediv)(GLenum, GLuint, GLenum, GLint*);
typedef void (*proc_glGetQueryObjecti64v)(GLuint, GLenum, GLint64*);
typedef void (*proc_glGetQueryObjectiv)(GLuint, GLenum, GLint*);
typedef void (*proc_glGetQueryObjectui64v)(GLuint, GLenum, GLuint64*);
typedef void (*proc_glGetQueryObjectuiv)(GLuint, GLenum, GLuint*);
typedef void (*proc_glGetQueryiv)(GLenum, GLenum, GLint*);
typedef void (*proc_glGetRenderbufferParameteriv)(GLenum, GLenum, GLint*);
typedef void (*proc_glGetSamplerParameterIiv)(GLuint, GLenum, GLint*);
typedef void (*proc_glGetSamplerParameterIuiv)(GLuint, GLenum, GLuint*);
typedef void (*proc_glGetSamplerParameterfv)(GLuint, GLenum, GLfloat*);
typedef void (*proc_glGetSamplerParameteriv)(GLuint, GLenum, GLint*);
typedef void (*proc_glGetShaderInfoLog)(GLuint, GLsizei, GLsizei*, GLchar*);
typedef void (*proc_glGetShaderPrecisionFormat)(GLenum, GLenum, GLint*, GLint*);
typedef void (*proc_glGetShaderSource)(GLuint, GLsizei, GLsizei*, GLchar*);
typedef void (*proc_glGetShaderiv)(GLuint, GLenum, GLint*);
typedef GLubyte* (*proc_glGetString)(GLenum);
typedef GLubyte* (*proc_glGetStringi)(GLenum, GLuint);
typedef GLuint (*proc_glGetSubroutineIndex)(GLuint, GLenum, GLchar*);
typedef GLint (*proc_glGetSubroutineUniformLocation)(GLuint, GLenum, GLchar*);
typedef void (*proc_glGetSynciv)(GLsync, GLenum, GLsizei, GLsizei*, GLint*);
typedef void (*proc_glGetTexImage)(GLenum, GLint, GLenum, GLenum, void*);
typedef void (*proc_glGetTexLevelParameterfv)(GLenum, GLint, GLenum, GLfloat*);
typedef void (*proc_glGetTexLevelParameteriv)(GLenum, GLint, GLenum, GLint*);
typedef void (*proc_glGetTexParameterIiv)(GLenum, GLenum, GLint*);
typedef void (*proc_glGetTexParameterIuiv)(GLenum, GLenum, GLuint*);
typedef void (*proc_glGetTexParameterfv)(GLenum, GLenum, GLfloat*);
typedef void (*proc_glGetTexParameteriv)(GLenum, GLenum, GLint*);
typedef void (*proc_glGetTransformFeedbackVarying)(GLuint, GLuint, GLsizei, GLsizei*, GLsizei*, GLenum*, GLchar*);
typedef GLuint (*proc_glGetUniformBlockIndex)(GLuint, GLchar*);
typedef void (*proc_glGetUniformIndices)(GLuint, GLsizei, GLchar**, GLuint*);
typedef GLint (*proc_glGetUniformLocation)(GLuint, GLchar*);
typedef void (*proc_glGetUniformSubroutineuiv)(GLenum, GLint, GLuint*);
typedef void (*proc_glGetUniformdv)(GLuint, GLint, GLdouble*);
typedef void (*proc_glGetUniformfv)(GLuint, GLint, GLfloat*);
typedef void (*proc_glGetUniformiv)(GLuint, GLint, GLint*);
typedef void (*proc_glGetUniformuiv)(GLuint, GLint, GLuint*);
typedef void (*proc_glGetVertexAttribIiv)(GLuint, GLenum, GLint*);
typedef void (*proc_glGetVertexAttribIuiv)(GLuint, GLenum, GLuint*);
typedef void (*proc_glGetVertexAttribLdv)(GLuint, GLenum, GLdouble*);
typedef void (*proc_glGetVertexAttribPointerv)(GLuint, GLenum, void**);
typedef void (*proc_glGetVertexAttribdv)(GLuint, GLenum, GLdouble*);
typedef void (*proc_glGetVertexAttribfv)(GLuint, GLenum, GLfloat*);
typedef void (*proc_glGetVertexAttribiv)(GLuint, GLenum, GLint*);
typedef void (*proc_glHint)(GLenum, GLenum);
typedef void (*proc_glInvalidateBufferData)(GLuint);
typedef void (*proc_glInvalidateBufferSubData)(GLuint, GLintptr, GLsizeiptr);
typedef void (*proc_glInvalidateFramebuffer)(GLenum, GLsizei, GLenum*);
typedef void (*proc_glInvalidateSubFramebuffer)(GLenum, GLsizei, GLenum*, GLint, GLint, GLsizei, GLsizei);
typedef void (*proc_glInvalidateTexImage)(GLuint, GLint);
typedef void (*proc_glInvalidateTexSubImage)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei);
typedef GLboolean (*proc_glIsBuffer)(GLuint);
typedef GLboolean (*proc_glIsEnabled)(GLenum);
typedef GLboolean (*proc_glIsEnabledi)(GLenum, GLuint);
typedef GLboolean (*proc_glIsFramebuffer)(GLuint);
typedef GLboolean (*proc_glIsProgram)(GLuint);
typedef GLboolean (*proc_glIsProgramPipeline)(GLuint);
typedef GLboolean (*proc_glIsQuery)(GLuint);
typedef GLboolean (*proc_glIsRenderbuffer)(GLuint);
typedef GLboolean (*proc_glIsSampler)(GLuint);
typedef GLboolean (*proc_glIsShader)(GLuint);
typedef GLboolean (*proc_glIsSync)(GLsync);
typedef GLboolean (*proc_glIsTexture)(GLuint);
typedef GLboolean (*proc_glIsTransformFeedback)(GLuint);
typedef GLboolean (*proc_glIsVertexArray)(GLuint);
typedef void (*proc_glLineWidth)(GLfloat);
typedef void (*proc_glLinkProgram)(GLuint);
typedef void (*proc_glLogicOp)(GLenum);
typedef void* (*proc_glMapBuffer)(GLenum, GLenum);
typedef void* (*proc_glMapBufferRange)(GLenum, GLintptr, GLsizeiptr, GLbitfield);
typedef void (*proc_glMemoryBarrier)(GLbitfield);
typedef void (*proc_glMinSampleShading)(GLfloat);
typedef void (*proc_glMultiDrawArrays)(GLenum, GLint*, GLsizei*, GLsizei);
typedef void (*proc_glMultiDrawArraysIndirect)(GLenum, void*, GLsizei, GLsizei);
typedef void (*proc_glMultiDrawElements)(GLenum, GLsizei*, GLenum, void**, GLsizei);
typedef void (*proc_glMultiDrawElementsBaseVertex)(GLenum, GLsizei*, GLenum, void**, GLsizei, GLint*);
typedef void (*proc_glMultiDrawElementsIndirect)(GLenum, GLenum, void*, GLsizei, GLsizei);
typedef void (*proc_glObjectLabel)(GLenum, GLuint, GLsizei, GLchar*);
typedef void (*proc_glObjectPtrLabel)(void*, GLsizei, GLchar*);
typedef void (*proc_glPatchParameterfv)(GLenum, GLfloat*);
typedef void (*proc_glPatchParameteri)(GLenum, GLint);
typedef void (*proc_glPauseTransformFeedback)();
typedef void (*proc_glPixelStoref)(GLenum, GLfloat);
typedef void (*proc_glPixelStorei)(GLenum, GLint);
typedef void (*proc_glPointParameterf)(GLenum, GLfloat);
typedef void (*proc_glPointParameterfv)(GLenum, GLfloat*);
typedef void (*proc_glPointParameteri)(GLenum, GLint);
typedef void (*proc_glPointParameteriv)(GLenum, GLint*);
typedef void (*proc_glPointSize)(GLfloat);
typedef void (*proc_glPolygonMode)(GLenum, GLenum);
typedef void (*proc_glPolygonOffset)(GLfloat, GLfloat);
typedef void (*proc_glPopDebugGroup)();
typedef void (*proc_glPrimitiveRestartIndex)(GLuint);
typedef void (*proc_glProgramBinary)(GLuint, GLenum, void*, GLsizei);
typedef void (*proc_glProgramParameteri)(GLuint, GLenum, GLint);
typedef void (*proc_glProgramUniform1d)(GLuint, GLint, GLdouble);
typedef void (*proc_glProgramUniform1dv)(GLuint, GLint, GLsizei, GLdouble*);
typedef void (*proc_glProgramUniform1f)(GLuint, GLint, GLfloat);
typedef void (*proc_glProgramUniform1fv)(GLuint, GLint, GLsizei, GLfloat*);
typedef void (*proc_glProgramUniform1i)(GLuint, GLint, GLint);
typedef void (*proc_glProgramUniform1iv)(GLuint, GLint, GLsizei, GLint*);
typedef void (*proc_glProgramUniform1ui)(GLuint, GLint, GLuint);
typedef void (*proc_glProgramUniform1uiv)(GLuint, GLint, GLsizei, GLuint*);
typedef void (*proc_glProgramUniform2d)(GLuint, GLint, GLdouble, GLdouble);
typedef void (*proc_glProgramUniform2dv)(GLuint, GLint, GLsizei, GLdouble*);
typedef void (*proc_glProgramUniform2f)(GLuint, GLint, GLfloat, GLfloat);
typedef void (*proc_glProgramUniform2fv)(GLuint, GLint, GLsizei, GLfloat*);
typedef void (*proc_glProgramUniform2i)(GLuint, GLint, GLint, GLint);
typedef void (*proc_glProgramUniform2iv)(GLuint, GLint, GLsizei, GLint*);
typedef void (*proc_glProgramUniform2ui)(GLuint, GLint, GLuint, GLuint);
typedef void (*proc_glProgramUniform2uiv)(GLuint, GLint, GLsizei, GLuint*);
typedef void (*proc_glProgramUniform3d)(GLuint, GLint, GLdouble, GLdouble, GLdouble);
typedef void (*proc_glProgramUniform3dv)(GLuint, GLint, GLsizei, GLdouble*);
typedef void (*proc_glProgramUniform3f)(GLuint, GLint, GLfloat, GLfloat, GLfloat);
typedef void (*proc_glProgramUniform3fv)(GLuint, GLint, GLsizei, GLfloat*);
typedef void (*proc_glProgramUniform3i)(GLuint, GLint, GLint, GLint, GLint);
typedef void (*proc_glProgramUniform3iv)(GLuint, GLint, GLsizei, GLint*);
typedef void (*proc_glProgramUniform3ui)(GLuint, GLint, GLuint, GLuint, GLuint);
typedef void (*proc_glProgramUniform3uiv)(GLuint, GLint, GLsizei, GLuint*);
typedef void (*proc_glProgramUniform4d)(GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble);
typedef void (*proc_glProgramUniform4dv)(GLuint, GLint, GLsizei, GLdouble*);
typedef void (*proc_glProgramUniform4f)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (*proc_glProgramUniform4fv)(GLuint, GLint, GLsizei, GLfloat*);
typedef void (*proc_glProgramUniform4i)(GLuint, GLint, GLint, GLint, GLint, GLint);
typedef void (*proc_glProgramUniform4iv)(GLuint, GLint, GLsizei, GLint*);
typedef void (*proc_glProgramUniform4ui)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint);
typedef void (*proc_glProgramUniform4uiv)(GLuint, GLint, GLsizei, GLuint*);
typedef void (*proc_glProgramUniformMatrix2dv)(GLuint, GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glProgramUniformMatrix2fv)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glProgramUniformMatrix2x3dv)(GLuint, GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glProgramUniformMatrix2x3fv)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glProgramUniformMatrix2x4dv)(GLuint, GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glProgramUniformMatrix2x4fv)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glProgramUniformMatrix3dv)(GLuint, GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glProgramUniformMatrix3fv)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glProgramUniformMatrix3x2dv)(GLuint, GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glProgramUniformMatrix3x2fv)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glProgramUniformMatrix3x4dv)(GLuint, GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glProgramUniformMatrix3x4fv)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glProgramUniformMatrix4dv)(GLuint, GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glProgramUniformMatrix4fv)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glProgramUniformMatrix4x2dv)(GLuint, GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glProgramUniformMatrix4x2fv)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glProgramUniformMatrix4x3dv)(GLuint, GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glProgramUniformMatrix4x3fv)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glProvokingVertex)(GLenum);
typedef void (*proc_glPushDebugGroup)(GLenum, GLuint, GLsizei, GLchar*);
typedef void (*proc_glQueryCounter)(GLuint, GLenum);
typedef void (*proc_glReadBuffer)(GLenum);
typedef void (*proc_glReadPixels)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void*);
typedef void (*proc_glReleaseShaderCompiler)();
typedef void (*proc_glRenderbufferStorage)(GLenum, GLenum, GLsizei, GLsizei);
typedef void (*proc_glRenderbufferStorageMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
typedef void (*proc_glResumeTransformFeedback)();
typedef void (*proc_glSampleCoverage)(GLfloat, GLboolean);
typedef void (*proc_glSampleMaski)(GLuint, GLbitfield);
typedef void (*proc_glSamplerParameterIiv)(GLuint, GLenum, GLint*);
typedef void (*proc_glSamplerParameterIuiv)(GLuint, GLenum, GLuint*);
typedef void (*proc_glSamplerParameterf)(GLuint, GLenum, GLfloat);
typedef void (*proc_glSamplerParameterfv)(GLuint, GLenum, GLfloat*);
typedef void (*proc_glSamplerParameteri)(GLuint, GLenum, GLint);
typedef void (*proc_glSamplerParameteriv)(GLuint, GLenum, GLint*);
typedef void (*proc_glScissor)(GLint, GLint, GLsizei, GLsizei);
typedef void (*proc_glScissorArrayv)(GLuint, GLsizei, GLint*);
typedef void (*proc_glScissorIndexed)(GLuint, GLint, GLint, GLsizei, GLsizei);
typedef void (*proc_glScissorIndexedv)(GLuint, GLint*);
typedef void (*proc_glShaderBinary)(GLsizei, GLuint*, GLenum, void*, GLsizei);
typedef void (*proc_glShaderSource)(GLuint, GLsizei, GLchar**, GLint*);
typedef void (*proc_glShaderStorageBlockBinding)(GLuint, GLuint, GLuint);
typedef void (*proc_glStencilFunc)(GLenum, GLint, GLuint);
typedef void (*proc_glStencilFuncSeparate)(GLenum, GLenum, GLint, GLuint);
typedef void (*proc_glStencilMask)(GLuint);
typedef void (*proc_glStencilMaskSeparate)(GLenum, GLuint);
typedef void (*proc_glStencilOp)(GLenum, GLenum, GLenum);
typedef void (*proc_glStencilOpSeparate)(GLenum, GLenum, GLenum, GLenum);
typedef void (*proc_glTexBuffer)(GLenum, GLenum, GLuint);
typedef void (*proc_glTexBufferRange)(GLenum, GLenum, GLuint, GLintptr, GLsizeiptr);
typedef void (*proc_glTexImage1D)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, void*);
typedef void (*proc_glTexImage2D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, void*);
typedef void (*proc_glTexImage2DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean);
typedef void (*proc_glTexImage3D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, void*);
typedef void (*proc_glTexImage3DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
typedef void (*proc_glTexParameterIiv)(GLenum, GLenum, GLint*);
typedef void (*proc_glTexParameterIuiv)(GLenum, GLenum, GLuint*);
typedef void (*proc_glTexParameterf)(GLenum, GLenum, GLfloat);
typedef void (*proc_glTexParameterfv)(GLenum, GLenum, GLfloat*);
typedef void (*proc_glTexParameteri)(GLenum, GLenum, GLint);
typedef void (*proc_glTexParameteriv)(GLenum, GLenum, GLint*);
typedef void (*proc_glTexStorage1D)(GLenum, GLsizei, GLenum, GLsizei);
typedef void (*proc_glTexStorage2D)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
typedef void (*proc_glTexStorage2DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean);
typedef void (*proc_glTexStorage3D)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
typedef void (*proc_glTexStorage3DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
typedef void (*proc_glTexSubImage1D)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, void*);
typedef void (*proc_glTexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void*);
typedef void (*proc_glTexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, void*);
typedef void (*proc_glTextureView)(GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint);
typedef void (*proc_glTransformFeedbackVaryings)(GLuint, GLsizei, GLchar**, GLenum);
typedef void (*proc_glUniform1d)(GLint, GLdouble);
typedef void (*proc_glUniform1dv)(GLint, GLsizei, GLdouble*);
typedef void (*proc_glUniform1f)(GLint, GLfloat);
typedef void (*proc_glUniform1fv)(GLint, GLsizei, GLfloat*);
typedef void (*proc_glUniform1i)(GLint, GLint);
typedef void (*proc_glUniform1iv)(GLint, GLsizei, GLint*);
typedef void (*proc_glUniform1ui)(GLint, GLuint);
typedef void (*proc_glUniform1uiv)(GLint, GLsizei, GLuint*);
typedef void (*proc_glUniform2d)(GLint, GLdouble, GLdouble);
typedef void (*proc_glUniform2dv)(GLint, GLsizei, GLdouble*);
typedef void (*proc_glUniform2f)(GLint, GLfloat, GLfloat);
typedef void (*proc_glUniform2fv)(GLint, GLsizei, GLfloat*);
typedef void (*proc_glUniform2i)(GLint, GLint, GLint);
typedef void (*proc_glUniform2iv)(GLint, GLsizei, GLint*);
typedef void (*proc_glUniform2ui)(GLint, GLuint, GLuint);
typedef void (*proc_glUniform2uiv)(GLint, GLsizei, GLuint*);
typedef void (*proc_glUniform3d)(GLint, GLdouble, GLdouble, GLdouble);
typedef void (*proc_glUniform3dv)(GLint, GLsizei, GLdouble*);
typedef void (*proc_glUniform3f)(GLint, GLfloat, GLfloat, GLfloat);
typedef void (*proc_glUniform3fv)(GLint, GLsizei, GLfloat*);
typedef void (*proc_glUniform3i)(GLint, GLint, GLint, GLint);
typedef void (*proc_glUniform3iv)(GLint, GLsizei, GLint*);
typedef void (*proc_glUniform3ui)(GLint, GLuint, GLuint, GLuint);
typedef void (*proc_glUniform3uiv)(GLint, GLsizei, GLuint*);
typedef void (*proc_glUniform4d)(GLint, GLdouble, GLdouble, GLdouble, GLdouble);
typedef void (*proc_glUniform4dv)(GLint, GLsizei, GLdouble*);
typedef void (*proc_glUniform4f)(GLint, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (*proc_glUniform4fv)(GLint, GLsizei, GLfloat*);
typedef void (*proc_glUniform4i)(GLint, GLint, GLint, GLint, GLint);
typedef void (*proc_glUniform4iv)(GLint, GLsizei, GLint*);
typedef void (*proc_glUniform4ui)(GLint, GLuint, GLuint, GLuint, GLuint);
typedef void (*proc_glUniform4uiv)(GLint, GLsizei, GLuint*);
typedef void (*proc_glUniformBlockBinding)(GLuint, GLuint, GLuint);
typedef void (*proc_glUniformMatrix2dv)(GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glUniformMatrix2fv)(GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glUniformMatrix2x3dv)(GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glUniformMatrix2x3fv)(GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glUniformMatrix2x4dv)(GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glUniformMatrix2x4fv)(GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glUniformMatrix3dv)(GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glUniformMatrix3fv)(GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glUniformMatrix3x2dv)(GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glUniformMatrix3x2fv)(GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glUniformMatrix3x4dv)(GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glUniformMatrix3x4fv)(GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glUniformMatrix4dv)(GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glUniformMatrix4fv)(GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glUniformMatrix4x2dv)(GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glUniformMatrix4x2fv)(GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glUniformMatrix4x3dv)(GLint, GLsizei, GLboolean, GLdouble*);
typedef void (*proc_glUniformMatrix4x3fv)(GLint, GLsizei, GLboolean, GLfloat*);
typedef void (*proc_glUniformSubroutinesuiv)(GLenum, GLsizei, GLuint*);
typedef GLboolean (*proc_glUnmapBuffer)(GLenum);
typedef void (*proc_glUseProgram)(GLuint);
typedef void (*proc_glUseProgramStages)(GLuint, GLbitfield, GLuint);
typedef void (*proc_glValidateProgram)(GLuint);
typedef void (*proc_glValidateProgramPipeline)(GLuint);
typedef void (*proc_glVertexAttrib1d)(GLuint, GLdouble);
typedef void (*proc_glVertexAttrib1dv)(GLuint, GLdouble*);
typedef void (*proc_glVertexAttrib1f)(GLuint, GLfloat);
typedef void (*proc_glVertexAttrib1fv)(GLuint, GLfloat*);
typedef void (*proc_glVertexAttrib1s)(GLuint, GLshort);
typedef void (*proc_glVertexAttrib1sv)(GLuint, GLshort*);
typedef void (*proc_glVertexAttrib2d)(GLuint, GLdouble, GLdouble);
typedef void (*proc_glVertexAttrib2dv)(GLuint, GLdouble*);
typedef void (*proc_glVertexAttrib2f)(GLuint, GLfloat, GLfloat);
typedef void (*proc_glVertexAttrib2fv)(GLuint, GLfloat*);
typedef void (*proc_glVertexAttrib2s)(GLuint, GLshort, GLshort);
typedef void (*proc_glVertexAttrib2sv)(GLuint, GLshort*);
typedef void (*proc_glVertexAttrib3d)(GLuint, GLdouble, GLdouble, GLdouble);
typedef void (*proc_glVertexAttrib3dv)(GLuint, GLdouble*);
typedef void (*proc_glVertexAttrib3f)(GLuint, GLfloat, GLfloat, GLfloat);
typedef void (*proc_glVertexAttrib3fv)(GLuint, GLfloat*);
typedef void (*proc_glVertexAttrib3s)(GLuint, GLshort, GLshort, GLshort);
typedef void (*proc_glVertexAttrib3sv)(GLuint, GLshort*);
typedef void (*proc_glVertexAttrib4Nbv)(GLuint, GLbyte*);
typedef void (*proc_glVertexAttrib4Niv)(GLuint, GLint*);
typedef void (*proc_glVertexAttrib4Nsv)(GLuint, GLshort*);
typedef void (*proc_glVertexAttrib4Nub)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte);
typedef void (*proc_glVertexAttrib4Nubv)(GLuint, GLubyte*);
typedef void (*proc_glVertexAttrib4Nuiv)(GLuint, GLuint*);
typedef void (*proc_glVertexAttrib4Nusv)(GLuint, GLushort*);
typedef void (*proc_glVertexAttrib4bv)(GLuint, GLbyte*);
typedef void (*proc_glVertexAttrib4d)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
typedef void (*proc_glVertexAttrib4dv)(GLuint, GLdouble*);
typedef void (*proc_glVertexAttrib4f)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (*proc_glVertexAttrib4fv)(GLuint, GLfloat*);
typedef void (*proc_glVertexAttrib4iv)(GLuint, GLint*);
typedef void (*proc_glVertexAttrib4s)(GLuint, GLshort, GLshort, GLshort, GLshort);
typedef void (*proc_glVertexAttrib4sv)(GLuint, GLshort*);
typedef void (*proc_glVertexAttrib4ubv)(GLuint, GLubyte*);
typedef void (*proc_glVertexAttrib4uiv)(GLuint, GLuint*);
typedef void (*proc_glVertexAttrib4usv)(GLuint, GLushort*);
typedef void (*proc_glVertexAttribBinding)(GLuint, GLuint);
typedef void (*proc_glVertexAttribDivisor)(GLuint, GLuint);
typedef void (*proc_glVertexAttribFormat)(GLuint, GLint, GLenum, GLboolean, GLuint);
typedef void (*proc_glVertexAttribI1i)(GLuint, GLint);
typedef void (*proc_glVertexAttribI1iv)(GLuint, GLint*);
typedef void (*proc_glVertexAttribI1ui)(GLuint, GLuint);
typedef void (*proc_glVertexAttribI1uiv)(GLuint, GLuint*);
typedef void (*proc_glVertexAttribI2i)(GLuint, GLint, GLint);
typedef void (*proc_glVertexAttribI2iv)(GLuint, GLint*);
typedef void (*proc_glVertexAttribI2ui)(GLuint, GLuint, GLuint);
typedef void (*proc_glVertexAttribI2uiv)(GLuint, GLuint*);
typedef void (*proc_glVertexAttribI3i)(GLuint, GLint, GLint, GLint);
typedef void (*proc_glVertexAttribI3iv)(GLuint, GLint*);
typedef void (*proc_glVertexAttribI3ui)(GLuint, GLuint, GLuint, GLuint);
typedef void (*proc_glVertexAttribI3uiv)(GLuint, GLuint*);
typedef void (*proc_glVertexAttribI4bv)(GLuint, GLbyte*);
typedef void (*proc_glVertexAttribI4i)(GLuint, GLint, GLint, GLint, GLint);
typedef void (*proc_glVertexAttribI4iv)(GLuint, GLint*);
typedef void (*proc_glVertexAttribI4sv)(GLuint, GLshort*);
typedef void (*proc_glVertexAttribI4ubv)(GLuint, GLubyte*);
typedef void (*proc_glVertexAttribI4ui)(GLuint, GLuint, GLuint, GLuint, GLuint);
typedef void (*proc_glVertexAttribI4uiv)(GLuint, GLuint*);
typedef void (*proc_glVertexAttribI4usv)(GLuint, GLushort*);
typedef void (*proc_glVertexAttribIFormat)(GLuint, GLint, GLenum, GLuint);
typedef void (*proc_glVertexAttribIPointer)(GLuint, GLint, GLenum, GLsizei, void*);
typedef void (*proc_glVertexAttribL1d)(GLuint, GLdouble);
typedef void (*proc_glVertexAttribL1dv)(GLuint, GLdouble*);
typedef void (*proc_glVertexAttribL2d)(GLuint, GLdouble, GLdouble);
typedef void (*proc_glVertexAttribL2dv)(GLuint, GLdouble*);
typedef void (*proc_glVertexAttribL3d)(GLuint, GLdouble, GLdouble, GLdouble);
typedef void (*proc_glVertexAttribL3dv)(GLuint, GLdouble*);
typedef void (*proc_glVertexAttribL4d)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
typedef void (*proc_glVertexAttribL4dv)(GLuint, GLdouble*);
typedef void (*proc_glVertexAttribLFormat)(GLuint, GLint, GLenum, GLuint);
typedef void (*proc_glVertexAttribLPointer)(GLuint, GLint, GLenum, GLsizei, void*);
typedef void (*proc_glVertexAttribP1ui)(GLuint, GLenum, GLboolean, GLuint);
typedef void (*proc_glVertexAttribP1uiv)(GLuint, GLenum, GLboolean, GLuint*);
typedef void (*proc_glVertexAttribP2ui)(GLuint, GLenum, GLboolean, GLuint);
typedef void (*proc_glVertexAttribP2uiv)(GLuint, GLenum, GLboolean, GLuint*);
typedef void (*proc_glVertexAttribP3ui)(GLuint, GLenum, GLboolean, GLuint);
typedef void (*proc_glVertexAttribP3uiv)(GLuint, GLenum, GLboolean, GLuint*);
typedef void (*proc_glVertexAttribP4ui)(GLuint, GLenum, GLboolean, GLuint);
typedef void (*proc_glVertexAttribP4uiv)(GLuint, GLenum, GLboolean, GLuint*);
typedef void (*proc_glVertexAttribPointer)(GLuint, GLint, GLenum, GLboolean, GLsizei, void*);
typedef void (*proc_glVertexBindingDivisor)(GLuint, GLuint);
typedef void (*proc_glViewport)(GLint, GLint, GLsizei, GLsizei);
typedef void (*proc_glViewportArrayv)(GLuint, GLsizei, GLfloat*);
typedef void (*proc_glViewportIndexedf)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (*proc_glViewportIndexedfv)(GLuint, GLfloat*);
typedef void (*proc_glWaitSync)(GLsync, GLbitfield, GLuint64);
typedef void (*GLFWglproc)();
typedef void (*GLFWvkproc)();
typedef struct GLFWmonitor GLFWmonitor;
typedef struct GLFWwindow GLFWwindow;
typedef struct GLFWcursor GLFWcursor;
typedef void (*GLFWerrorfun)(int32, char*);
typedef void (*GLFWwindowposfun)(GLFWwindow*, int32, int32);
typedef void (*GLFWwindowsizefun)(GLFWwindow*, int32, int32);
typedef void (*GLFWwindowclosefun)(GLFWwindow*);
typedef void (*GLFWwindowrefreshfun)(GLFWwindow*);
typedef void (*GLFWwindowfocusfun)(GLFWwindow*, int32);
typedef void (*GLFWwindowiconifyfun)(GLFWwindow*, int32);
typedef void (*GLFWwindowmaximizefun)(GLFWwindow*, int32);
typedef void (*GLFWframebuffersizefun)(GLFWwindow*, int32, int32);
typedef void (*GLFWwindowcontentscalefun)(GLFWwindow*, float32, float32);
typedef void (*GLFWmousebuttonfun)(GLFWwindow*, int32, int32, int32);
typedef void (*GLFWcursorposfun)(GLFWwindow*, float64, float64);
typedef void (*GLFWcursorenterfun)(GLFWwindow*, int32);
typedef void (*GLFWscrollfun)(GLFWwindow*, float64, float64);
typedef void (*GLFWkeyfun)(GLFWwindow*, int32, int32, int32, int32);
typedef void (*GLFWcharfun)(GLFWwindow*, uint32);
typedef void (*GLFWcharmodsfun)(GLFWwindow*, uint32, int32);
typedef void (*GLFWdropfun)(GLFWwindow*, int32, char**);
typedef void (*GLFWmonitorfun)(GLFWmonitor*, int32);
typedef void (*GLFWjoystickfun)(int32, int32);

// Structs
typedef struct GLFWvidmode {
    int32 width;
    int32 height;
    int32 redBits;
    int32 greenBits;
    int32 blueBits;
    int32 refreshRate;
} GLFWvidmode;
typedef struct GLFWgammaramp {
    uint16* red;
    uint16* green;
    uint16* blue;
    uint32 size;
} GLFWgammaramp;
typedef struct GLFWimage {
    int32 width;
    int32 height;
    uint8* pixels;
} GLFWimage;
typedef struct GLFWgamepadstate {
    int32 removeThisField;
} GLFWgamepadstate;
typedef struct string {
    char* chars;
    uint32 length;
} string;
typedef struct StringBuilder {
    char* content;
    uint32 capacity;
    uint32 length;
} StringBuilder;
typedef struct Shader {
    uint32 gl_handle;
} Shader;
typedef struct Framebuffer {
    uint32 width;
    uint32 height;
    uint32 gl_handle;
} Framebuffer;
typedef struct Texture2D {
    uint32 width;
    uint32 height;
    uint32 gl_handle;
} Texture2D;
typedef struct Color {
    uint8 r;
    uint8 g;
    uint8 b;
    uint8 a;
} Color;
typedef struct ColorRgb {
    uint8 r;
    uint8 g;
    uint8 b;
} ColorRgb;
typedef struct DrawBuffers {
    uint32 vao;
    uint32 vbo;
    uint32 ebo;
    int32 elements_count;
} DrawBuffers;
typedef struct List {
    uint32 stride;
    uint32 capacity;
    uint32 length;
} List;
typedef struct vec2 {
    float32 x;
    float32 y;
} vec2;
typedef struct ivec2 {
    int32 x;
    int32 y;
} ivec2;
typedef struct Image {
    uint32 width;
    uint32 height;
    Color* pixels;
} Image;
typedef struct Transform {
    vec2 pos;
    float32 rot;
    float32 scale;
} Transform;
typedef struct Intersection {
    vec2 surface_normal;
    float32 distance;
} Intersection;
typedef struct vertex {
    float32 x;
    float32 y;
    float32 u;
    float32 v;
    Color color;
} vertex;
typedef struct Planet {
    DrawBuffers db;
    vec2 pos;
    float32 rot;
    float32 radius;
    float32 dist;
    float32 yearDuration;
    float32 orbitOffset;
} Planet;
typedef struct Lineseg {
    vec2 start;
    vec2 end;
} Lineseg;
typedef struct Ray {
    vec2 origin;
    vec2 dir;
} Ray;
typedef struct VoxelGrid {
    Transform transform;
    float32* data;
    uint32 res;
    DrawBuffers db;
    uint32 inds_outline_ebo;
    uint32 numVerts;
    vertex* verts;
    uint32* inds;
    uint32* inds_outline;
} VoxelGrid;
typedef struct Entity {
    Transform transform;
    DrawBuffers db;
    vec2 vel;
} Entity;

// Forward declarations
static void init_gizmos();
static void dispatch_gizmos();
static void applyCamera();
static void applyTransform(Transform t);
static void uniform_entity_pos(vec2 pos);
static void uniform_entity_rot(float32 rot);
static void uniform_entity_scale(float32 scale);
static vec2 rotate_vec(vec2 dir, float32 angle);
static vec2 right(Transform t);
static vec2 up(Transform t);
static vec2 local2world1(Transform t, vec2 p);
static vec2 local2world2(Transform t, float32 x, float32 y);
static vec2 world2local1(Transform t, vec2 p);
static vec2 world2local2(Transform t, float32 x, float32 y);
static Entity* appendEntity(DrawBuffers db);
static DrawBuffers genCircle(int32 res, float32 radius);
static Planet genPlanet(float32 radius, float32 dist, float32 year);
static void drawPlanet(Planet* planet);
static void updateEntity(Entity* entity);
static vec2 getMouseWorldCoord();
static void mouse_scrollCallback(GLFWwindow* w, float64 x, float64 y);
static Texture2D load_texture(char* file_name);
static void load();
static VoxelGrid generatePlanet();
static int32 is_nan1(float32 x);
static int32 is_nan2(vec2 v);
int32 main();
static void add_tri(VoxelGrid* grid, uint32 i1, uint32 i2, uint32 i3);
static void add_outline(VoxelGrid* grid, uint32 i1, uint32 i2);
static uint32 getIndex(uint32 res, uint32 x, uint32 y);
static VoxelGrid createVoxelGrid(uint32 res);
static void updateGridMesh(VoxelGrid* grid);
static vec2 getLocalCoords(VoxelGrid* grid, float32 x, float32 y);
static void VoxelGrid_addCircle(VoxelGrid* grid, float32 radius, float32 x, float32 y);
static void VoxelGrid_removeCircle(VoxelGrid* grid, float32 radius, float32 x, float32 y);
static vec2 calcCenterOfMass(VoxelGrid* grid);
static vec2 rot90deg(vec2 v);
static int32 ray_lineseg_intersects(Ray ray, Lineseg seg, Intersection* out_intersection);
static int32 point_intersects(vec2 point, VoxelGrid* grid, Intersection* out_intersection);
int32 fopen_s(FILE** stream, char* filename, char* mode);
int32 fclose(FILE* stream);
int32 fseek(FILE* stream, int32 offset, int32 origin);
uint64 ftell(FILE* stream);
void rewind(FILE* stream);
uint64 fread(void* buffer, uint64 elementSize, uint64 elementCount, FILE* stream);
uint64 fwrite(void* ptr, uint64 size, uint64 nmemb, FILE* stream);
void* calloc(uint64 count, uint64 size);
void* malloc(uint64 size);
void free(void* block);
void* realloc(void* buffer, uint64 size);
void* memcpy(void* dst, void* src, uint64 size);
uint64 strlen(char* str);
static char* fileread1(char* filename);
static char* fileread2(char* filename, char* mode);
static void filewrite(char* filename, char* content);
static void load_opengl(void (*(*getProcAddress)(char*))());
int32 glfwInit();
void glfwTerminate();
void glfwInitHint(int32 hint, int32 value);
void glfwGetVersion(int32* major, int32* minor, int32* rev);
char* glfwGetVersionString();
int32 glfwGetError(char** description);
GLFWerrorfun glfwSetErrorCallback(GLFWerrorfun callback);
GLFWmonitor** glfwGetMonitors(int32* count);
GLFWmonitor* glfwGetPrimaryMonitor();
void glfwGetMonitorPos(GLFWmonitor* monitor, int32* xpos, int32* ypos);
void glfwGetMonitorWorkarea(GLFWmonitor* monitor, int32* xpos, int32* ypos, int32* width, int32* height);
void glfwGetMonitorPhysicalSize(GLFWmonitor* monitor, int32* widthMM, int32* heightMM);
void glfwGetMonitorContentScale(GLFWmonitor* monitor, float32* xscale, float32* yscale);
char* glfwGetMonitorName(GLFWmonitor* monitor);
void glfwSetMonitorUserPointer(GLFWmonitor* monitor, void* pointer);
void* glfwGetMonitorUserPointer(GLFWmonitor* monitor);
GLFWmonitorfun glfwSetMonitorCallback(GLFWmonitorfun callback);
GLFWvidmode* glfwGetVideoModes(GLFWmonitor* monitor, int32* count);
GLFWvidmode* glfwGetVideoMode(GLFWmonitor* monitor);
void glfwSetGamma(GLFWmonitor* monitor, float32 gamma);
GLFWgammaramp* glfwGetGammaRamp(GLFWmonitor* monitor);
void glfwSetGammaRamp(GLFWmonitor* monitor, GLFWgammaramp* ramp);
void glfwDefaultWindowHints();
void glfwWindowHint(int32 hint, int32 value);
void glfwWindowHintString(int32 hint, char* value);
GLFWwindow* glfwCreateWindow(int32 width, int32 height, char* title, GLFWmonitor* monitor, GLFWwindow* share);
void glfwDestroyWindow(GLFWwindow* window);
int32 glfwWindowShouldClose(GLFWwindow* window);
void glfwSetWindowShouldClose(GLFWwindow* window, int32 value);
void glfwSetWindowTitle(GLFWwindow* window, char* title);
void glfwSetWindowIcon(GLFWwindow* window, int32 count, GLFWimage* images);
void glfwGetWindowPos(GLFWwindow* window, int32* xpos, int32* ypos);
void glfwSetWindowPos(GLFWwindow* window, int32 xpos, int32 ypos);
void glfwGetWindowSize(GLFWwindow* window, int32* width, int32* height);
void glfwSetWindowSizeLimits(GLFWwindow* window, int32 minwidth, int32 minheight, int32 maxwidth, int32 maxheight);
void glfwSetWindowAspectRatio(GLFWwindow* window, int32 numer, int32 denom);
void glfwSetWindowSize(GLFWwindow* window, int32 width, int32 height);
void glfwGetFramebufferSize(GLFWwindow* window, int32* width, int32* height);
void glfwGetWindowFrameSize(GLFWwindow* window, int32* left, int32* top, int32* right, int32* bottom);
void glfwGetWindowContentScale(GLFWwindow* window, float32* xscale, float32* yscale);
float32 glfwGetWindowOpacity(GLFWwindow* window);
void glfwSetWindowOpacity(GLFWwindow* window, float32 opacity);
void glfwIconifyWindow(GLFWwindow* window);
void glfwRestoreWindow(GLFWwindow* window);
void glfwMaximizeWindow(GLFWwindow* window);
void glfwShowWindow(GLFWwindow* window);
void glfwHideWindow(GLFWwindow* window);
void glfwFocusWindow(GLFWwindow* window);
void glfwRequestWindowAttention(GLFWwindow* window);
GLFWmonitor* glfwGetWindowMonitor(GLFWwindow* window);
void glfwSetWindowMonitor(GLFWwindow* window, GLFWmonitor* monitor, int32 xpos, int32 ypos, int32 width, int32 height, int32 refreshRate);
int32 glfwGetWindowAttrib(GLFWwindow* window, int32 attrib);
void glfwSetWindowAttrib(GLFWwindow* window, int32 attrib, int32 value);
void glfwSetWindowUserPointer(GLFWwindow* window, void* pointer);
void* glfwGetWindowUserPointer(GLFWwindow* window);
GLFWwindowposfun glfwSetWindowPosCallback(GLFWwindow* window, GLFWwindowposfun callback);
GLFWwindowsizefun glfwSetWindowSizeCallback(GLFWwindow* window, GLFWwindowsizefun callback);
GLFWwindowclosefun glfwSetWindowCloseCallback(GLFWwindow* window, GLFWwindowclosefun callback);
GLFWwindowrefreshfun glfwSetWindowRefreshCallback(GLFWwindow* window, GLFWwindowrefreshfun callback);
GLFWwindowfocusfun glfwSetWindowFocusCallback(GLFWwindow* window, GLFWwindowfocusfun callback);
GLFWwindowiconifyfun glfwSetWindowIconifyCallback(GLFWwindow* window, GLFWwindowiconifyfun callback);
GLFWwindowmaximizefun glfwSetWindowMaximizeCallback(GLFWwindow* window, GLFWwindowmaximizefun callback);
GLFWframebuffersizefun glfwSetFramebufferSizeCallback(GLFWwindow* window, GLFWframebuffersizefun callback);
GLFWwindowcontentscalefun glfwSetWindowContentScaleCallback(GLFWwindow* window, GLFWwindowcontentscalefun callback);
void glfwPollEvents();
void glfwWaitEvents();
void glfwWaitEventsTimeout(float64 timeout);
void glfwPostEmptyEvent();
int32 glfwGetInputMode(GLFWwindow* window, int32 mode);
void glfwSetInputMode(GLFWwindow* window, int32 mode, int32 value);
int32 glfwRawMouseMotionSupported();
char* glfwGetKeyName(int32 key, int32 scancode);
int32 glfwGetKeyScancode(int32 key);
int32 glfwGetKey(GLFWwindow* window, int32 key);
int32 glfwGetMouseButton(GLFWwindow* window, int32 button);
void glfwGetCursorPos(GLFWwindow* window, float64* xpos, float64* ypos);
void glfwSetCursorPos(GLFWwindow* window, float64 xpos, float64 ypos);
GLFWcursor* glfwCreateCursor(GLFWimage* image, int32 xhot, int32 yhot);
GLFWcursor* glfwCreateStandardCursor(int32 shape);
void glfwDestroyCursor(GLFWcursor* cursor);
void glfwSetCursor(GLFWwindow* window, GLFWcursor* cursor);
GLFWkeyfun glfwSetKeyCallback(GLFWwindow* window, GLFWkeyfun callback);
GLFWcharfun glfwSetCharCallback(GLFWwindow* window, GLFWcharfun callback);
GLFWcharmodsfun glfwSetCharModsCallback(GLFWwindow* window, GLFWcharmodsfun callback);
GLFWmousebuttonfun glfwSetMouseButtonCallback(GLFWwindow* window, GLFWmousebuttonfun callback);
GLFWcursorposfun glfwSetCursorPosCallback(GLFWwindow* window, GLFWcursorposfun callback);
GLFWcursorenterfun glfwSetCursorEnterCallback(GLFWwindow* window, GLFWcursorenterfun callback);
GLFWscrollfun glfwSetScrollCallback(GLFWwindow* window, GLFWscrollfun callback);
GLFWdropfun glfwSetDropCallback(GLFWwindow* window, GLFWdropfun callback);
int32 glfwJoystickPresent(int32 jid);
float32* glfwGetJoystickAxes(int32 jid, int32* count);
uint8* glfwGetJoystickButtons(int32 jid, int32* count);
uint8* glfwGetJoystickHats(int32 jid, int32* count);
char* glfwGetJoystickName(int32 jid);
char* glfwGetJoystickGUID(int32 jid);
void glfwSetJoystickUserPointer(int32 jid, void* pointer);
void* glfwGetJoystickUserPointer(int32 jid);
int32 glfwJoystickIsGamepad(int32 jid);
GLFWjoystickfun glfwSetJoystickCallback(GLFWjoystickfun callback);
int32 glfwUpdateGamepadMappings(char* string);
char* glfwGetGamepadName(int32 jid);
int32 glfwGetGamepadState(int32 jid, GLFWgamepadstate* state);
void glfwSetClipboardString(GLFWwindow* window, char* string);
char* glfwGetClipboardString(GLFWwindow* window);
float64 glfwGetTime();
void glfwSetTime(float64 time);
uint64 glfwGetTimerValue();
uint64 glfwGetTimerFrequency();
void glfwMakeContextCurrent(GLFWwindow* window);
GLFWwindow* glfwGetCurrentContext();
void glfwSwapBuffers(GLFWwindow* window);
void glfwSwapInterval(int32 interval);
int32 glfwExtensionSupported(char* extension);
GLFWglproc glfwGetProcAddress(char* procname);
int32 glfwVulkanSupported();
char** glfwGetRequiredInstanceExtensions(uint32* count);
static string make_string(char* c_str);
static uint64 parse_int(string str);
static string to_string(uint64 num);
static int32 string_equals(string a, string b);
static int32 is_whitespace(char c);
static int32 is_upper_case_letter(char c);
static int32 is_lower_case_letter(char c);
static int32 is_letter(char c);
static int32 is_digit(char c);
static int32 is_hexdigit(char c);
static int32 is_alphanumeric(char c);
static int32 is_punctuation(char c);
static StringBuilder sb_create();
static void sb_free(StringBuilder sb);
static void sb_grow(StringBuilder* sb, uint32 len);
static void sb_append1(StringBuilder* sb, string str);
static void sb_append2(StringBuilder* sb, char* str);
static void sb_append3(StringBuilder* sb, char c);
static void sb_insert(StringBuilder* sb, int32 loc, string str);
static void sb_remove(StringBuilder* sb, int32 loc, uint32 num_chars);
static void sb_clear(StringBuilder* sb);
static int32 key1(char c);
static int32 key2(int32 c);
static int32 mouse(int32 btn);
static int32 grax_loop();
static void on_resize(GLFWwindow* main_window, int32 w, int32 h);
static void grax_init();
static void opengl_debug_callback(GLenum source, GLenum _type, GLuint id, GLenum severity, GLsizei length, GLchar* message, void* userParam);
static uint32 makeshader(uint32 program, GLenum _type, char* code);
static Shader create_shader(char* fragsrc, char* vertsrc);
static Color rgba(uint32 i);
static Texture2D create_texture2D(Image image);
static void bind(Texture2D tex);
static void set_filter(Texture2D tex, uint32 filter);
static DrawBuffers create_draw_buffers();
static void update_buffers(DrawBuffers* db, vertex* vertices, uint32 vertices_count, uint32* indices, uint32 indices_count);
static void update_buffer(uint32 buffer, uint32 size, void* data);
static void draw_elements1(DrawBuffers db);
static void draw_elements2(DrawBuffers db, uint32 instanceCount);
static void* list_create(uint32 stride);
static List* list_head(void* list);
static void list_clear(void* list);
static void list_add(void** list, void* data);
static uint32 list_length(void* list);
static void dispatch_immediate();
static void immediate_vertex1(float32 x, float32 y, float32 u, float32 v);
static void immediate_vertex2(float32 x, float32 y, float32 u, float32 v, Color color);
static void immediate_triangle(uint32 i1, uint32 i2, uint32 i3);
static void draw_rect(vec2 pos, vec2 size);
static void draw_image(Texture2D* image);
static void draw_char(vec2 pos, float32 size, char c, Color color);
static vec2 draw_text1(vec2 pos, float32 size, string text, Color color);
static vec2 draw_text_backwards(vec2 pos, float32 size, string text, Color color);
static vec2 draw_text2(vec2 pos, float32 size, char* text);
float64 sin(float64 t);
float32 sinf(float32 t);
float64 cos(float64 t);
float32 cosf(float32 t);
float64 sqrt(float64 x);
float32 sqrtf(float32 x);
static float32 random(int32 seed);
static int32 clamp1(int32 t, int32 min, int32 max);
static float32 clamp2(float32 t, float32 min, float32 max);
static float32 lerp1(float32 t, float32 a, float32 b);
static int32 round2int(float32 x);
static vec2 vec(float32 x, float32 y);
static vec2 sub(vec2 a, vec2 b);
static vec2 add(vec2 a, vec2 b);
static vec2 mul1(vec2 a, vec2 b);
static vec2 mul2(vec2 a, float32 s);
static vec2 neg(vec2 a);
static float32 dot(vec2 a, vec2 b);
static float32 sqlength(vec2 a);
static float32 length(vec2 a);
static vec2 normalize(vec2 a);
static vec2 reflect(vec2 a, vec2 normal);
static vec2 lerp2(float32 t, vec2 a, vec2 b);
static Image load_bitmap(char* filename);

// Declarations
static uint32 debug_lines_vao;
static uint32 debug_lines_vbo;
static vertex* debug_lines_vertices;
static Shader shader;
static Transform camera;
static VoxelGrid voxelGrid;
static float32 voxel_edit_radius = 1/*constant*/;
static DrawBuffers voxelMesh_circle;
static Texture2D player_texture;
static Texture2D random_texture;
static int32 entitiesLength = 0/*constant*/;
static Entity* entities;
static Entity* player;
static Planet* planets;
static proc_glActiveShaderProgram glActiveShaderProgram = 0/*constant*/;
static proc_glActiveTexture glActiveTexture = 0/*constant*/;
static proc_glAttachShader glAttachShader = 0/*constant*/;
static proc_glBeginConditionalRender glBeginConditionalRender = 0/*constant*/;
static proc_glBeginQuery glBeginQuery = 0/*constant*/;
static proc_glBeginQueryIndexed glBeginQueryIndexed = 0/*constant*/;
static proc_glBeginTransformFeedback glBeginTransformFeedback = 0/*constant*/;
static proc_glBindAttribLocation glBindAttribLocation = 0/*constant*/;
static proc_glBindBuffer glBindBuffer = 0/*constant*/;
static proc_glBindBufferBase glBindBufferBase = 0/*constant*/;
static proc_glBindBufferRange glBindBufferRange = 0/*constant*/;
static proc_glBindFragDataLocation glBindFragDataLocation = 0/*constant*/;
static proc_glBindFragDataLocationIndexed glBindFragDataLocationIndexed = 0/*constant*/;
static proc_glBindFramebuffer glBindFramebuffer = 0/*constant*/;
static proc_glBindImageTexture glBindImageTexture = 0/*constant*/;
static proc_glBindProgramPipeline glBindProgramPipeline = 0/*constant*/;
static proc_glBindRenderbuffer glBindRenderbuffer = 0/*constant*/;
static proc_glBindSampler glBindSampler = 0/*constant*/;
static proc_glBindTexture glBindTexture = 0/*constant*/;
static proc_glBindTransformFeedback glBindTransformFeedback = 0/*constant*/;
static proc_glBindVertexArray glBindVertexArray = 0/*constant*/;
static proc_glBindVertexBuffer glBindVertexBuffer = 0/*constant*/;
static proc_glBlendColor glBlendColor = 0/*constant*/;
static proc_glBlendEquation glBlendEquation = 0/*constant*/;
static proc_glBlendEquationSeparate glBlendEquationSeparate = 0/*constant*/;
static proc_glBlendEquationSeparatei glBlendEquationSeparatei = 0/*constant*/;
static proc_glBlendEquationi glBlendEquationi = 0/*constant*/;
static proc_glBlendFunc glBlendFunc = 0/*constant*/;
static proc_glBlendFuncSeparate glBlendFuncSeparate = 0/*constant*/;
static proc_glBlendFuncSeparatei glBlendFuncSeparatei = 0/*constant*/;
static proc_glBlendFunci glBlendFunci = 0/*constant*/;
static proc_glBlitFramebuffer glBlitFramebuffer = 0/*constant*/;
static proc_glBufferData glBufferData = 0/*constant*/;
static proc_glBufferSubData glBufferSubData = 0/*constant*/;
static proc_glCheckFramebufferStatus glCheckFramebufferStatus = 0/*constant*/;
static proc_glClampColor glClampColor = 0/*constant*/;
static proc_glClear glClear = 0/*constant*/;
static proc_glClearBufferData glClearBufferData = 0/*constant*/;
static proc_glClearBufferSubData glClearBufferSubData = 0/*constant*/;
static proc_glClearBufferfi glClearBufferfi = 0/*constant*/;
static proc_glClearBufferfv glClearBufferfv = 0/*constant*/;
static proc_glClearBufferiv glClearBufferiv = 0/*constant*/;
static proc_glClearBufferuiv glClearBufferuiv = 0/*constant*/;
static proc_glClearColor glClearColor = 0/*constant*/;
static proc_glClearDepth glClearDepth = 0/*constant*/;
static proc_glClearDepthf glClearDepthf = 0/*constant*/;
static proc_glClearStencil glClearStencil = 0/*constant*/;
static proc_glClientWaitSync glClientWaitSync = 0/*constant*/;
static proc_glColorMask glColorMask = 0/*constant*/;
static proc_glColorMaski glColorMaski = 0/*constant*/;
static proc_glCompileShader glCompileShader = 0/*constant*/;
static proc_glCompressedTexImage1D glCompressedTexImage1D = 0/*constant*/;
static proc_glCompressedTexImage2D glCompressedTexImage2D = 0/*constant*/;
static proc_glCompressedTexImage3D glCompressedTexImage3D = 0/*constant*/;
static proc_glCompressedTexSubImage1D glCompressedTexSubImage1D = 0/*constant*/;
static proc_glCompressedTexSubImage2D glCompressedTexSubImage2D = 0/*constant*/;
static proc_glCompressedTexSubImage3D glCompressedTexSubImage3D = 0/*constant*/;
static proc_glCopyBufferSubData glCopyBufferSubData = 0/*constant*/;
static proc_glCopyImageSubData glCopyImageSubData = 0/*constant*/;
static proc_glCopyTexImage1D glCopyTexImage1D = 0/*constant*/;
static proc_glCopyTexImage2D glCopyTexImage2D = 0/*constant*/;
static proc_glCopyTexSubImage1D glCopyTexSubImage1D = 0/*constant*/;
static proc_glCopyTexSubImage2D glCopyTexSubImage2D = 0/*constant*/;
static proc_glCopyTexSubImage3D glCopyTexSubImage3D = 0/*constant*/;
static proc_glCreateProgram glCreateProgram = 0/*constant*/;
static proc_glCreateShader glCreateShader = 0/*constant*/;
static proc_glCreateShaderProgramv glCreateShaderProgramv = 0/*constant*/;
static proc_glCullFace glCullFace = 0/*constant*/;
static proc_glDebugMessageCallback glDebugMessageCallback = 0/*constant*/;
static proc_glDebugMessageControl glDebugMessageControl = 0/*constant*/;
static proc_glDebugMessageInsert glDebugMessageInsert = 0/*constant*/;
static proc_glDeleteBuffers glDeleteBuffers = 0/*constant*/;
static proc_glDeleteFramebuffers glDeleteFramebuffers = 0/*constant*/;
static proc_glDeleteProgram glDeleteProgram = 0/*constant*/;
static proc_glDeleteProgramPipelines glDeleteProgramPipelines = 0/*constant*/;
static proc_glDeleteQueries glDeleteQueries = 0/*constant*/;
static proc_glDeleteRenderbuffers glDeleteRenderbuffers = 0/*constant*/;
static proc_glDeleteSamplers glDeleteSamplers = 0/*constant*/;
static proc_glDeleteShader glDeleteShader = 0/*constant*/;
static proc_glDeleteSync glDeleteSync = 0/*constant*/;
static proc_glDeleteTextures glDeleteTextures = 0/*constant*/;
static proc_glDeleteTransformFeedbacks glDeleteTransformFeedbacks = 0/*constant*/;
static proc_glDeleteVertexArrays glDeleteVertexArrays = 0/*constant*/;
static proc_glDepthFunc glDepthFunc = 0/*constant*/;
static proc_glDepthMask glDepthMask = 0/*constant*/;
static proc_glDepthRange glDepthRange = 0/*constant*/;
static proc_glDepthRangeArrayv glDepthRangeArrayv = 0/*constant*/;
static proc_glDepthRangeIndexed glDepthRangeIndexed = 0/*constant*/;
static proc_glDepthRangef glDepthRangef = 0/*constant*/;
static proc_glDetachShader glDetachShader = 0/*constant*/;
static proc_glDisable glDisable = 0/*constant*/;
static proc_glDisableVertexAttribArray glDisableVertexAttribArray = 0/*constant*/;
static proc_glDisablei glDisablei = 0/*constant*/;
static proc_glDispatchCompute glDispatchCompute = 0/*constant*/;
static proc_glDispatchComputeIndirect glDispatchComputeIndirect = 0/*constant*/;
static proc_glDrawArrays glDrawArrays = 0/*constant*/;
static proc_glDrawArraysIndirect glDrawArraysIndirect = 0/*constant*/;
static proc_glDrawArraysInstanced glDrawArraysInstanced = 0/*constant*/;
static proc_glDrawArraysInstancedBaseInstance glDrawArraysInstancedBaseInstance = 0/*constant*/;
static proc_glDrawBuffer glDrawBuffer = 0/*constant*/;
static proc_glDrawBuffers glDrawBuffers = 0/*constant*/;
static proc_glDrawElements glDrawElements = 0/*constant*/;
static proc_glDrawElementsBaseVertex glDrawElementsBaseVertex = 0/*constant*/;
static proc_glDrawElementsIndirect glDrawElementsIndirect = 0/*constant*/;
static proc_glDrawElementsInstanced glDrawElementsInstanced = 0/*constant*/;
static proc_glDrawElementsInstancedBaseInstance glDrawElementsInstancedBaseInstance = 0/*constant*/;
static proc_glDrawElementsInstancedBaseVertex glDrawElementsInstancedBaseVertex = 0/*constant*/;
static proc_glDrawElementsInstancedBaseVertexBaseInstance glDrawElementsInstancedBaseVertexBaseInstance = 0/*constant*/;
static proc_glDrawRangeElements glDrawRangeElements = 0/*constant*/;
static proc_glDrawRangeElementsBaseVertex glDrawRangeElementsBaseVertex = 0/*constant*/;
static proc_glDrawTransformFeedback glDrawTransformFeedback = 0/*constant*/;
static proc_glDrawTransformFeedbackInstanced glDrawTransformFeedbackInstanced = 0/*constant*/;
static proc_glDrawTransformFeedbackStream glDrawTransformFeedbackStream = 0/*constant*/;
static proc_glDrawTransformFeedbackStreamInstanced glDrawTransformFeedbackStreamInstanced = 0/*constant*/;
static proc_glEnable glEnable = 0/*constant*/;
static proc_glEnableVertexAttribArray glEnableVertexAttribArray = 0/*constant*/;
static proc_glEnablei glEnablei = 0/*constant*/;
static proc_glEndConditionalRender glEndConditionalRender = 0/*constant*/;
static proc_glEndQuery glEndQuery = 0/*constant*/;
static proc_glEndQueryIndexed glEndQueryIndexed = 0/*constant*/;
static proc_glEndTransformFeedback glEndTransformFeedback = 0/*constant*/;
static proc_glFenceSync glFenceSync = 0/*constant*/;
static proc_glFinish glFinish = 0/*constant*/;
static proc_glFlush glFlush = 0/*constant*/;
static proc_glFlushMappedBufferRange glFlushMappedBufferRange = 0/*constant*/;
static proc_glFramebufferParameteri glFramebufferParameteri = 0/*constant*/;
static proc_glFramebufferRenderbuffer glFramebufferRenderbuffer = 0/*constant*/;
static proc_glFramebufferTexture glFramebufferTexture = 0/*constant*/;
static proc_glFramebufferTexture1D glFramebufferTexture1D = 0/*constant*/;
static proc_glFramebufferTexture2D glFramebufferTexture2D = 0/*constant*/;
static proc_glFramebufferTexture3D glFramebufferTexture3D = 0/*constant*/;
static proc_glFramebufferTextureLayer glFramebufferTextureLayer = 0/*constant*/;
static proc_glFrontFace glFrontFace = 0/*constant*/;
static proc_glGenBuffers glGenBuffers = 0/*constant*/;
static proc_glGenFramebuffers glGenFramebuffers = 0/*constant*/;
static proc_glGenProgramPipelines glGenProgramPipelines = 0/*constant*/;
static proc_glGenQueries glGenQueries = 0/*constant*/;
static proc_glGenRenderbuffers glGenRenderbuffers = 0/*constant*/;
static proc_glGenSamplers glGenSamplers = 0/*constant*/;
static proc_glGenTextures glGenTextures = 0/*constant*/;
static proc_glGenTransformFeedbacks glGenTransformFeedbacks = 0/*constant*/;
static proc_glGenVertexArrays glGenVertexArrays = 0/*constant*/;
static proc_glGenerateMipmap glGenerateMipmap = 0/*constant*/;
static proc_glGetActiveAtomicCounterBufferiv glGetActiveAtomicCounterBufferiv = 0/*constant*/;
static proc_glGetActiveAttrib glGetActiveAttrib = 0/*constant*/;
static proc_glGetActiveSubroutineName glGetActiveSubroutineName = 0/*constant*/;
static proc_glGetActiveSubroutineUniformName glGetActiveSubroutineUniformName = 0/*constant*/;
static proc_glGetActiveSubroutineUniformiv glGetActiveSubroutineUniformiv = 0/*constant*/;
static proc_glGetActiveUniform glGetActiveUniform = 0/*constant*/;
static proc_glGetActiveUniformBlockName glGetActiveUniformBlockName = 0/*constant*/;
static proc_glGetActiveUniformBlockiv glGetActiveUniformBlockiv = 0/*constant*/;
static proc_glGetActiveUniformName glGetActiveUniformName = 0/*constant*/;
static proc_glGetActiveUniformsiv glGetActiveUniformsiv = 0/*constant*/;
static proc_glGetAttachedShaders glGetAttachedShaders = 0/*constant*/;
static proc_glGetAttribLocation glGetAttribLocation = 0/*constant*/;
static proc_glGetBooleani_v glGetBooleani_v = 0/*constant*/;
static proc_glGetBooleanv glGetBooleanv = 0/*constant*/;
static proc_glGetBufferParameteri64v glGetBufferParameteri64v = 0/*constant*/;
static proc_glGetBufferParameteriv glGetBufferParameteriv = 0/*constant*/;
static proc_glGetBufferPointerv glGetBufferPointerv = 0/*constant*/;
static proc_glGetBufferSubData glGetBufferSubData = 0/*constant*/;
static proc_glGetCompressedTexImage glGetCompressedTexImage = 0/*constant*/;
static proc_glGetDebugMessageLog glGetDebugMessageLog = 0/*constant*/;
static proc_glGetDoublei_v glGetDoublei_v = 0/*constant*/;
static proc_glGetDoublev glGetDoublev = 0/*constant*/;
static proc_glGetError glGetError = 0/*constant*/;
static proc_glGetFloati_v glGetFloati_v = 0/*constant*/;
static proc_glGetFloatv glGetFloatv = 0/*constant*/;
static proc_glGetFragDataIndex glGetFragDataIndex = 0/*constant*/;
static proc_glGetFragDataLocation glGetFragDataLocation = 0/*constant*/;
static proc_glGetFramebufferAttachmentParameteriv glGetFramebufferAttachmentParameteriv = 0/*constant*/;
static proc_glGetFramebufferParameteriv glGetFramebufferParameteriv = 0/*constant*/;
static proc_glGetInteger64i_v glGetInteger64i_v = 0/*constant*/;
static proc_glGetInteger64v glGetInteger64v = 0/*constant*/;
static proc_glGetIntegeri_v glGetIntegeri_v = 0/*constant*/;
static proc_glGetIntegerv glGetIntegerv = 0/*constant*/;
static proc_glGetInternalformati64v glGetInternalformati64v = 0/*constant*/;
static proc_glGetInternalformativ glGetInternalformativ = 0/*constant*/;
static proc_glGetMultisamplefv glGetMultisamplefv = 0/*constant*/;
static proc_glGetObjectLabel glGetObjectLabel = 0/*constant*/;
static proc_glGetObjectPtrLabel glGetObjectPtrLabel = 0/*constant*/;
static proc_glGetPointerv glGetPointerv = 0/*constant*/;
static proc_glGetProgramBinary glGetProgramBinary = 0/*constant*/;
static proc_glGetProgramInfoLog glGetProgramInfoLog = 0/*constant*/;
static proc_glGetProgramInterfaceiv glGetProgramInterfaceiv = 0/*constant*/;
static proc_glGetProgramPipelineInfoLog glGetProgramPipelineInfoLog = 0/*constant*/;
static proc_glGetProgramPipelineiv glGetProgramPipelineiv = 0/*constant*/;
static proc_glGetProgramResourceIndex glGetProgramResourceIndex = 0/*constant*/;
static proc_glGetProgramResourceLocation glGetProgramResourceLocation = 0/*constant*/;
static proc_glGetProgramResourceLocationIndex glGetProgramResourceLocationIndex = 0/*constant*/;
static proc_glGetProgramResourceName glGetProgramResourceName = 0/*constant*/;
static proc_glGetProgramResourceiv glGetProgramResourceiv = 0/*constant*/;
static proc_glGetProgramStageiv glGetProgramStageiv = 0/*constant*/;
static proc_glGetProgramiv glGetProgramiv = 0/*constant*/;
static proc_glGetQueryIndexediv glGetQueryIndexediv = 0/*constant*/;
static proc_glGetQueryObjecti64v glGetQueryObjecti64v = 0/*constant*/;
static proc_glGetQueryObjectiv glGetQueryObjectiv = 0/*constant*/;
static proc_glGetQueryObjectui64v glGetQueryObjectui64v = 0/*constant*/;
static proc_glGetQueryObjectuiv glGetQueryObjectuiv = 0/*constant*/;
static proc_glGetQueryiv glGetQueryiv = 0/*constant*/;
static proc_glGetRenderbufferParameteriv glGetRenderbufferParameteriv = 0/*constant*/;
static proc_glGetSamplerParameterIiv glGetSamplerParameterIiv = 0/*constant*/;
static proc_glGetSamplerParameterIuiv glGetSamplerParameterIuiv = 0/*constant*/;
static proc_glGetSamplerParameterfv glGetSamplerParameterfv = 0/*constant*/;
static proc_glGetSamplerParameteriv glGetSamplerParameteriv = 0/*constant*/;
static proc_glGetShaderInfoLog glGetShaderInfoLog = 0/*constant*/;
static proc_glGetShaderPrecisionFormat glGetShaderPrecisionFormat = 0/*constant*/;
static proc_glGetShaderSource glGetShaderSource = 0/*constant*/;
static proc_glGetShaderiv glGetShaderiv = 0/*constant*/;
static proc_glGetString glGetString = 0/*constant*/;
static proc_glGetStringi glGetStringi = 0/*constant*/;
static proc_glGetSubroutineIndex glGetSubroutineIndex = 0/*constant*/;
static proc_glGetSubroutineUniformLocation glGetSubroutineUniformLocation = 0/*constant*/;
static proc_glGetSynciv glGetSynciv = 0/*constant*/;
static proc_glGetTexImage glGetTexImage = 0/*constant*/;
static proc_glGetTexLevelParameterfv glGetTexLevelParameterfv = 0/*constant*/;
static proc_glGetTexLevelParameteriv glGetTexLevelParameteriv = 0/*constant*/;
static proc_glGetTexParameterIiv glGetTexParameterIiv = 0/*constant*/;
static proc_glGetTexParameterIuiv glGetTexParameterIuiv = 0/*constant*/;
static proc_glGetTexParameterfv glGetTexParameterfv = 0/*constant*/;
static proc_glGetTexParameteriv glGetTexParameteriv = 0/*constant*/;
static proc_glGetTransformFeedbackVarying glGetTransformFeedbackVarying = 0/*constant*/;
static proc_glGetUniformBlockIndex glGetUniformBlockIndex = 0/*constant*/;
static proc_glGetUniformIndices glGetUniformIndices = 0/*constant*/;
static proc_glGetUniformLocation glGetUniformLocation = 0/*constant*/;
static proc_glGetUniformSubroutineuiv glGetUniformSubroutineuiv = 0/*constant*/;
static proc_glGetUniformdv glGetUniformdv = 0/*constant*/;
static proc_glGetUniformfv glGetUniformfv = 0/*constant*/;
static proc_glGetUniformiv glGetUniformiv = 0/*constant*/;
static proc_glGetUniformuiv glGetUniformuiv = 0/*constant*/;
static proc_glGetVertexAttribIiv glGetVertexAttribIiv = 0/*constant*/;
static proc_glGetVertexAttribIuiv glGetVertexAttribIuiv = 0/*constant*/;
static proc_glGetVertexAttribLdv glGetVertexAttribLdv = 0/*constant*/;
static proc_glGetVertexAttribPointerv glGetVertexAttribPointerv = 0/*constant*/;
static proc_glGetVertexAttribdv glGetVertexAttribdv = 0/*constant*/;
static proc_glGetVertexAttribfv glGetVertexAttribfv = 0/*constant*/;
static proc_glGetVertexAttribiv glGetVertexAttribiv = 0/*constant*/;
static proc_glHint glHint = 0/*constant*/;
static proc_glInvalidateBufferData glInvalidateBufferData = 0/*constant*/;
static proc_glInvalidateBufferSubData glInvalidateBufferSubData = 0/*constant*/;
static proc_glInvalidateFramebuffer glInvalidateFramebuffer = 0/*constant*/;
static proc_glInvalidateSubFramebuffer glInvalidateSubFramebuffer = 0/*constant*/;
static proc_glInvalidateTexImage glInvalidateTexImage = 0/*constant*/;
static proc_glInvalidateTexSubImage glInvalidateTexSubImage = 0/*constant*/;
static proc_glIsBuffer glIsBuffer = 0/*constant*/;
static proc_glIsEnabled glIsEnabled = 0/*constant*/;
static proc_glIsEnabledi glIsEnabledi = 0/*constant*/;
static proc_glIsFramebuffer glIsFramebuffer = 0/*constant*/;
static proc_glIsProgram glIsProgram = 0/*constant*/;
static proc_glIsProgramPipeline glIsProgramPipeline = 0/*constant*/;
static proc_glIsQuery glIsQuery = 0/*constant*/;
static proc_glIsRenderbuffer glIsRenderbuffer = 0/*constant*/;
static proc_glIsSampler glIsSampler = 0/*constant*/;
static proc_glIsShader glIsShader = 0/*constant*/;
static proc_glIsSync glIsSync = 0/*constant*/;
static proc_glIsTexture glIsTexture = 0/*constant*/;
static proc_glIsTransformFeedback glIsTransformFeedback = 0/*constant*/;
static proc_glIsVertexArray glIsVertexArray = 0/*constant*/;
static proc_glLineWidth glLineWidth = 0/*constant*/;
static proc_glLinkProgram glLinkProgram = 0/*constant*/;
static proc_glLogicOp glLogicOp = 0/*constant*/;
static proc_glMapBuffer glMapBuffer = 0/*constant*/;
static proc_glMapBufferRange glMapBufferRange = 0/*constant*/;
static proc_glMemoryBarrier glMemoryBarrier = 0/*constant*/;
static proc_glMinSampleShading glMinSampleShading = 0/*constant*/;
static proc_glMultiDrawArrays glMultiDrawArrays = 0/*constant*/;
static proc_glMultiDrawArraysIndirect glMultiDrawArraysIndirect = 0/*constant*/;
static proc_glMultiDrawElements glMultiDrawElements = 0/*constant*/;
static proc_glMultiDrawElementsBaseVertex glMultiDrawElementsBaseVertex = 0/*constant*/;
static proc_glMultiDrawElementsIndirect glMultiDrawElementsIndirect = 0/*constant*/;
static proc_glObjectLabel glObjectLabel = 0/*constant*/;
static proc_glObjectPtrLabel glObjectPtrLabel = 0/*constant*/;
static proc_glPatchParameterfv glPatchParameterfv = 0/*constant*/;
static proc_glPatchParameteri glPatchParameteri = 0/*constant*/;
static proc_glPauseTransformFeedback glPauseTransformFeedback = 0/*constant*/;
static proc_glPixelStoref glPixelStoref = 0/*constant*/;
static proc_glPixelStorei glPixelStorei = 0/*constant*/;
static proc_glPointParameterf glPointParameterf = 0/*constant*/;
static proc_glPointParameterfv glPointParameterfv = 0/*constant*/;
static proc_glPointParameteri glPointParameteri = 0/*constant*/;
static proc_glPointParameteriv glPointParameteriv = 0/*constant*/;
static proc_glPointSize glPointSize = 0/*constant*/;
static proc_glPolygonMode glPolygonMode = 0/*constant*/;
static proc_glPolygonOffset glPolygonOffset = 0/*constant*/;
static proc_glPopDebugGroup glPopDebugGroup = 0/*constant*/;
static proc_glPrimitiveRestartIndex glPrimitiveRestartIndex = 0/*constant*/;
static proc_glProgramBinary glProgramBinary = 0/*constant*/;
static proc_glProgramParameteri glProgramParameteri = 0/*constant*/;
static proc_glProgramUniform1d glProgramUniform1d = 0/*constant*/;
static proc_glProgramUniform1dv glProgramUniform1dv = 0/*constant*/;
static proc_glProgramUniform1f glProgramUniform1f = 0/*constant*/;
static proc_glProgramUniform1fv glProgramUniform1fv = 0/*constant*/;
static proc_glProgramUniform1i glProgramUniform1i = 0/*constant*/;
static proc_glProgramUniform1iv glProgramUniform1iv = 0/*constant*/;
static proc_glProgramUniform1ui glProgramUniform1ui = 0/*constant*/;
static proc_glProgramUniform1uiv glProgramUniform1uiv = 0/*constant*/;
static proc_glProgramUniform2d glProgramUniform2d = 0/*constant*/;
static proc_glProgramUniform2dv glProgramUniform2dv = 0/*constant*/;
static proc_glProgramUniform2f glProgramUniform2f = 0/*constant*/;
static proc_glProgramUniform2fv glProgramUniform2fv = 0/*constant*/;
static proc_glProgramUniform2i glProgramUniform2i = 0/*constant*/;
static proc_glProgramUniform2iv glProgramUniform2iv = 0/*constant*/;
static proc_glProgramUniform2ui glProgramUniform2ui = 0/*constant*/;
static proc_glProgramUniform2uiv glProgramUniform2uiv = 0/*constant*/;
static proc_glProgramUniform3d glProgramUniform3d = 0/*constant*/;
static proc_glProgramUniform3dv glProgramUniform3dv = 0/*constant*/;
static proc_glProgramUniform3f glProgramUniform3f = 0/*constant*/;
static proc_glProgramUniform3fv glProgramUniform3fv = 0/*constant*/;
static proc_glProgramUniform3i glProgramUniform3i = 0/*constant*/;
static proc_glProgramUniform3iv glProgramUniform3iv = 0/*constant*/;
static proc_glProgramUniform3ui glProgramUniform3ui = 0/*constant*/;
static proc_glProgramUniform3uiv glProgramUniform3uiv = 0/*constant*/;
static proc_glProgramUniform4d glProgramUniform4d = 0/*constant*/;
static proc_glProgramUniform4dv glProgramUniform4dv = 0/*constant*/;
static proc_glProgramUniform4f glProgramUniform4f = 0/*constant*/;
static proc_glProgramUniform4fv glProgramUniform4fv = 0/*constant*/;
static proc_glProgramUniform4i glProgramUniform4i = 0/*constant*/;
static proc_glProgramUniform4iv glProgramUniform4iv = 0/*constant*/;
static proc_glProgramUniform4ui glProgramUniform4ui = 0/*constant*/;
static proc_glProgramUniform4uiv glProgramUniform4uiv = 0/*constant*/;
static proc_glProgramUniformMatrix2dv glProgramUniformMatrix2dv = 0/*constant*/;
static proc_glProgramUniformMatrix2fv glProgramUniformMatrix2fv = 0/*constant*/;
static proc_glProgramUniformMatrix2x3dv glProgramUniformMatrix2x3dv = 0/*constant*/;
static proc_glProgramUniformMatrix2x3fv glProgramUniformMatrix2x3fv = 0/*constant*/;
static proc_glProgramUniformMatrix2x4dv glProgramUniformMatrix2x4dv = 0/*constant*/;
static proc_glProgramUniformMatrix2x4fv glProgramUniformMatrix2x4fv = 0/*constant*/;
static proc_glProgramUniformMatrix3dv glProgramUniformMatrix3dv = 0/*constant*/;
static proc_glProgramUniformMatrix3fv glProgramUniformMatrix3fv = 0/*constant*/;
static proc_glProgramUniformMatrix3x2dv glProgramUniformMatrix3x2dv = 0/*constant*/;
static proc_glProgramUniformMatrix3x2fv glProgramUniformMatrix3x2fv = 0/*constant*/;
static proc_glProgramUniformMatrix3x4dv glProgramUniformMatrix3x4dv = 0/*constant*/;
static proc_glProgramUniformMatrix3x4fv glProgramUniformMatrix3x4fv = 0/*constant*/;
static proc_glProgramUniformMatrix4dv glProgramUniformMatrix4dv = 0/*constant*/;
static proc_glProgramUniformMatrix4fv glProgramUniformMatrix4fv = 0/*constant*/;
static proc_glProgramUniformMatrix4x2dv glProgramUniformMatrix4x2dv = 0/*constant*/;
static proc_glProgramUniformMatrix4x2fv glProgramUniformMatrix4x2fv = 0/*constant*/;
static proc_glProgramUniformMatrix4x3dv glProgramUniformMatrix4x3dv = 0/*constant*/;
static proc_glProgramUniformMatrix4x3fv glProgramUniformMatrix4x3fv = 0/*constant*/;
static proc_glProvokingVertex glProvokingVertex = 0/*constant*/;
static proc_glPushDebugGroup glPushDebugGroup = 0/*constant*/;
static proc_glQueryCounter glQueryCounter = 0/*constant*/;
static proc_glReadBuffer glReadBuffer = 0/*constant*/;
static proc_glReadPixels glReadPixels = 0/*constant*/;
static proc_glReleaseShaderCompiler glReleaseShaderCompiler = 0/*constant*/;
static proc_glRenderbufferStorage glRenderbufferStorage = 0/*constant*/;
static proc_glRenderbufferStorageMultisample glRenderbufferStorageMultisample = 0/*constant*/;
static proc_glResumeTransformFeedback glResumeTransformFeedback = 0/*constant*/;
static proc_glSampleCoverage glSampleCoverage = 0/*constant*/;
static proc_glSampleMaski glSampleMaski = 0/*constant*/;
static proc_glSamplerParameterIiv glSamplerParameterIiv = 0/*constant*/;
static proc_glSamplerParameterIuiv glSamplerParameterIuiv = 0/*constant*/;
static proc_glSamplerParameterf glSamplerParameterf = 0/*constant*/;
static proc_glSamplerParameterfv glSamplerParameterfv = 0/*constant*/;
static proc_glSamplerParameteri glSamplerParameteri = 0/*constant*/;
static proc_glSamplerParameteriv glSamplerParameteriv = 0/*constant*/;
static proc_glScissor glScissor = 0/*constant*/;
static proc_glScissorArrayv glScissorArrayv = 0/*constant*/;
static proc_glScissorIndexed glScissorIndexed = 0/*constant*/;
static proc_glScissorIndexedv glScissorIndexedv = 0/*constant*/;
static proc_glShaderBinary glShaderBinary = 0/*constant*/;
static proc_glShaderSource glShaderSource = 0/*constant*/;
static proc_glShaderStorageBlockBinding glShaderStorageBlockBinding = 0/*constant*/;
static proc_glStencilFunc glStencilFunc = 0/*constant*/;
static proc_glStencilFuncSeparate glStencilFuncSeparate = 0/*constant*/;
static proc_glStencilMask glStencilMask = 0/*constant*/;
static proc_glStencilMaskSeparate glStencilMaskSeparate = 0/*constant*/;
static proc_glStencilOp glStencilOp = 0/*constant*/;
static proc_glStencilOpSeparate glStencilOpSeparate = 0/*constant*/;
static proc_glTexBuffer glTexBuffer = 0/*constant*/;
static proc_glTexBufferRange glTexBufferRange = 0/*constant*/;
static proc_glTexImage1D glTexImage1D = 0/*constant*/;
static proc_glTexImage2D glTexImage2D = 0/*constant*/;
static proc_glTexImage2DMultisample glTexImage2DMultisample = 0/*constant*/;
static proc_glTexImage3D glTexImage3D = 0/*constant*/;
static proc_glTexImage3DMultisample glTexImage3DMultisample = 0/*constant*/;
static proc_glTexParameterIiv glTexParameterIiv = 0/*constant*/;
static proc_glTexParameterIuiv glTexParameterIuiv = 0/*constant*/;
static proc_glTexParameterf glTexParameterf = 0/*constant*/;
static proc_glTexParameterfv glTexParameterfv = 0/*constant*/;
static proc_glTexParameteri glTexParameteri = 0/*constant*/;
static proc_glTexParameteriv glTexParameteriv = 0/*constant*/;
static proc_glTexStorage1D glTexStorage1D = 0/*constant*/;
static proc_glTexStorage2D glTexStorage2D = 0/*constant*/;
static proc_glTexStorage2DMultisample glTexStorage2DMultisample = 0/*constant*/;
static proc_glTexStorage3D glTexStorage3D = 0/*constant*/;
static proc_glTexStorage3DMultisample glTexStorage3DMultisample = 0/*constant*/;
static proc_glTexSubImage1D glTexSubImage1D = 0/*constant*/;
static proc_glTexSubImage2D glTexSubImage2D = 0/*constant*/;
static proc_glTexSubImage3D glTexSubImage3D = 0/*constant*/;
static proc_glTextureView glTextureView = 0/*constant*/;
static proc_glTransformFeedbackVaryings glTransformFeedbackVaryings = 0/*constant*/;
static proc_glUniform1d glUniform1d = 0/*constant*/;
static proc_glUniform1dv glUniform1dv = 0/*constant*/;
static proc_glUniform1f glUniform1f = 0/*constant*/;
static proc_glUniform1fv glUniform1fv = 0/*constant*/;
static proc_glUniform1i glUniform1i = 0/*constant*/;
static proc_glUniform1iv glUniform1iv = 0/*constant*/;
static proc_glUniform1ui glUniform1ui = 0/*constant*/;
static proc_glUniform1uiv glUniform1uiv = 0/*constant*/;
static proc_glUniform2d glUniform2d = 0/*constant*/;
static proc_glUniform2dv glUniform2dv = 0/*constant*/;
static proc_glUniform2f glUniform2f = 0/*constant*/;
static proc_glUniform2fv glUniform2fv = 0/*constant*/;
static proc_glUniform2i glUniform2i = 0/*constant*/;
static proc_glUniform2iv glUniform2iv = 0/*constant*/;
static proc_glUniform2ui glUniform2ui = 0/*constant*/;
static proc_glUniform2uiv glUniform2uiv = 0/*constant*/;
static proc_glUniform3d glUniform3d = 0/*constant*/;
static proc_glUniform3dv glUniform3dv = 0/*constant*/;
static proc_glUniform3f glUniform3f = 0/*constant*/;
static proc_glUniform3fv glUniform3fv = 0/*constant*/;
static proc_glUniform3i glUniform3i = 0/*constant*/;
static proc_glUniform3iv glUniform3iv = 0/*constant*/;
static proc_glUniform3ui glUniform3ui = 0/*constant*/;
static proc_glUniform3uiv glUniform3uiv = 0/*constant*/;
static proc_glUniform4d glUniform4d = 0/*constant*/;
static proc_glUniform4dv glUniform4dv = 0/*constant*/;
static proc_glUniform4f glUniform4f = 0/*constant*/;
static proc_glUniform4fv glUniform4fv = 0/*constant*/;
static proc_glUniform4i glUniform4i = 0/*constant*/;
static proc_glUniform4iv glUniform4iv = 0/*constant*/;
static proc_glUniform4ui glUniform4ui = 0/*constant*/;
static proc_glUniform4uiv glUniform4uiv = 0/*constant*/;
static proc_glUniformBlockBinding glUniformBlockBinding = 0/*constant*/;
static proc_glUniformMatrix2dv glUniformMatrix2dv = 0/*constant*/;
static proc_glUniformMatrix2fv glUniformMatrix2fv = 0/*constant*/;
static proc_glUniformMatrix2x3dv glUniformMatrix2x3dv = 0/*constant*/;
static proc_glUniformMatrix2x3fv glUniformMatrix2x3fv = 0/*constant*/;
static proc_glUniformMatrix2x4dv glUniformMatrix2x4dv = 0/*constant*/;
static proc_glUniformMatrix2x4fv glUniformMatrix2x4fv = 0/*constant*/;
static proc_glUniformMatrix3dv glUniformMatrix3dv = 0/*constant*/;
static proc_glUniformMatrix3fv glUniformMatrix3fv = 0/*constant*/;
static proc_glUniformMatrix3x2dv glUniformMatrix3x2dv = 0/*constant*/;
static proc_glUniformMatrix3x2fv glUniformMatrix3x2fv = 0/*constant*/;
static proc_glUniformMatrix3x4dv glUniformMatrix3x4dv = 0/*constant*/;
static proc_glUniformMatrix3x4fv glUniformMatrix3x4fv = 0/*constant*/;
static proc_glUniformMatrix4dv glUniformMatrix4dv = 0/*constant*/;
static proc_glUniformMatrix4fv glUniformMatrix4fv = 0/*constant*/;
static proc_glUniformMatrix4x2dv glUniformMatrix4x2dv = 0/*constant*/;
static proc_glUniformMatrix4x2fv glUniformMatrix4x2fv = 0/*constant*/;
static proc_glUniformMatrix4x3dv glUniformMatrix4x3dv = 0/*constant*/;
static proc_glUniformMatrix4x3fv glUniformMatrix4x3fv = 0/*constant*/;
static proc_glUniformSubroutinesuiv glUniformSubroutinesuiv = 0/*constant*/;
static proc_glUnmapBuffer glUnmapBuffer = 0/*constant*/;
static proc_glUseProgram glUseProgram = 0/*constant*/;
static proc_glUseProgramStages glUseProgramStages = 0/*constant*/;
static proc_glValidateProgram glValidateProgram = 0/*constant*/;
static proc_glValidateProgramPipeline glValidateProgramPipeline = 0/*constant*/;
static proc_glVertexAttrib1d glVertexAttrib1d = 0/*constant*/;
static proc_glVertexAttrib1dv glVertexAttrib1dv = 0/*constant*/;
static proc_glVertexAttrib1f glVertexAttrib1f = 0/*constant*/;
static proc_glVertexAttrib1fv glVertexAttrib1fv = 0/*constant*/;
static proc_glVertexAttrib1s glVertexAttrib1s = 0/*constant*/;
static proc_glVertexAttrib1sv glVertexAttrib1sv = 0/*constant*/;
static proc_glVertexAttrib2d glVertexAttrib2d = 0/*constant*/;
static proc_glVertexAttrib2dv glVertexAttrib2dv = 0/*constant*/;
static proc_glVertexAttrib2f glVertexAttrib2f = 0/*constant*/;
static proc_glVertexAttrib2fv glVertexAttrib2fv = 0/*constant*/;
static proc_glVertexAttrib2s glVertexAttrib2s = 0/*constant*/;
static proc_glVertexAttrib2sv glVertexAttrib2sv = 0/*constant*/;
static proc_glVertexAttrib3d glVertexAttrib3d = 0/*constant*/;
static proc_glVertexAttrib3dv glVertexAttrib3dv = 0/*constant*/;
static proc_glVertexAttrib3f glVertexAttrib3f = 0/*constant*/;
static proc_glVertexAttrib3fv glVertexAttrib3fv = 0/*constant*/;
static proc_glVertexAttrib3s glVertexAttrib3s = 0/*constant*/;
static proc_glVertexAttrib3sv glVertexAttrib3sv = 0/*constant*/;
static proc_glVertexAttrib4Nbv glVertexAttrib4Nbv = 0/*constant*/;
static proc_glVertexAttrib4Niv glVertexAttrib4Niv = 0/*constant*/;
static proc_glVertexAttrib4Nsv glVertexAttrib4Nsv = 0/*constant*/;
static proc_glVertexAttrib4Nub glVertexAttrib4Nub = 0/*constant*/;
static proc_glVertexAttrib4Nubv glVertexAttrib4Nubv = 0/*constant*/;
static proc_glVertexAttrib4Nuiv glVertexAttrib4Nuiv = 0/*constant*/;
static proc_glVertexAttrib4Nusv glVertexAttrib4Nusv = 0/*constant*/;
static proc_glVertexAttrib4bv glVertexAttrib4bv = 0/*constant*/;
static proc_glVertexAttrib4d glVertexAttrib4d = 0/*constant*/;
static proc_glVertexAttrib4dv glVertexAttrib4dv = 0/*constant*/;
static proc_glVertexAttrib4f glVertexAttrib4f = 0/*constant*/;
static proc_glVertexAttrib4fv glVertexAttrib4fv = 0/*constant*/;
static proc_glVertexAttrib4iv glVertexAttrib4iv = 0/*constant*/;
static proc_glVertexAttrib4s glVertexAttrib4s = 0/*constant*/;
static proc_glVertexAttrib4sv glVertexAttrib4sv = 0/*constant*/;
static proc_glVertexAttrib4ubv glVertexAttrib4ubv = 0/*constant*/;
static proc_glVertexAttrib4uiv glVertexAttrib4uiv = 0/*constant*/;
static proc_glVertexAttrib4usv glVertexAttrib4usv = 0/*constant*/;
static proc_glVertexAttribBinding glVertexAttribBinding = 0/*constant*/;
static proc_glVertexAttribDivisor glVertexAttribDivisor = 0/*constant*/;
static proc_glVertexAttribFormat glVertexAttribFormat = 0/*constant*/;
static proc_glVertexAttribI1i glVertexAttribI1i = 0/*constant*/;
static proc_glVertexAttribI1iv glVertexAttribI1iv = 0/*constant*/;
static proc_glVertexAttribI1ui glVertexAttribI1ui = 0/*constant*/;
static proc_glVertexAttribI1uiv glVertexAttribI1uiv = 0/*constant*/;
static proc_glVertexAttribI2i glVertexAttribI2i = 0/*constant*/;
static proc_glVertexAttribI2iv glVertexAttribI2iv = 0/*constant*/;
static proc_glVertexAttribI2ui glVertexAttribI2ui = 0/*constant*/;
static proc_glVertexAttribI2uiv glVertexAttribI2uiv = 0/*constant*/;
static proc_glVertexAttribI3i glVertexAttribI3i = 0/*constant*/;
static proc_glVertexAttribI3iv glVertexAttribI3iv = 0/*constant*/;
static proc_glVertexAttribI3ui glVertexAttribI3ui = 0/*constant*/;
static proc_glVertexAttribI3uiv glVertexAttribI3uiv = 0/*constant*/;
static proc_glVertexAttribI4bv glVertexAttribI4bv = 0/*constant*/;
static proc_glVertexAttribI4i glVertexAttribI4i = 0/*constant*/;
static proc_glVertexAttribI4iv glVertexAttribI4iv = 0/*constant*/;
static proc_glVertexAttribI4sv glVertexAttribI4sv = 0/*constant*/;
static proc_glVertexAttribI4ubv glVertexAttribI4ubv = 0/*constant*/;
static proc_glVertexAttribI4ui glVertexAttribI4ui = 0/*constant*/;
static proc_glVertexAttribI4uiv glVertexAttribI4uiv = 0/*constant*/;
static proc_glVertexAttribI4usv glVertexAttribI4usv = 0/*constant*/;
static proc_glVertexAttribIFormat glVertexAttribIFormat = 0/*constant*/;
static proc_glVertexAttribIPointer glVertexAttribIPointer = 0/*constant*/;
static proc_glVertexAttribL1d glVertexAttribL1d = 0/*constant*/;
static proc_glVertexAttribL1dv glVertexAttribL1dv = 0/*constant*/;
static proc_glVertexAttribL2d glVertexAttribL2d = 0/*constant*/;
static proc_glVertexAttribL2dv glVertexAttribL2dv = 0/*constant*/;
static proc_glVertexAttribL3d glVertexAttribL3d = 0/*constant*/;
static proc_glVertexAttribL3dv glVertexAttribL3dv = 0/*constant*/;
static proc_glVertexAttribL4d glVertexAttribL4d = 0/*constant*/;
static proc_glVertexAttribL4dv glVertexAttribL4dv = 0/*constant*/;
static proc_glVertexAttribLFormat glVertexAttribLFormat = 0/*constant*/;
static proc_glVertexAttribLPointer glVertexAttribLPointer = 0/*constant*/;
static proc_glVertexAttribP1ui glVertexAttribP1ui = 0/*constant*/;
static proc_glVertexAttribP1uiv glVertexAttribP1uiv = 0/*constant*/;
static proc_glVertexAttribP2ui glVertexAttribP2ui = 0/*constant*/;
static proc_glVertexAttribP2uiv glVertexAttribP2uiv = 0/*constant*/;
static proc_glVertexAttribP3ui glVertexAttribP3ui = 0/*constant*/;
static proc_glVertexAttribP3uiv glVertexAttribP3uiv = 0/*constant*/;
static proc_glVertexAttribP4ui glVertexAttribP4ui = 0/*constant*/;
static proc_glVertexAttribP4uiv glVertexAttribP4uiv = 0/*constant*/;
static proc_glVertexAttribPointer glVertexAttribPointer = 0/*constant*/;
static proc_glVertexBindingDivisor glVertexBindingDivisor = 0/*constant*/;
static proc_glViewport glViewport = 0/*constant*/;
static proc_glViewportArrayv glViewportArrayv = 0/*constant*/;
static proc_glViewportIndexedf glViewportIndexedf = 0/*constant*/;
static proc_glViewportIndexedfv glViewportIndexedfv = 0/*constant*/;
static proc_glWaitSync glWaitSync = 0/*constant*/;
static char num_str[20];
static GLFWwindow* main_window;
static Shader immediate_shader;
static DrawBuffers immediate_buffer;
static Texture2D text_atlas;
static vertex* immediate_vertices;
static uint32* immediate_indices;

// Implementations
static void init_gizmos() {
    debug_lines_vertices = list_create((uint32)sizeof(vertex));
}
static void dispatch_gizmos() {
}
static void applyCamera() {
    glUniform1f(glGetUniformLocation(shader.gl_handle, "zoom"), camera.scale);
    glUniform2f(glGetUniformLocation(shader.gl_handle, "cam_pos"), camera.pos.x, camera.pos.y);
    glUniform1f(glGetUniformLocation(shader.gl_handle, "cam_rot"), camera.rot);
}
static void applyTransform(Transform t) {
    glUniform2f(glGetUniformLocation(shader.gl_handle, "entity_pos"), t.pos.x, t.pos.y);
    glUniform1f(glGetUniformLocation(shader.gl_handle, "entity_rot"), t.rot);
    glUniform1f(glGetUniformLocation(shader.gl_handle, "entity_scale"), t.scale);
}
static void uniform_entity_pos(vec2 pos) {
    glUniform2f(glGetUniformLocation(shader.gl_handle, "entity_pos"), pos.x, pos.y);
}
static void uniform_entity_rot(float32 rot) {
    glUniform1f(glGetUniformLocation(shader.gl_handle, "entity_rot"), rot);
}
static void uniform_entity_scale(float32 scale) {
    glUniform1f(glGetUniformLocation(shader.gl_handle, "entity_scale"), scale);
}
static vec2 rotate_vec(vec2 dir, float32 angle) {
    float32 c = cosf(angle)/*not constant*/;
    float32 s = sinf(angle)/*not constant*/;
    vec2 res;
    res.x = ((c * dir.x) + (s * dir.y));
    res.y = ((-s * dir.x) + (c * dir.y));
    return res;
}
static vec2 right(Transform t) {
    return vec(cosf(t.rot), sinf(t.rot));
}
static vec2 up(Transform t) {
    return vec(-sinf(t.rot), cosf(t.rot));
}
static vec2 local2world1(Transform t, vec2 p) {
    return local2world2(t, p.x, p.y);
}
static vec2 local2world2(Transform t, float32 x, float32 y) {
    float32 c = (cosf(t.rot) * t.scale)/*not constant*/;
    float32 s = (sinf(t.rot) * t.scale)/*not constant*/;
    vec2 res;
    res.x = (((c * x) + (s * y)) + t.pos.x);
    res.y = (((-s * x) + (c * y)) + t.pos.y);
    return res;
}
static vec2 world2local1(Transform t, vec2 p) {
    return world2local2(t, p.x, p.y);
}
static vec2 world2local2(Transform t, float32 x, float32 y) {
    float32 c = (cosf(t.rot) / t.scale)/*not constant*/;
    float32 s = (sinf(t.rot) / t.scale)/*not constant*/;
    float32 px = (x - t.pos.x)/*not constant*/;
    float32 py = (y - t.pos.y)/*not constant*/;
    vec2 res;
    res.x = ((c * px) - (s * py));
    res.y = ((c * py) + (s * px));
    return res;
}
static Entity* appendEntity(DrawBuffers db) {
    if (entitiesLength >= 256) {
        printf("%s", "Failed to append entity. Max limit reached.");
        return 0;
    }
    Entity* res = &entities[entitiesLength++]/*not constant*/;
    res->transform.pos = vec(0, 0);
    res->transform.scale = 1;
    res->transform.rot = 0;
    res->db = db;
    res->vel = vec(0, 0);
    return res;
}
static DrawBuffers genCircle(int32 res, float32 radius) {
    uint32 vertsCount = ((uint32)res + 1)/*not constant*/;
    vertex verts[vertsCount];
    verts[0].x = 0;
    verts[0].y = 0;
    for (int32 i = 1; i < (res + 1); i++) {
        float32 angle = ((i * (3.141593 * 2.000000)) / res)/*not constant*/;
        verts[i].x = (cosf(angle) * radius);
        verts[i].y = (sinf(angle) * radius);
        verts[i].color = (Color){255, 255, 255, 255};
    }
    uint32 indsCount = (((uint32)res) * 3)/*not constant*/;
    uint32 inds[indsCount];
    uint32 i = 0/*constant*/;
    uint32 v = 1/*constant*/;
    while (i < indsCount) {
        inds[i] = 0;
        inds[(i + 1)] = v++;
        inds[(i + 2)] = v;
        i += 3;
    }
    inds[(i - 1)] = 1;
    DrawBuffers db = create_draw_buffers()/*not constant*/;
    update_buffers(&db, verts, vertsCount, inds, indsCount);
    return db;
}
static Planet genPlanet(float32 radius, float32 dist, float32 year) {
    Planet p;
    p.radius = radius;
    p.dist = dist;
    p.yearDuration = year;
    p.db = genCircle(round2int((36 * radius)), radius);
    p.rot = 0.000000;
    p.orbitOffset = (3.141593 * random((int32)dist));
    return p;
}
static void drawPlanet(Planet* planet) {
    glUniform2f(glGetUniformLocation(shader.gl_handle, "entity_pos"), planet->pos.x, planet->pos.y);
    glUniform1f(glGetUniformLocation(shader.gl_handle, "entity_rot"), planet->rot);
    draw_elements1(planet->db);
}
static void updateEntity(Entity* entity) {
    entity->transform.pos = add(entity->transform.pos, entity->vel);
    for (int32 i = 0; i < 16; i++) {
        Planet* planet = &planets[i]/*not constant*/;
        vec2 diff = sub(entity->transform.pos, planet->pos)/*not constant*/;
        vec2 normal = normalize(diff)/*not constant*/;
        float32 intersection = (length(diff) - planet->radius)/*not constant*/;
        float32 planetArea = ((3.141593 * planet->radius) * planet->radius)/*not constant*/;
        float32 planetMass = planetArea/*not constant*/;
        vec2 gravity = mul2(normal, ((planetMass / sqlength(diff)) * -0.000003))/*not constant*/;
        if (intersection <= 0.000000) {
            vec2 correction = mul2(normal, -intersection)/*not constant*/;
            entity->transform.pos = add(entity->transform.pos, correction);
            entity->vel = add(entity->vel, mul2(normal, -dot(entity->vel, normal)));
        }
    }
    Intersection intersection;
    if (point_intersects(entity->transform.pos, &voxelGrid, &intersection)) {
        vec2 normal = intersection.surface_normal/*not constant*/;
        vec2 correction = mul2(normal, -intersection.distance)/*not constant*/;
        entity->transform.pos = add(entity->transform.pos, correction);
        entity->vel = add(entity->vel, mul2(normal, -dot(entity->vel, normal)));
    }
}
static vec2 getMouseWorldCoord() {
    float64 cx;
    float64 cy;
    glfwGetCursorPos(main_window, &cx, &cy);
    int32 w;
    int32 h;
    glfwGetFramebufferSize(main_window, &w, &h);
    float32 x = ((((float32)cx / w) * 2) - 1)/*not constant*/;
    float32 y = -((((float32)cy / h) * 2) - 1)/*not constant*/;
    x *= ((float32)w / h);
    vec2 res = local2world2(camera, x, y)/*not constant*/;
    return res;
}
static void mouse_scrollCallback(GLFWwindow* w, float64 x, float64 y) {
    float32 s = (float32)y/*not constant*/;
    if (key2(341)) {
        voxel_edit_radius += (s * 0.100000);
        voxel_edit_radius = clamp2(voxel_edit_radius, 0.100000, 100);
    } else {
        camera.scale -= ((camera.scale * s) * 0.100000);
        camera.scale = clamp2(camera.scale, 1.000000, 10000.000000);
    }
}
static Texture2D load_texture(char* file_name) {
    Image image = load_bitmap(file_name)/*not constant*/;
    Texture2D tex = create_texture2D(image)/*not constant*/;
    set_filter(tex, 9728);
    free(image.pixels);
    return tex;
}
static void load() {
    {
        char* f = fileread1("shaders/frag.glsl")/*not constant*/;
        char* v = fileread1("shaders/vert.glsl")/*not constant*/;
        shader = create_shader(f, v);
        free(f);
        free(v);
    }
    player_texture = load_texture("textures/player.bmp");
    {
        /* local constant */
        Image image;
        image.width = 64;
        image.height = 64;
        image.pixels = malloc(((sizeof(Color) * 64) * 64));
        for (int32 i = 0; i < (64 * 64); i++) {
            float32 v = ((random(i) + 1.000000) / 2.000000)/*not constant*/;
            if (v < 0) printf("%s%f%s", "v: ", v, "\n");
            uint8 c = (uint8)(v * 255)/*not constant*/;
            image.pixels[i] = (Color) {c, c, c, 255};
        }
        random_texture = create_texture2D(image);
        set_filter(random_texture, 9728);
        free(image.pixels);
    }
    camera.rot = 0;
    camera.scale = 40;
    glfwSetScrollCallback(main_window, mouse_scrollCallback);
    entities = malloc((sizeof(Entity) * 256));
    planets = malloc((sizeof(Planet) * 16));
    for (int32 i = 0; i < 16; i++) {
        float32 r = (20.000000 + random((int32)i))/*not constant*/;
        Planet p = genPlanet(r, (70.000000 + ((r * 30.000000) * i)), (100.000000 + (20.000000 * random(((2 * i) + 100)))))/*not constant*/;
        planets[i] = p;
    }
    player = appendEntity(genCircle(4, 0.100000));
    voxelGrid = generatePlanet();
    voxelGrid.transform.pos = vec(-20, 30);
    voxelMesh_circle = genCircle(360, 1);
}
static VoxelGrid generatePlanet() {
    VoxelGrid grid = createVoxelGrid(100)/*not constant*/;
    grid.transform.scale = 1;
    float32 half = ((float32)grid.res / 2)/*not constant*/;
    for (uint32 x = 0; x < grid.res; x++) {
        for (uint32 y = 0; y < grid.res; y++) {
            float32 xf = ((float32)x - half)/*not constant*/;
            float32 yf = ((float32)y - half)/*not constant*/;
            float32 len = sqrtf(((xf * xf) + (yf * yf)))/*not constant*/;
            uint32 i = ((x * grid.res) + y)/*not constant*/;
            grid.data[i] = clamp2((40 - len), 0, 1);
        }
    }
    updateGridMesh(&grid);
    return grid;
}
static int32 is_nan1(float32 x) {
    return (x != x);
}
static int32 is_nan2(vec2 v) {
    return (is_nan1(v.x) || is_nan1(v.y));
}
int32 main() {
    grax_init();
    load();
    glClearColor(0.050000, 0.050000, 0.050000, 1.000000);
    glLineWidth(10);
    while (grax_loop()) {
        glUseProgram(shader.gl_handle);
        bind(random_texture);
        vec2 wasd;
        wasd.x = 0;
        wasd.y = 0;
        if (key1('W')) wasd.y += 1;
        if (key1('S')) wasd.y -= 1;
        if (key1('A')) wasd.x -= 1;
        if (key1('D')) wasd.x += 1;
        if (key1('F')) {
            player->vel.x = 0.000000;
            player->vel.y = 0.000000;
        }
        float32 c = cosf(player->transform.rot)/*not constant*/;
        float32 s = sinf(player->transform.rot)/*not constant*/;
        vec2 dir = vec(dot(vec(c, s), wasd), dot(vec(-s, c), wasd))/*not constant*/;
        player->vel = add(player->vel, mul2(dir, 0.010000));
        float32 time = (float32)glfwGetTime()/*not constant*/;
        time = 0.000000;
        for (int32 i = 0; i < 16; i++) {
            Planet* planet = &planets[i]/*not constant*/;
            float32 t = (3.141593 * 2.000000)/*constant*/;
            planet->pos.x = (cosf((planet->orbitOffset + ((t * time) / planet->yearDuration))) * planet->dist);
            planet->pos.y = (sinf((planet->orbitOffset + ((t * time) / planet->yearDuration))) * planet->dist);
            drawPlanet(planet);
        }
        draw_text1((vec2){0, 0}, 0.100000, make_string("Hello"), (Color){255, 255, 255, 255});
        for (int32 i = 0; i < entitiesLength; i++) {
            Entity* e = &entities[i]/*not constant*/;
            updateEntity(e);
        }
        if (key1('Q')) camera.rot -= 0.050000;
        if (key1('E')) camera.rot += 0.050000;
        camera.pos = player->transform.pos;
        player->transform.rot = camera.rot;
        applyCamera();
        for (int32 i = 0; i < entitiesLength; i++) {
            Entity* e = &entities[i]/*not constant*/;
            applyTransform(e->transform);
            draw_elements1(e->db);
        }
        {
            vec2 mouseCoord = getMouseWorldCoord()/*not constant*/;
            uniform_entity_pos(mouseCoord);
            uniform_entity_scale(voxel_edit_radius);
            draw_elements1(voxelMesh_circle);
            Intersection intersection;
            if (point_intersects(mouseCoord, &voxelGrid, &intersection)) {
                printf("%s%f%s", "Intersects ", intersection.distance, "\n");
            }
            if (mouse(0)) {
                VoxelGrid_addCircle(&voxelGrid, voxel_edit_radius, mouseCoord.x, mouseCoord.y);
                updateGridMesh(&voxelGrid);
            } else if (mouse(1)) {
                VoxelGrid_removeCircle(&voxelGrid, voxel_edit_radius, mouseCoord.x, mouseCoord.y);
                updateGridMesh(&voxelGrid);
            }
            applyTransform(voxelGrid.transform);
            draw_elements1(voxelGrid.db);
            glBindVertexArray(voxelGrid.db.vao);
            glDrawArrays(0, 0, (int32)voxelGrid.numVerts);
            glBindBuffer(34963, voxelGrid.inds_outline_ebo);
            glDrawElements(1, list_length(voxelGrid.inds_outline), 5125, 0);
            glBindBuffer(34963, voxelGrid.db.ebo);
            glBindVertexArray(0);
        }
    }
}
static void add_tri(VoxelGrid* grid, uint32 i1, uint32 i2, uint32 i3) {
    list_add(&grid->inds, &i1);
    list_add(&grid->inds, &i2);
    list_add(&grid->inds, &i3);
}
static void add_outline(VoxelGrid* grid, uint32 i1, uint32 i2) {
    list_add(&grid->inds_outline, &i1);
    list_add(&grid->inds_outline, &i2);
}
static uint32 getIndex(uint32 res, uint32 x, uint32 y) {
    return ((x * res) + y);
}
static VoxelGrid createVoxelGrid(uint32 res) {
    VoxelGrid grid;
    grid.transform.pos = vec(0, 0);
    grid.transform.rot = 0;
    grid.res = res;
    grid.data = malloc(sizeof(float32) * (res * res));
    grid.numVerts = (((3 * grid.res) * grid.res) - (2 * grid.res));
    grid.verts = malloc(sizeof(vertex) * grid.numVerts);
    float32 half = ((float32)grid.res / 2.000000)/*not constant*/;
    for (uint32 x = 0; x < grid.res; x++) {
        for (uint32 y = 0; y < grid.res; y++) {
            uint32 i = getIndex(grid.res, x, y)/*not constant*/;
            grid.verts[i].x = ((float32)x - half);
            grid.verts[i].y = ((float32)y - half);
        }
    }
    grid.inds = list_create((uint32)sizeof(uint32));
    grid.inds_outline = list_create((uint32)sizeof(uint32));
    grid.db = create_draw_buffers();
    glGenBuffers(1, &grid.inds_outline_ebo);
    return grid;
}
static void updateGridMesh(VoxelGrid* grid) {
    list_clear(grid->inds);
    list_clear(grid->inds_outline);
    uint32 size = (grid->res - 1)/*not constant*/;
    uint32 g1_byteoffset = (grid->res * grid->res)/*not constant*/;
    uint32 g2_byteoffset = (g1_byteoffset + (grid->res * size))/*not constant*/;
    for (uint32 x = 0; x < size; x++) {
        for (uint32 y = 0; y < size; y++) {
            uint32 e2 = ((g1_byteoffset + (x * size)) + y)/*not constant*/;
            uint32 e3 = ((g1_byteoffset + ((x + 1) * size)) + y)/*not constant*/;
            uint32 e1 = ((g2_byteoffset + (x * grid->res)) + (y + 1))/*not constant*/;
            uint32 e4 = ((g2_byteoffset + (x * grid->res)) + y)/*not constant*/;
            uint32 i1 = getIndex(grid->res, x, (y + 1))/*not constant*/;
            uint32 i2 = getIndex(grid->res, (x + 1), (y + 1))/*not constant*/;
            uint32 i3 = getIndex(grid->res, x, y)/*not constant*/;
            uint32 i4 = getIndex(grid->res, (x + 1), y)/*not constant*/;
            float32 p1 = grid->data[i1]/*not constant*/;
            float32 p2 = grid->data[i2]/*not constant*/;
            float32 p3 = grid->data[i3]/*not constant*/;
            float32 p4 = grid->data[i4]/*not constant*/;
            uint8 mask = 0/*constant*/;
            if (p1 > 0.001000) mask |= 8;
            if (p2 > 0.001000) mask |= 4;
            if (p3 > 0.001000) mask |= 2;
            if (p4 > 0.001000) mask |= 1;
            switch (mask) {
                case 8:
                add_tri(grid, i1, e2, e1);
                break;
                case 4:
                add_tri(grid, i2, e1, e3);
                break;
                case 1:
                add_tri(grid, i4, e3, e4);
                break;
                case 2:
                add_tri(grid, i3, e4, e2);
                break;
                case (15 & ~8):
                add_tri(grid, i4, e1, e2);
                add_tri(grid, i4, i2, e1);
                add_tri(grid, i4, e2, i3);
                break;
                case (15 & ~4):
                add_tri(grid, i3, e3, e1);
                add_tri(grid, i3, i4, e3);
                add_tri(grid, i3, e1, i1);
                break;
                case (15 & ~1):
                add_tri(grid, i1, e3, e4);
                add_tri(grid, i1, e3, i2);
                add_tri(grid, i1, e4, i3);
                break;
                case (15 & ~2):
                add_tri(grid, i2, e2, e4);
                add_tri(grid, i2, i1, e2);
                add_tri(grid, i2, e4, i4);
                break;
                case (8 | 4):
                add_tri(grid, i1, e2, i2);
                add_tri(grid, i2, e2, e3);
                break;
                case (2 | 1):
                add_tri(grid, i3, e3, e2);
                add_tri(grid, i4, e3, i3);
                break;
                case (8 | 2):
                add_tri(grid, i1, i3, e1);
                add_tri(grid, i3, e4, e1);
                break;
                case (4 | 1):
                add_tri(grid, i2, e1, i4);
                add_tri(grid, i4, e1, e4);
                break;
                case (8 | 1):
                add_tri(grid, i1, e2, e1);
                add_tri(grid, i4, e3, e4);
                break;
                case (4 | 2):
                add_tri(grid, i2, e1, e3);
                add_tri(grid, i3, e4, e2);
                break;
                case 15:
                add_tri(grid, i1, i3, i2);
                add_tri(grid, i2, i3, i4);
                break;
            }
            switch (mask) {
                case 8:
                add_outline(grid, e2, e1);
                break;
                case 4:
                add_outline(grid, e1, e3);
                break;
                case 1:
                add_outline(grid, e3, e4);
                break;
                case 2:
                add_outline(grid, e4, e2);
                break;
                case (15 & ~8):
                add_outline(grid, e1, e2);
                break;
                case (15 & ~4):
                add_outline(grid, e3, e1);
                break;
                case (15 & ~1):
                add_outline(grid, e3, e4);
                break;
                case (15 & ~2):
                add_outline(grid, e2, e4);
                break;
                case (8 | 4):
                case (2 | 1):
                add_outline(grid, e3, e2);
                break;
                case (8 | 2):
                case (4 | 1):
                add_outline(grid, e1, e4);
                break;
                case (8 | 1):
                add_outline(grid, e2, e1);
                add_outline(grid, e3, e4);
                break;
                case (4 | 2):
                add_outline(grid, e1, e3);
                add_outline(grid, e4, e2);
                break;
                case 15:
                break;
            }
        }
    }
    if (1) {
        float32 half = ((float32)grid->res / 2.000000)/*not constant*/;
        for (uint32 x = 0; x < grid->res; x++) {
            for (uint32 y = 0; y < size; y++) {
                float32 p1 = grid->data[getIndex(grid->res, x, y)]/*not constant*/;
                float32 p2 = grid->data[getIndex(grid->res, x, (y + 1))]/*not constant*/;
                uint8 b1 = (p1 > 0.001000)/*not constant*/;
                uint8 b2 = (p2 > 0.001000)/*not constant*/;
                float32 ofs;
                if (b1 == b2) ofs = 0.500000; else if (b1) ofs = p1; else ofs = (1.000000 - p2);
                uint32 i = ((g1_byteoffset + (x * size)) + y)/*not constant*/;
                grid->verts[i].x = (x - half);
                grid->verts[i].y = ((y + ofs) - half);
            }
        }
        for (uint32 x = 0; x < size; x++) {
            for (uint32 y = 0; y < grid->res; y++) {
                float32 p1 = grid->data[getIndex(grid->res, x, y)]/*not constant*/;
                float32 p2 = grid->data[getIndex(grid->res, (x + 1), y)]/*not constant*/;
                uint8 b1 = (p1 > 0.001000)/*not constant*/;
                uint8 b2 = (p2 > 0.001000)/*not constant*/;
                float32 ofs;
                if (b1 == b2) ofs = 0.500000; else if (b1) ofs = p1; else ofs = (1.000000 - p2);
                uint32 i = ((g2_byteoffset + (x * grid->res)) + y)/*not constant*/;
                grid->verts[i].x = ((x + ofs) - half);
                grid->verts[i].y = (y - half);
            }
        }
    }
    update_buffers(&grid->db, grid->verts, grid->numVerts, grid->inds, list_length(grid->inds));
    update_buffer(grid->inds_outline_ebo, (list_length(grid->inds_outline) * (uint32)sizeof(uint32)), grid->inds_outline);
}
static vec2 getLocalCoords(VoxelGrid* grid, float32 x, float32 y) {
    vec2 p = world2local2(grid->transform, x, y)/*not constant*/;
    float32 half = ((float32)grid->res / 2.000000)/*not constant*/;
    p.x += half;
    p.y += half;
    return p;
}
static void VoxelGrid_addCircle(VoxelGrid* grid, float32 radius, float32 x, float32 y) {
    vec2 p = getLocalCoords(grid, x, y)/*not constant*/;
    int32 rx = round2int(p.x)/*not constant*/;
    int32 ry = round2int(p.y)/*not constant*/;
    int32 iradius = (int32)(radius + 1)/*not constant*/;
    int32 x_min = clamp1((rx - iradius), 0, (int32)grid->res)/*not constant*/;
    int32 x_max = clamp1((rx + iradius), 0, (int32)grid->res)/*not constant*/;
    int32 y_min = clamp1((ry - iradius), 0, (int32)grid->res)/*not constant*/;
    int32 y_max = clamp1((ry + iradius), 0, (int32)grid->res)/*not constant*/;
    for (int32 ix = x_min; ix < x_max; ix++) {
        for (int32 iy = y_min; iy < y_max; iy++) {
            float32 xf = ((float32)ix - p.x)/*not constant*/;
            float32 yf = ((float32)iy - p.y)/*not constant*/;
            float32 len = sqrtf(((xf * xf) + (yf * yf)))/*not constant*/;
            int32 i = ((ix * grid->res) + iy)/*not constant*/;
            float32 addition = clamp2((radius - len), 0, 1)/*not constant*/;
            if (grid->data[i] < addition) grid->data[i] = addition;
        }
    }
}
static void VoxelGrid_removeCircle(VoxelGrid* grid, float32 radius, float32 x, float32 y) {
    vec2 p = getLocalCoords(grid, x, y)/*not constant*/;
    int32 rx = round2int(p.x)/*not constant*/;
    int32 ry = round2int(p.y)/*not constant*/;
    int32 iradius = (int32)(radius + 1)/*not constant*/;
    int32 x_min = clamp1((rx - iradius), 0, (int32)grid->res)/*not constant*/;
    int32 x_max = clamp1((rx + iradius), 0, (int32)grid->res)/*not constant*/;
    int32 y_min = clamp1((ry - iradius), 0, (int32)grid->res)/*not constant*/;
    int32 y_max = clamp1((ry + iradius), 0, (int32)grid->res)/*not constant*/;
    for (int32 ix = x_min; ix < (x_max + 1); ix++) {
        for (int32 iy = y_min; iy < (y_max + 1); iy++) {
            float32 xf = ((float32)ix - p.x)/*not constant*/;
            float32 yf = ((float32)iy - p.y)/*not constant*/;
            float32 len = sqrtf(((xf * xf) + (yf * yf)))/*not constant*/;
            int32 i = ((ix * grid->res) + iy)/*not constant*/;
            float32 newValue = clamp2((len - radius), 0, 1)/*not constant*/;
            if (grid->data[i] > newValue) grid->data[i] = newValue;
        }
    }
}
static vec2 calcCenterOfMass(VoxelGrid* grid) {
    vec2 res = vec(0, 0)/*not constant*/;
    float32 total = 0/*constant*/;
    uint32 x = -1/*constant*/;
    while (++x < grid->res) {
        uint32 y = -1/*constant*/;
        while (++y < grid->res) {
            uint32 i = ((x * grid->res) + y)/*not constant*/;
            float32 value = grid->data[i]/*not constant*/;
            if (value > 0.001000) {
                total += value;
                res = add(res, mul2(vec(x, y), value));
            }
        }
    }
    res = mul2(res, (1.000000 / total));
    return res;
}
static vec2 rot90deg(vec2 v) {
    vec2 res = vec(-v.y, v.x)/*not constant*/;
    return res;
}
static int32 ray_lineseg_intersects(Ray ray, Lineseg seg, Intersection* out_intersection) {
    vec2 A = sub(seg.start, ray.origin)/*not constant*/;
    vec2 B = sub(seg.end, ray.origin)/*not constant*/;
    vec2 tangent = rot90deg(ray.dir)/*not constant*/;
    float32 d1 = dot(A, tangent)/*not constant*/;
    float32 d2 = dot(B, tangent)/*not constant*/;
    return 0;
}
static int32 point_intersects(vec2 point, VoxelGrid* grid, Intersection* out_intersection) {
    *out_intersection = (Intersection){0};
    point = getLocalCoords(grid, point.x, point.y);
    int32 x = (int32)point.x/*not constant*/;
    int32 y = (int32)point.y/*not constant*/;
    if ((x < 0) || (x >= grid->res)) return 0;
    if ((y < 0) || (y >= grid->res)) return 0;
    int32 i1 = (((grid->res * x) + y) + 1)/*not constant*/;
    int32 i2 = (((grid->res * (x + 1)) + y) + 1)/*not constant*/;
    int32 i3 = ((grid->res * x) + y)/*not constant*/;
    int32 i4 = ((grid->res * (x + 1)) + y)/*not constant*/;
    float32 p1 = grid->data[i1]/*not constant*/;
    float32 p2 = grid->data[i2]/*not constant*/;
    float32 p3 = grid->data[i3]/*not constant*/;
    float32 p4 = grid->data[i4]/*not constant*/;
    uint8 mask = 0/*constant*/;
    if (p1 > 0.001000) mask |= 8;
    if (p2 > 0.001000) mask |= 4;
    if (p3 > 0.001000) mask |= 2;
    if (p4 > 0.001000) mask |= 1;
    vec2 a;
    vec2 b;
    switch (mask) {
        case 8:
        a = vec(p1, 1);
        b = vec(0, (1 - p1));
        break;
        case 4:
        a = vec(1, (1 - p2));
        b = vec((1 - p2), 1);
        break;
        case 1:
        a = vec((1 - p4), 0);
        b = vec(1, p4);
        break;
        case 2:
        a = vec(0, p3);
        b = vec(p3, 0);
        break;
        case (15 & ~8):
        a = vec(0, p3);
        b = vec((1 - p2), 1);
        break;
        case (15 & ~4):
        a = vec(p1, 1);
        b = vec(1, p4);
        break;
        case (15 & ~1):
        a = vec(1, (1 - p2));
        b = vec(p3, 0);
        break;
        case (15 & ~2):
        a = vec((1 - p4), 0);
        b = vec(0, (1 - p1));
        break;
        case (8 | 4):
        a = vec(1, (1 - p2));
        b = vec(0, (1 - p1));
        break;
        case (2 | 1):
        a = vec(0, p3);
        b = vec(1, p4);
        break;
        case (8 | 2):
        a = vec(p1, 1);
        b = vec(p3, 0);
        break;
        case (4 | 1):
        a = vec((1 - p4), 0);
        b = vec((1 - p2), 1);
        break;
        case 15:
        return 1;
        case 0:
        return 0;
        default:
        return 0;
    }
    vec2 local = sub(point, vec(x, y))/*not constant*/;
    local = sub(local, a);
    vec2 normal = rot90deg(sub(b, a))/*not constant*/;
    out_intersection->distance = dot(normal, local);
    out_intersection->surface_normal = rotate_vec(normal, grid->transform.rot);
    if (out_intersection->distance <= 0) return 1;
    return 0;
}
static char* fileread1(char* filename) {
    return fileread2(filename, "r");
}
static char* fileread2(char* filename, char* mode) {
    FILE* file;
    if (fopen_s(&file, filename, mode)) {
        printf("%s%s%s", "ERROR: Could not open file \"", filename, "\".\n");
        return 0;
    }
    fseek(file, 0, 2);
    uint64 len = ftell(file)/*not constant*/;
    rewind(file);
    char* buffer = calloc((len + 1), 1)/*not constant*/;
    uint64 end = fread(buffer, 1, len, file)/*not constant*/;
    buffer[end] = (char)0;
    fclose(file);
    return buffer;
}
static void filewrite(char* filename, char* content) {
    FILE* file;
    if (fopen_s(&file, filename, "w")) {
        printf("%s%s%s", "ERROR: Could not open file \"", filename, "\".\n");
        return;
    }
    fwrite(content, sizeof(char), strlen(content), file);
    fclose(file);
}
static void load_opengl(void (*(*getProcAddress)(char*))()) {
    glActiveShaderProgram = (proc_glActiveShaderProgram)getProcAddress("glActiveShaderProgram");
    glActiveTexture = (proc_glActiveTexture)getProcAddress("glActiveTexture");
    glAttachShader = (proc_glAttachShader)getProcAddress("glAttachShader");
    glBeginConditionalRender = (proc_glBeginConditionalRender)getProcAddress("glBeginConditionalRender");
    glBeginQuery = (proc_glBeginQuery)getProcAddress("glBeginQuery");
    glBeginQueryIndexed = (proc_glBeginQueryIndexed)getProcAddress("glBeginQueryIndexed");
    glBeginTransformFeedback = (proc_glBeginTransformFeedback)getProcAddress("glBeginTransformFeedback");
    glBindAttribLocation = (proc_glBindAttribLocation)getProcAddress("glBindAttribLocation");
    glBindBuffer = (proc_glBindBuffer)getProcAddress("glBindBuffer");
    glBindBufferBase = (proc_glBindBufferBase)getProcAddress("glBindBufferBase");
    glBindBufferRange = (proc_glBindBufferRange)getProcAddress("glBindBufferRange");
    glBindFragDataLocation = (proc_glBindFragDataLocation)getProcAddress("glBindFragDataLocation");
    glBindFragDataLocationIndexed = (proc_glBindFragDataLocationIndexed)getProcAddress("glBindFragDataLocationIndexed");
    glBindFramebuffer = (proc_glBindFramebuffer)getProcAddress("glBindFramebuffer");
    glBindImageTexture = (proc_glBindImageTexture)getProcAddress("glBindImageTexture");
    glBindProgramPipeline = (proc_glBindProgramPipeline)getProcAddress("glBindProgramPipeline");
    glBindRenderbuffer = (proc_glBindRenderbuffer)getProcAddress("glBindRenderbuffer");
    glBindSampler = (proc_glBindSampler)getProcAddress("glBindSampler");
    glBindTexture = (proc_glBindTexture)getProcAddress("glBindTexture");
    glBindTransformFeedback = (proc_glBindTransformFeedback)getProcAddress("glBindTransformFeedback");
    glBindVertexArray = (proc_glBindVertexArray)getProcAddress("glBindVertexArray");
    glBindVertexBuffer = (proc_glBindVertexBuffer)getProcAddress("glBindVertexBuffer");
    glBlendColor = (proc_glBlendColor)getProcAddress("glBlendColor");
    glBlendEquation = (proc_glBlendEquation)getProcAddress("glBlendEquation");
    glBlendEquationSeparate = (proc_glBlendEquationSeparate)getProcAddress("glBlendEquationSeparate");
    glBlendEquationSeparatei = (proc_glBlendEquationSeparatei)getProcAddress("glBlendEquationSeparatei");
    glBlendEquationi = (proc_glBlendEquationi)getProcAddress("glBlendEquationi");
    glBlendFunc = (proc_glBlendFunc)getProcAddress("glBlendFunc");
    glBlendFuncSeparate = (proc_glBlendFuncSeparate)getProcAddress("glBlendFuncSeparate");
    glBlendFuncSeparatei = (proc_glBlendFuncSeparatei)getProcAddress("glBlendFuncSeparatei");
    glBlendFunci = (proc_glBlendFunci)getProcAddress("glBlendFunci");
    glBlitFramebuffer = (proc_glBlitFramebuffer)getProcAddress("glBlitFramebuffer");
    glBufferData = (proc_glBufferData)getProcAddress("glBufferData");
    glBufferSubData = (proc_glBufferSubData)getProcAddress("glBufferSubData");
    glCheckFramebufferStatus = (proc_glCheckFramebufferStatus)getProcAddress("glCheckFramebufferStatus");
    glClampColor = (proc_glClampColor)getProcAddress("glClampColor");
    glClear = (proc_glClear)getProcAddress("glClear");
    glClearBufferData = (proc_glClearBufferData)getProcAddress("glClearBufferData");
    glClearBufferSubData = (proc_glClearBufferSubData)getProcAddress("glClearBufferSubData");
    glClearBufferfi = (proc_glClearBufferfi)getProcAddress("glClearBufferfi");
    glClearBufferfv = (proc_glClearBufferfv)getProcAddress("glClearBufferfv");
    glClearBufferiv = (proc_glClearBufferiv)getProcAddress("glClearBufferiv");
    glClearBufferuiv = (proc_glClearBufferuiv)getProcAddress("glClearBufferuiv");
    glClearColor = (proc_glClearColor)getProcAddress("glClearColor");
    glClearDepth = (proc_glClearDepth)getProcAddress("glClearDepth");
    glClearDepthf = (proc_glClearDepthf)getProcAddress("glClearDepthf");
    glClearStencil = (proc_glClearStencil)getProcAddress("glClearStencil");
    glClientWaitSync = (proc_glClientWaitSync)getProcAddress("glClientWaitSync");
    glColorMask = (proc_glColorMask)getProcAddress("glColorMask");
    glColorMaski = (proc_glColorMaski)getProcAddress("glColorMaski");
    glCompileShader = (proc_glCompileShader)getProcAddress("glCompileShader");
    glCompressedTexImage1D = (proc_glCompressedTexImage1D)getProcAddress("glCompressedTexImage1D");
    glCompressedTexImage2D = (proc_glCompressedTexImage2D)getProcAddress("glCompressedTexImage2D");
    glCompressedTexImage3D = (proc_glCompressedTexImage3D)getProcAddress("glCompressedTexImage3D");
    glCompressedTexSubImage1D = (proc_glCompressedTexSubImage1D)getProcAddress("glCompressedTexSubImage1D");
    glCompressedTexSubImage2D = (proc_glCompressedTexSubImage2D)getProcAddress("glCompressedTexSubImage2D");
    glCompressedTexSubImage3D = (proc_glCompressedTexSubImage3D)getProcAddress("glCompressedTexSubImage3D");
    glCopyBufferSubData = (proc_glCopyBufferSubData)getProcAddress("glCopyBufferSubData");
    glCopyImageSubData = (proc_glCopyImageSubData)getProcAddress("glCopyImageSubData");
    glCopyTexImage1D = (proc_glCopyTexImage1D)getProcAddress("glCopyTexImage1D");
    glCopyTexImage2D = (proc_glCopyTexImage2D)getProcAddress("glCopyTexImage2D");
    glCopyTexSubImage1D = (proc_glCopyTexSubImage1D)getProcAddress("glCopyTexSubImage1D");
    glCopyTexSubImage2D = (proc_glCopyTexSubImage2D)getProcAddress("glCopyTexSubImage2D");
    glCopyTexSubImage3D = (proc_glCopyTexSubImage3D)getProcAddress("glCopyTexSubImage3D");
    glCreateProgram = (proc_glCreateProgram)getProcAddress("glCreateProgram");
    glCreateShader = (proc_glCreateShader)getProcAddress("glCreateShader");
    glCreateShaderProgramv = (proc_glCreateShaderProgramv)getProcAddress("glCreateShaderProgramv");
    glCullFace = (proc_glCullFace)getProcAddress("glCullFace");
    glDebugMessageCallback = (proc_glDebugMessageCallback)getProcAddress("glDebugMessageCallback");
    glDebugMessageControl = (proc_glDebugMessageControl)getProcAddress("glDebugMessageControl");
    glDebugMessageInsert = (proc_glDebugMessageInsert)getProcAddress("glDebugMessageInsert");
    glDeleteBuffers = (proc_glDeleteBuffers)getProcAddress("glDeleteBuffers");
    glDeleteFramebuffers = (proc_glDeleteFramebuffers)getProcAddress("glDeleteFramebuffers");
    glDeleteProgram = (proc_glDeleteProgram)getProcAddress("glDeleteProgram");
    glDeleteProgramPipelines = (proc_glDeleteProgramPipelines)getProcAddress("glDeleteProgramPipelines");
    glDeleteQueries = (proc_glDeleteQueries)getProcAddress("glDeleteQueries");
    glDeleteRenderbuffers = (proc_glDeleteRenderbuffers)getProcAddress("glDeleteRenderbuffers");
    glDeleteSamplers = (proc_glDeleteSamplers)getProcAddress("glDeleteSamplers");
    glDeleteShader = (proc_glDeleteShader)getProcAddress("glDeleteShader");
    glDeleteSync = (proc_glDeleteSync)getProcAddress("glDeleteSync");
    glDeleteTextures = (proc_glDeleteTextures)getProcAddress("glDeleteTextures");
    glDeleteTransformFeedbacks = (proc_glDeleteTransformFeedbacks)getProcAddress("glDeleteTransformFeedbacks");
    glDeleteVertexArrays = (proc_glDeleteVertexArrays)getProcAddress("glDeleteVertexArrays");
    glDepthFunc = (proc_glDepthFunc)getProcAddress("glDepthFunc");
    glDepthMask = (proc_glDepthMask)getProcAddress("glDepthMask");
    glDepthRange = (proc_glDepthRange)getProcAddress("glDepthRange");
    glDepthRangeArrayv = (proc_glDepthRangeArrayv)getProcAddress("glDepthRangeArrayv");
    glDepthRangeIndexed = (proc_glDepthRangeIndexed)getProcAddress("glDepthRangeIndexed");
    glDepthRangef = (proc_glDepthRangef)getProcAddress("glDepthRangef");
    glDetachShader = (proc_glDetachShader)getProcAddress("glDetachShader");
    glDisable = (proc_glDisable)getProcAddress("glDisable");
    glDisableVertexAttribArray = (proc_glDisableVertexAttribArray)getProcAddress("glDisableVertexAttribArray");
    glDisablei = (proc_glDisablei)getProcAddress("glDisablei");
    glDispatchCompute = (proc_glDispatchCompute)getProcAddress("glDispatchCompute");
    glDispatchComputeIndirect = (proc_glDispatchComputeIndirect)getProcAddress("glDispatchComputeIndirect");
    glDrawArrays = (proc_glDrawArrays)getProcAddress("glDrawArrays");
    glDrawArraysIndirect = (proc_glDrawArraysIndirect)getProcAddress("glDrawArraysIndirect");
    glDrawArraysInstanced = (proc_glDrawArraysInstanced)getProcAddress("glDrawArraysInstanced");
    glDrawArraysInstancedBaseInstance = (proc_glDrawArraysInstancedBaseInstance)getProcAddress("glDrawArraysInstancedBaseInstance");
    glDrawBuffer = (proc_glDrawBuffer)getProcAddress("glDrawBuffer");
    glDrawBuffers = (proc_glDrawBuffers)getProcAddress("glDrawBuffers");
    glDrawElements = (proc_glDrawElements)getProcAddress("glDrawElements");
    glDrawElementsBaseVertex = (proc_glDrawElementsBaseVertex)getProcAddress("glDrawElementsBaseVertex");
    glDrawElementsIndirect = (proc_glDrawElementsIndirect)getProcAddress("glDrawElementsIndirect");
    glDrawElementsInstanced = (proc_glDrawElementsInstanced)getProcAddress("glDrawElementsInstanced");
    glDrawElementsInstancedBaseInstance = (proc_glDrawElementsInstancedBaseInstance)getProcAddress("glDrawElementsInstancedBaseInstance");
    glDrawElementsInstancedBaseVertex = (proc_glDrawElementsInstancedBaseVertex)getProcAddress("glDrawElementsInstancedBaseVertex");
    glDrawElementsInstancedBaseVertexBaseInstance = (proc_glDrawElementsInstancedBaseVertexBaseInstance)getProcAddress("glDrawElementsInstancedBaseVertexBaseInstance");
    glDrawRangeElements = (proc_glDrawRangeElements)getProcAddress("glDrawRangeElements");
    glDrawRangeElementsBaseVertex = (proc_glDrawRangeElementsBaseVertex)getProcAddress("glDrawRangeElementsBaseVertex");
    glDrawTransformFeedback = (proc_glDrawTransformFeedback)getProcAddress("glDrawTransformFeedback");
    glDrawTransformFeedbackInstanced = (proc_glDrawTransformFeedbackInstanced)getProcAddress("glDrawTransformFeedbackInstanced");
    glDrawTransformFeedbackStream = (proc_glDrawTransformFeedbackStream)getProcAddress("glDrawTransformFeedbackStream");
    glDrawTransformFeedbackStreamInstanced = (proc_glDrawTransformFeedbackStreamInstanced)getProcAddress("glDrawTransformFeedbackStreamInstanced");
    glEnable = (proc_glEnable)getProcAddress("glEnable");
    glEnableVertexAttribArray = (proc_glEnableVertexAttribArray)getProcAddress("glEnableVertexAttribArray");
    glEnablei = (proc_glEnablei)getProcAddress("glEnablei");
    glEndConditionalRender = (proc_glEndConditionalRender)getProcAddress("glEndConditionalRender");
    glEndQuery = (proc_glEndQuery)getProcAddress("glEndQuery");
    glEndQueryIndexed = (proc_glEndQueryIndexed)getProcAddress("glEndQueryIndexed");
    glEndTransformFeedback = (proc_glEndTransformFeedback)getProcAddress("glEndTransformFeedback");
    glFenceSync = (proc_glFenceSync)getProcAddress("glFenceSync");
    glFinish = (proc_glFinish)getProcAddress("glFinish");
    glFlush = (proc_glFlush)getProcAddress("glFlush");
    glFlushMappedBufferRange = (proc_glFlushMappedBufferRange)getProcAddress("glFlushMappedBufferRange");
    glFramebufferParameteri = (proc_glFramebufferParameteri)getProcAddress("glFramebufferParameteri");
    glFramebufferRenderbuffer = (proc_glFramebufferRenderbuffer)getProcAddress("glFramebufferRenderbuffer");
    glFramebufferTexture = (proc_glFramebufferTexture)getProcAddress("glFramebufferTexture");
    glFramebufferTexture1D = (proc_glFramebufferTexture1D)getProcAddress("glFramebufferTexture1D");
    glFramebufferTexture2D = (proc_glFramebufferTexture2D)getProcAddress("glFramebufferTexture2D");
    glFramebufferTexture3D = (proc_glFramebufferTexture3D)getProcAddress("glFramebufferTexture3D");
    glFramebufferTextureLayer = (proc_glFramebufferTextureLayer)getProcAddress("glFramebufferTextureLayer");
    glFrontFace = (proc_glFrontFace)getProcAddress("glFrontFace");
    glGenBuffers = (proc_glGenBuffers)getProcAddress("glGenBuffers");
    glGenFramebuffers = (proc_glGenFramebuffers)getProcAddress("glGenFramebuffers");
    glGenProgramPipelines = (proc_glGenProgramPipelines)getProcAddress("glGenProgramPipelines");
    glGenQueries = (proc_glGenQueries)getProcAddress("glGenQueries");
    glGenRenderbuffers = (proc_glGenRenderbuffers)getProcAddress("glGenRenderbuffers");
    glGenSamplers = (proc_glGenSamplers)getProcAddress("glGenSamplers");
    glGenTextures = (proc_glGenTextures)getProcAddress("glGenTextures");
    glGenTransformFeedbacks = (proc_glGenTransformFeedbacks)getProcAddress("glGenTransformFeedbacks");
    glGenVertexArrays = (proc_glGenVertexArrays)getProcAddress("glGenVertexArrays");
    glGenerateMipmap = (proc_glGenerateMipmap)getProcAddress("glGenerateMipmap");
    glGetActiveAtomicCounterBufferiv = (proc_glGetActiveAtomicCounterBufferiv)getProcAddress("glGetActiveAtomicCounterBufferiv");
    glGetActiveAttrib = (proc_glGetActiveAttrib)getProcAddress("glGetActiveAttrib");
    glGetActiveSubroutineName = (proc_glGetActiveSubroutineName)getProcAddress("glGetActiveSubroutineName");
    glGetActiveSubroutineUniformName = (proc_glGetActiveSubroutineUniformName)getProcAddress("glGetActiveSubroutineUniformName");
    glGetActiveSubroutineUniformiv = (proc_glGetActiveSubroutineUniformiv)getProcAddress("glGetActiveSubroutineUniformiv");
    glGetActiveUniform = (proc_glGetActiveUniform)getProcAddress("glGetActiveUniform");
    glGetActiveUniformBlockName = (proc_glGetActiveUniformBlockName)getProcAddress("glGetActiveUniformBlockName");
    glGetActiveUniformBlockiv = (proc_glGetActiveUniformBlockiv)getProcAddress("glGetActiveUniformBlockiv");
    glGetActiveUniformName = (proc_glGetActiveUniformName)getProcAddress("glGetActiveUniformName");
    glGetActiveUniformsiv = (proc_glGetActiveUniformsiv)getProcAddress("glGetActiveUniformsiv");
    glGetAttachedShaders = (proc_glGetAttachedShaders)getProcAddress("glGetAttachedShaders");
    glGetAttribLocation = (proc_glGetAttribLocation)getProcAddress("glGetAttribLocation");
    glGetBooleani_v = (proc_glGetBooleani_v)getProcAddress("glGetBooleani_v");
    glGetBooleanv = (proc_glGetBooleanv)getProcAddress("glGetBooleanv");
    glGetBufferParameteri64v = (proc_glGetBufferParameteri64v)getProcAddress("glGetBufferParameteri64v");
    glGetBufferParameteriv = (proc_glGetBufferParameteriv)getProcAddress("glGetBufferParameteriv");
    glGetBufferPointerv = (proc_glGetBufferPointerv)getProcAddress("glGetBufferPointerv");
    glGetBufferSubData = (proc_glGetBufferSubData)getProcAddress("glGetBufferSubData");
    glGetCompressedTexImage = (proc_glGetCompressedTexImage)getProcAddress("glGetCompressedTexImage");
    glGetDebugMessageLog = (proc_glGetDebugMessageLog)getProcAddress("glGetDebugMessageLog");
    glGetDoublei_v = (proc_glGetDoublei_v)getProcAddress("glGetDoublei_v");
    glGetDoublev = (proc_glGetDoublev)getProcAddress("glGetDoublev");
    glGetError = (proc_glGetError)getProcAddress("glGetError");
    glGetFloati_v = (proc_glGetFloati_v)getProcAddress("glGetFloati_v");
    glGetFloatv = (proc_glGetFloatv)getProcAddress("glGetFloatv");
    glGetFragDataIndex = (proc_glGetFragDataIndex)getProcAddress("glGetFragDataIndex");
    glGetFragDataLocation = (proc_glGetFragDataLocation)getProcAddress("glGetFragDataLocation");
    glGetFramebufferAttachmentParameteriv = (proc_glGetFramebufferAttachmentParameteriv)getProcAddress("glGetFramebufferAttachmentParameteriv");
    glGetFramebufferParameteriv = (proc_glGetFramebufferParameteriv)getProcAddress("glGetFramebufferParameteriv");
    glGetInteger64i_v = (proc_glGetInteger64i_v)getProcAddress("glGetInteger64i_v");
    glGetInteger64v = (proc_glGetInteger64v)getProcAddress("glGetInteger64v");
    glGetIntegeri_v = (proc_glGetIntegeri_v)getProcAddress("glGetIntegeri_v");
    glGetIntegerv = (proc_glGetIntegerv)getProcAddress("glGetIntegerv");
    glGetInternalformati64v = (proc_glGetInternalformati64v)getProcAddress("glGetInternalformati64v");
    glGetInternalformativ = (proc_glGetInternalformativ)getProcAddress("glGetInternalformativ");
    glGetMultisamplefv = (proc_glGetMultisamplefv)getProcAddress("glGetMultisamplefv");
    glGetObjectLabel = (proc_glGetObjectLabel)getProcAddress("glGetObjectLabel");
    glGetObjectPtrLabel = (proc_glGetObjectPtrLabel)getProcAddress("glGetObjectPtrLabel");
    glGetPointerv = (proc_glGetPointerv)getProcAddress("glGetPointerv");
    glGetProgramBinary = (proc_glGetProgramBinary)getProcAddress("glGetProgramBinary");
    glGetProgramInfoLog = (proc_glGetProgramInfoLog)getProcAddress("glGetProgramInfoLog");
    glGetProgramInterfaceiv = (proc_glGetProgramInterfaceiv)getProcAddress("glGetProgramInterfaceiv");
    glGetProgramPipelineInfoLog = (proc_glGetProgramPipelineInfoLog)getProcAddress("glGetProgramPipelineInfoLog");
    glGetProgramPipelineiv = (proc_glGetProgramPipelineiv)getProcAddress("glGetProgramPipelineiv");
    glGetProgramResourceIndex = (proc_glGetProgramResourceIndex)getProcAddress("glGetProgramResourceIndex");
    glGetProgramResourceLocation = (proc_glGetProgramResourceLocation)getProcAddress("glGetProgramResourceLocation");
    glGetProgramResourceLocationIndex = (proc_glGetProgramResourceLocationIndex)getProcAddress("glGetProgramResourceLocationIndex");
    glGetProgramResourceName = (proc_glGetProgramResourceName)getProcAddress("glGetProgramResourceName");
    glGetProgramResourceiv = (proc_glGetProgramResourceiv)getProcAddress("glGetProgramResourceiv");
    glGetProgramStageiv = (proc_glGetProgramStageiv)getProcAddress("glGetProgramStageiv");
    glGetProgramiv = (proc_glGetProgramiv)getProcAddress("glGetProgramiv");
    glGetQueryIndexediv = (proc_glGetQueryIndexediv)getProcAddress("glGetQueryIndexediv");
    glGetQueryObjecti64v = (proc_glGetQueryObjecti64v)getProcAddress("glGetQueryObjecti64v");
    glGetQueryObjectiv = (proc_glGetQueryObjectiv)getProcAddress("glGetQueryObjectiv");
    glGetQueryObjectui64v = (proc_glGetQueryObjectui64v)getProcAddress("glGetQueryObjectui64v");
    glGetQueryObjectuiv = (proc_glGetQueryObjectuiv)getProcAddress("glGetQueryObjectuiv");
    glGetQueryiv = (proc_glGetQueryiv)getProcAddress("glGetQueryiv");
    glGetRenderbufferParameteriv = (proc_glGetRenderbufferParameteriv)getProcAddress("glGetRenderbufferParameteriv");
    glGetSamplerParameterIiv = (proc_glGetSamplerParameterIiv)getProcAddress("glGetSamplerParameterIiv");
    glGetSamplerParameterIuiv = (proc_glGetSamplerParameterIuiv)getProcAddress("glGetSamplerParameterIuiv");
    glGetSamplerParameterfv = (proc_glGetSamplerParameterfv)getProcAddress("glGetSamplerParameterfv");
    glGetSamplerParameteriv = (proc_glGetSamplerParameteriv)getProcAddress("glGetSamplerParameteriv");
    glGetShaderInfoLog = (proc_glGetShaderInfoLog)getProcAddress("glGetShaderInfoLog");
    glGetShaderPrecisionFormat = (proc_glGetShaderPrecisionFormat)getProcAddress("glGetShaderPrecisionFormat");
    glGetShaderSource = (proc_glGetShaderSource)getProcAddress("glGetShaderSource");
    glGetShaderiv = (proc_glGetShaderiv)getProcAddress("glGetShaderiv");
    glGetString = (proc_glGetString)getProcAddress("glGetString");
    glGetStringi = (proc_glGetStringi)getProcAddress("glGetStringi");
    glGetSubroutineIndex = (proc_glGetSubroutineIndex)getProcAddress("glGetSubroutineIndex");
    glGetSubroutineUniformLocation = (proc_glGetSubroutineUniformLocation)getProcAddress("glGetSubroutineUniformLocation");
    glGetSynciv = (proc_glGetSynciv)getProcAddress("glGetSynciv");
    glGetTexImage = (proc_glGetTexImage)getProcAddress("glGetTexImage");
    glGetTexLevelParameterfv = (proc_glGetTexLevelParameterfv)getProcAddress("glGetTexLevelParameterfv");
    glGetTexLevelParameteriv = (proc_glGetTexLevelParameteriv)getProcAddress("glGetTexLevelParameteriv");
    glGetTexParameterIiv = (proc_glGetTexParameterIiv)getProcAddress("glGetTexParameterIiv");
    glGetTexParameterIuiv = (proc_glGetTexParameterIuiv)getProcAddress("glGetTexParameterIuiv");
    glGetTexParameterfv = (proc_glGetTexParameterfv)getProcAddress("glGetTexParameterfv");
    glGetTexParameteriv = (proc_glGetTexParameteriv)getProcAddress("glGetTexParameteriv");
    glGetTransformFeedbackVarying = (proc_glGetTransformFeedbackVarying)getProcAddress("glGetTransformFeedbackVarying");
    glGetUniformBlockIndex = (proc_glGetUniformBlockIndex)getProcAddress("glGetUniformBlockIndex");
    glGetUniformIndices = (proc_glGetUniformIndices)getProcAddress("glGetUniformIndices");
    glGetUniformLocation = (proc_glGetUniformLocation)getProcAddress("glGetUniformLocation");
    glGetUniformSubroutineuiv = (proc_glGetUniformSubroutineuiv)getProcAddress("glGetUniformSubroutineuiv");
    glGetUniformdv = (proc_glGetUniformdv)getProcAddress("glGetUniformdv");
    glGetUniformfv = (proc_glGetUniformfv)getProcAddress("glGetUniformfv");
    glGetUniformiv = (proc_glGetUniformiv)getProcAddress("glGetUniformiv");
    glGetUniformuiv = (proc_glGetUniformuiv)getProcAddress("glGetUniformuiv");
    glGetVertexAttribIiv = (proc_glGetVertexAttribIiv)getProcAddress("glGetVertexAttribIiv");
    glGetVertexAttribIuiv = (proc_glGetVertexAttribIuiv)getProcAddress("glGetVertexAttribIuiv");
    glGetVertexAttribLdv = (proc_glGetVertexAttribLdv)getProcAddress("glGetVertexAttribLdv");
    glGetVertexAttribPointerv = (proc_glGetVertexAttribPointerv)getProcAddress("glGetVertexAttribPointerv");
    glGetVertexAttribdv = (proc_glGetVertexAttribdv)getProcAddress("glGetVertexAttribdv");
    glGetVertexAttribfv = (proc_glGetVertexAttribfv)getProcAddress("glGetVertexAttribfv");
    glGetVertexAttribiv = (proc_glGetVertexAttribiv)getProcAddress("glGetVertexAttribiv");
    glHint = (proc_glHint)getProcAddress("glHint");
    glInvalidateBufferData = (proc_glInvalidateBufferData)getProcAddress("glInvalidateBufferData");
    glInvalidateBufferSubData = (proc_glInvalidateBufferSubData)getProcAddress("glInvalidateBufferSubData");
    glInvalidateFramebuffer = (proc_glInvalidateFramebuffer)getProcAddress("glInvalidateFramebuffer");
    glInvalidateSubFramebuffer = (proc_glInvalidateSubFramebuffer)getProcAddress("glInvalidateSubFramebuffer");
    glInvalidateTexImage = (proc_glInvalidateTexImage)getProcAddress("glInvalidateTexImage");
    glInvalidateTexSubImage = (proc_glInvalidateTexSubImage)getProcAddress("glInvalidateTexSubImage");
    glIsBuffer = (proc_glIsBuffer)getProcAddress("glIsBuffer");
    glIsEnabled = (proc_glIsEnabled)getProcAddress("glIsEnabled");
    glIsEnabledi = (proc_glIsEnabledi)getProcAddress("glIsEnabledi");
    glIsFramebuffer = (proc_glIsFramebuffer)getProcAddress("glIsFramebuffer");
    glIsProgram = (proc_glIsProgram)getProcAddress("glIsProgram");
    glIsProgramPipeline = (proc_glIsProgramPipeline)getProcAddress("glIsProgramPipeline");
    glIsQuery = (proc_glIsQuery)getProcAddress("glIsQuery");
    glIsRenderbuffer = (proc_glIsRenderbuffer)getProcAddress("glIsRenderbuffer");
    glIsSampler = (proc_glIsSampler)getProcAddress("glIsSampler");
    glIsShader = (proc_glIsShader)getProcAddress("glIsShader");
    glIsSync = (proc_glIsSync)getProcAddress("glIsSync");
    glIsTexture = (proc_glIsTexture)getProcAddress("glIsTexture");
    glIsTransformFeedback = (proc_glIsTransformFeedback)getProcAddress("glIsTransformFeedback");
    glIsVertexArray = (proc_glIsVertexArray)getProcAddress("glIsVertexArray");
    glLineWidth = (proc_glLineWidth)getProcAddress("glLineWidth");
    glLinkProgram = (proc_glLinkProgram)getProcAddress("glLinkProgram");
    glLogicOp = (proc_glLogicOp)getProcAddress("glLogicOp");
    glMapBuffer = (proc_glMapBuffer)getProcAddress("glMapBuffer");
    glMapBufferRange = (proc_glMapBufferRange)getProcAddress("glMapBufferRange");
    glMemoryBarrier = (proc_glMemoryBarrier)getProcAddress("glMemoryBarrier");
    glMinSampleShading = (proc_glMinSampleShading)getProcAddress("glMinSampleShading");
    glMultiDrawArrays = (proc_glMultiDrawArrays)getProcAddress("glMultiDrawArrays");
    glMultiDrawArraysIndirect = (proc_glMultiDrawArraysIndirect)getProcAddress("glMultiDrawArraysIndirect");
    glMultiDrawElements = (proc_glMultiDrawElements)getProcAddress("glMultiDrawElements");
    glMultiDrawElementsBaseVertex = (proc_glMultiDrawElementsBaseVertex)getProcAddress("glMultiDrawElementsBaseVertex");
    glMultiDrawElementsIndirect = (proc_glMultiDrawElementsIndirect)getProcAddress("glMultiDrawElementsIndirect");
    glObjectLabel = (proc_glObjectLabel)getProcAddress("glObjectLabel");
    glObjectPtrLabel = (proc_glObjectPtrLabel)getProcAddress("glObjectPtrLabel");
    glPatchParameterfv = (proc_glPatchParameterfv)getProcAddress("glPatchParameterfv");
    glPatchParameteri = (proc_glPatchParameteri)getProcAddress("glPatchParameteri");
    glPauseTransformFeedback = (proc_glPauseTransformFeedback)getProcAddress("glPauseTransformFeedback");
    glPixelStoref = (proc_glPixelStoref)getProcAddress("glPixelStoref");
    glPixelStorei = (proc_glPixelStorei)getProcAddress("glPixelStorei");
    glPointParameterf = (proc_glPointParameterf)getProcAddress("glPointParameterf");
    glPointParameterfv = (proc_glPointParameterfv)getProcAddress("glPointParameterfv");
    glPointParameteri = (proc_glPointParameteri)getProcAddress("glPointParameteri");
    glPointParameteriv = (proc_glPointParameteriv)getProcAddress("glPointParameteriv");
    glPointSize = (proc_glPointSize)getProcAddress("glPointSize");
    glPolygonMode = (proc_glPolygonMode)getProcAddress("glPolygonMode");
    glPolygonOffset = (proc_glPolygonOffset)getProcAddress("glPolygonOffset");
    glPopDebugGroup = (proc_glPopDebugGroup)getProcAddress("glPopDebugGroup");
    glPrimitiveRestartIndex = (proc_glPrimitiveRestartIndex)getProcAddress("glPrimitiveRestartIndex");
    glProgramBinary = (proc_glProgramBinary)getProcAddress("glProgramBinary");
    glProgramParameteri = (proc_glProgramParameteri)getProcAddress("glProgramParameteri");
    glProgramUniform1d = (proc_glProgramUniform1d)getProcAddress("glProgramUniform1d");
    glProgramUniform1dv = (proc_glProgramUniform1dv)getProcAddress("glProgramUniform1dv");
    glProgramUniform1f = (proc_glProgramUniform1f)getProcAddress("glProgramUniform1f");
    glProgramUniform1fv = (proc_glProgramUniform1fv)getProcAddress("glProgramUniform1fv");
    glProgramUniform1i = (proc_glProgramUniform1i)getProcAddress("glProgramUniform1i");
    glProgramUniform1iv = (proc_glProgramUniform1iv)getProcAddress("glProgramUniform1iv");
    glProgramUniform1ui = (proc_glProgramUniform1ui)getProcAddress("glProgramUniform1ui");
    glProgramUniform1uiv = (proc_glProgramUniform1uiv)getProcAddress("glProgramUniform1uiv");
    glProgramUniform2d = (proc_glProgramUniform2d)getProcAddress("glProgramUniform2d");
    glProgramUniform2dv = (proc_glProgramUniform2dv)getProcAddress("glProgramUniform2dv");
    glProgramUniform2f = (proc_glProgramUniform2f)getProcAddress("glProgramUniform2f");
    glProgramUniform2fv = (proc_glProgramUniform2fv)getProcAddress("glProgramUniform2fv");
    glProgramUniform2i = (proc_glProgramUniform2i)getProcAddress("glProgramUniform2i");
    glProgramUniform2iv = (proc_glProgramUniform2iv)getProcAddress("glProgramUniform2iv");
    glProgramUniform2ui = (proc_glProgramUniform2ui)getProcAddress("glProgramUniform2ui");
    glProgramUniform2uiv = (proc_glProgramUniform2uiv)getProcAddress("glProgramUniform2uiv");
    glProgramUniform3d = (proc_glProgramUniform3d)getProcAddress("glProgramUniform3d");
    glProgramUniform3dv = (proc_glProgramUniform3dv)getProcAddress("glProgramUniform3dv");
    glProgramUniform3f = (proc_glProgramUniform3f)getProcAddress("glProgramUniform3f");
    glProgramUniform3fv = (proc_glProgramUniform3fv)getProcAddress("glProgramUniform3fv");
    glProgramUniform3i = (proc_glProgramUniform3i)getProcAddress("glProgramUniform3i");
    glProgramUniform3iv = (proc_glProgramUniform3iv)getProcAddress("glProgramUniform3iv");
    glProgramUniform3ui = (proc_glProgramUniform3ui)getProcAddress("glProgramUniform3ui");
    glProgramUniform3uiv = (proc_glProgramUniform3uiv)getProcAddress("glProgramUniform3uiv");
    glProgramUniform4d = (proc_glProgramUniform4d)getProcAddress("glProgramUniform4d");
    glProgramUniform4dv = (proc_glProgramUniform4dv)getProcAddress("glProgramUniform4dv");
    glProgramUniform4f = (proc_glProgramUniform4f)getProcAddress("glProgramUniform4f");
    glProgramUniform4fv = (proc_glProgramUniform4fv)getProcAddress("glProgramUniform4fv");
    glProgramUniform4i = (proc_glProgramUniform4i)getProcAddress("glProgramUniform4i");
    glProgramUniform4iv = (proc_glProgramUniform4iv)getProcAddress("glProgramUniform4iv");
    glProgramUniform4ui = (proc_glProgramUniform4ui)getProcAddress("glProgramUniform4ui");
    glProgramUniform4uiv = (proc_glProgramUniform4uiv)getProcAddress("glProgramUniform4uiv");
    glProgramUniformMatrix2dv = (proc_glProgramUniformMatrix2dv)getProcAddress("glProgramUniformMatrix2dv");
    glProgramUniformMatrix2fv = (proc_glProgramUniformMatrix2fv)getProcAddress("glProgramUniformMatrix2fv");
    glProgramUniformMatrix2x3dv = (proc_glProgramUniformMatrix2x3dv)getProcAddress("glProgramUniformMatrix2x3dv");
    glProgramUniformMatrix2x3fv = (proc_glProgramUniformMatrix2x3fv)getProcAddress("glProgramUniformMatrix2x3fv");
    glProgramUniformMatrix2x4dv = (proc_glProgramUniformMatrix2x4dv)getProcAddress("glProgramUniformMatrix2x4dv");
    glProgramUniformMatrix2x4fv = (proc_glProgramUniformMatrix2x4fv)getProcAddress("glProgramUniformMatrix2x4fv");
    glProgramUniformMatrix3dv = (proc_glProgramUniformMatrix3dv)getProcAddress("glProgramUniformMatrix3dv");
    glProgramUniformMatrix3fv = (proc_glProgramUniformMatrix3fv)getProcAddress("glProgramUniformMatrix3fv");
    glProgramUniformMatrix3x2dv = (proc_glProgramUniformMatrix3x2dv)getProcAddress("glProgramUniformMatrix3x2dv");
    glProgramUniformMatrix3x2fv = (proc_glProgramUniformMatrix3x2fv)getProcAddress("glProgramUniformMatrix3x2fv");
    glProgramUniformMatrix3x4dv = (proc_glProgramUniformMatrix3x4dv)getProcAddress("glProgramUniformMatrix3x4dv");
    glProgramUniformMatrix3x4fv = (proc_glProgramUniformMatrix3x4fv)getProcAddress("glProgramUniformMatrix3x4fv");
    glProgramUniformMatrix4dv = (proc_glProgramUniformMatrix4dv)getProcAddress("glProgramUniformMatrix4dv");
    glProgramUniformMatrix4fv = (proc_glProgramUniformMatrix4fv)getProcAddress("glProgramUniformMatrix4fv");
    glProgramUniformMatrix4x2dv = (proc_glProgramUniformMatrix4x2dv)getProcAddress("glProgramUniformMatrix4x2dv");
    glProgramUniformMatrix4x2fv = (proc_glProgramUniformMatrix4x2fv)getProcAddress("glProgramUniformMatrix4x2fv");
    glProgramUniformMatrix4x3dv = (proc_glProgramUniformMatrix4x3dv)getProcAddress("glProgramUniformMatrix4x3dv");
    glProgramUniformMatrix4x3fv = (proc_glProgramUniformMatrix4x3fv)getProcAddress("glProgramUniformMatrix4x3fv");
    glProvokingVertex = (proc_glProvokingVertex)getProcAddress("glProvokingVertex");
    glPushDebugGroup = (proc_glPushDebugGroup)getProcAddress("glPushDebugGroup");
    glQueryCounter = (proc_glQueryCounter)getProcAddress("glQueryCounter");
    glReadBuffer = (proc_glReadBuffer)getProcAddress("glReadBuffer");
    glReadPixels = (proc_glReadPixels)getProcAddress("glReadPixels");
    glReleaseShaderCompiler = (proc_glReleaseShaderCompiler)getProcAddress("glReleaseShaderCompiler");
    glRenderbufferStorage = (proc_glRenderbufferStorage)getProcAddress("glRenderbufferStorage");
    glRenderbufferStorageMultisample = (proc_glRenderbufferStorageMultisample)getProcAddress("glRenderbufferStorageMultisample");
    glResumeTransformFeedback = (proc_glResumeTransformFeedback)getProcAddress("glResumeTransformFeedback");
    glSampleCoverage = (proc_glSampleCoverage)getProcAddress("glSampleCoverage");
    glSampleMaski = (proc_glSampleMaski)getProcAddress("glSampleMaski");
    glSamplerParameterIiv = (proc_glSamplerParameterIiv)getProcAddress("glSamplerParameterIiv");
    glSamplerParameterIuiv = (proc_glSamplerParameterIuiv)getProcAddress("glSamplerParameterIuiv");
    glSamplerParameterf = (proc_glSamplerParameterf)getProcAddress("glSamplerParameterf");
    glSamplerParameterfv = (proc_glSamplerParameterfv)getProcAddress("glSamplerParameterfv");
    glSamplerParameteri = (proc_glSamplerParameteri)getProcAddress("glSamplerParameteri");
    glSamplerParameteriv = (proc_glSamplerParameteriv)getProcAddress("glSamplerParameteriv");
    glScissor = (proc_glScissor)getProcAddress("glScissor");
    glScissorArrayv = (proc_glScissorArrayv)getProcAddress("glScissorArrayv");
    glScissorIndexed = (proc_glScissorIndexed)getProcAddress("glScissorIndexed");
    glScissorIndexedv = (proc_glScissorIndexedv)getProcAddress("glScissorIndexedv");
    glShaderBinary = (proc_glShaderBinary)getProcAddress("glShaderBinary");
    glShaderSource = (proc_glShaderSource)getProcAddress("glShaderSource");
    glShaderStorageBlockBinding = (proc_glShaderStorageBlockBinding)getProcAddress("glShaderStorageBlockBinding");
    glStencilFunc = (proc_glStencilFunc)getProcAddress("glStencilFunc");
    glStencilFuncSeparate = (proc_glStencilFuncSeparate)getProcAddress("glStencilFuncSeparate");
    glStencilMask = (proc_glStencilMask)getProcAddress("glStencilMask");
    glStencilMaskSeparate = (proc_glStencilMaskSeparate)getProcAddress("glStencilMaskSeparate");
    glStencilOp = (proc_glStencilOp)getProcAddress("glStencilOp");
    glStencilOpSeparate = (proc_glStencilOpSeparate)getProcAddress("glStencilOpSeparate");
    glTexBuffer = (proc_glTexBuffer)getProcAddress("glTexBuffer");
    glTexBufferRange = (proc_glTexBufferRange)getProcAddress("glTexBufferRange");
    glTexImage1D = (proc_glTexImage1D)getProcAddress("glTexImage1D");
    glTexImage2D = (proc_glTexImage2D)getProcAddress("glTexImage2D");
    glTexImage2DMultisample = (proc_glTexImage2DMultisample)getProcAddress("glTexImage2DMultisample");
    glTexImage3D = (proc_glTexImage3D)getProcAddress("glTexImage3D");
    glTexImage3DMultisample = (proc_glTexImage3DMultisample)getProcAddress("glTexImage3DMultisample");
    glTexParameterIiv = (proc_glTexParameterIiv)getProcAddress("glTexParameterIiv");
    glTexParameterIuiv = (proc_glTexParameterIuiv)getProcAddress("glTexParameterIuiv");
    glTexParameterf = (proc_glTexParameterf)getProcAddress("glTexParameterf");
    glTexParameterfv = (proc_glTexParameterfv)getProcAddress("glTexParameterfv");
    glTexParameteri = (proc_glTexParameteri)getProcAddress("glTexParameteri");
    glTexParameteriv = (proc_glTexParameteriv)getProcAddress("glTexParameteriv");
    glTexStorage1D = (proc_glTexStorage1D)getProcAddress("glTexStorage1D");
    glTexStorage2D = (proc_glTexStorage2D)getProcAddress("glTexStorage2D");
    glTexStorage2DMultisample = (proc_glTexStorage2DMultisample)getProcAddress("glTexStorage2DMultisample");
    glTexStorage3D = (proc_glTexStorage3D)getProcAddress("glTexStorage3D");
    glTexStorage3DMultisample = (proc_glTexStorage3DMultisample)getProcAddress("glTexStorage3DMultisample");
    glTexSubImage1D = (proc_glTexSubImage1D)getProcAddress("glTexSubImage1D");
    glTexSubImage2D = (proc_glTexSubImage2D)getProcAddress("glTexSubImage2D");
    glTexSubImage3D = (proc_glTexSubImage3D)getProcAddress("glTexSubImage3D");
    glTextureView = (proc_glTextureView)getProcAddress("glTextureView");
    glTransformFeedbackVaryings = (proc_glTransformFeedbackVaryings)getProcAddress("glTransformFeedbackVaryings");
    glUniform1d = (proc_glUniform1d)getProcAddress("glUniform1d");
    glUniform1dv = (proc_glUniform1dv)getProcAddress("glUniform1dv");
    glUniform1f = (proc_glUniform1f)getProcAddress("glUniform1f");
    glUniform1fv = (proc_glUniform1fv)getProcAddress("glUniform1fv");
    glUniform1i = (proc_glUniform1i)getProcAddress("glUniform1i");
    glUniform1iv = (proc_glUniform1iv)getProcAddress("glUniform1iv");
    glUniform1ui = (proc_glUniform1ui)getProcAddress("glUniform1ui");
    glUniform1uiv = (proc_glUniform1uiv)getProcAddress("glUniform1uiv");
    glUniform2d = (proc_glUniform2d)getProcAddress("glUniform2d");
    glUniform2dv = (proc_glUniform2dv)getProcAddress("glUniform2dv");
    glUniform2f = (proc_glUniform2f)getProcAddress("glUniform2f");
    glUniform2fv = (proc_glUniform2fv)getProcAddress("glUniform2fv");
    glUniform2i = (proc_glUniform2i)getProcAddress("glUniform2i");
    glUniform2iv = (proc_glUniform2iv)getProcAddress("glUniform2iv");
    glUniform2ui = (proc_glUniform2ui)getProcAddress("glUniform2ui");
    glUniform2uiv = (proc_glUniform2uiv)getProcAddress("glUniform2uiv");
    glUniform3d = (proc_glUniform3d)getProcAddress("glUniform3d");
    glUniform3dv = (proc_glUniform3dv)getProcAddress("glUniform3dv");
    glUniform3f = (proc_glUniform3f)getProcAddress("glUniform3f");
    glUniform3fv = (proc_glUniform3fv)getProcAddress("glUniform3fv");
    glUniform3i = (proc_glUniform3i)getProcAddress("glUniform3i");
    glUniform3iv = (proc_glUniform3iv)getProcAddress("glUniform3iv");
    glUniform3ui = (proc_glUniform3ui)getProcAddress("glUniform3ui");
    glUniform3uiv = (proc_glUniform3uiv)getProcAddress("glUniform3uiv");
    glUniform4d = (proc_glUniform4d)getProcAddress("glUniform4d");
    glUniform4dv = (proc_glUniform4dv)getProcAddress("glUniform4dv");
    glUniform4f = (proc_glUniform4f)getProcAddress("glUniform4f");
    glUniform4fv = (proc_glUniform4fv)getProcAddress("glUniform4fv");
    glUniform4i = (proc_glUniform4i)getProcAddress("glUniform4i");
    glUniform4iv = (proc_glUniform4iv)getProcAddress("glUniform4iv");
    glUniform4ui = (proc_glUniform4ui)getProcAddress("glUniform4ui");
    glUniform4uiv = (proc_glUniform4uiv)getProcAddress("glUniform4uiv");
    glUniformBlockBinding = (proc_glUniformBlockBinding)getProcAddress("glUniformBlockBinding");
    glUniformMatrix2dv = (proc_glUniformMatrix2dv)getProcAddress("glUniformMatrix2dv");
    glUniformMatrix2fv = (proc_glUniformMatrix2fv)getProcAddress("glUniformMatrix2fv");
    glUniformMatrix2x3dv = (proc_glUniformMatrix2x3dv)getProcAddress("glUniformMatrix2x3dv");
    glUniformMatrix2x3fv = (proc_glUniformMatrix2x3fv)getProcAddress("glUniformMatrix2x3fv");
    glUniformMatrix2x4dv = (proc_glUniformMatrix2x4dv)getProcAddress("glUniformMatrix2x4dv");
    glUniformMatrix2x4fv = (proc_glUniformMatrix2x4fv)getProcAddress("glUniformMatrix2x4fv");
    glUniformMatrix3dv = (proc_glUniformMatrix3dv)getProcAddress("glUniformMatrix3dv");
    glUniformMatrix3fv = (proc_glUniformMatrix3fv)getProcAddress("glUniformMatrix3fv");
    glUniformMatrix3x2dv = (proc_glUniformMatrix3x2dv)getProcAddress("glUniformMatrix3x2dv");
    glUniformMatrix3x2fv = (proc_glUniformMatrix3x2fv)getProcAddress("glUniformMatrix3x2fv");
    glUniformMatrix3x4dv = (proc_glUniformMatrix3x4dv)getProcAddress("glUniformMatrix3x4dv");
    glUniformMatrix3x4fv = (proc_glUniformMatrix3x4fv)getProcAddress("glUniformMatrix3x4fv");
    glUniformMatrix4dv = (proc_glUniformMatrix4dv)getProcAddress("glUniformMatrix4dv");
    glUniformMatrix4fv = (proc_glUniformMatrix4fv)getProcAddress("glUniformMatrix4fv");
    glUniformMatrix4x2dv = (proc_glUniformMatrix4x2dv)getProcAddress("glUniformMatrix4x2dv");
    glUniformMatrix4x2fv = (proc_glUniformMatrix4x2fv)getProcAddress("glUniformMatrix4x2fv");
    glUniformMatrix4x3dv = (proc_glUniformMatrix4x3dv)getProcAddress("glUniformMatrix4x3dv");
    glUniformMatrix4x3fv = (proc_glUniformMatrix4x3fv)getProcAddress("glUniformMatrix4x3fv");
    glUniformSubroutinesuiv = (proc_glUniformSubroutinesuiv)getProcAddress("glUniformSubroutinesuiv");
    glUnmapBuffer = (proc_glUnmapBuffer)getProcAddress("glUnmapBuffer");
    glUseProgram = (proc_glUseProgram)getProcAddress("glUseProgram");
    glUseProgramStages = (proc_glUseProgramStages)getProcAddress("glUseProgramStages");
    glValidateProgram = (proc_glValidateProgram)getProcAddress("glValidateProgram");
    glValidateProgramPipeline = (proc_glValidateProgramPipeline)getProcAddress("glValidateProgramPipeline");
    glVertexAttrib1d = (proc_glVertexAttrib1d)getProcAddress("glVertexAttrib1d");
    glVertexAttrib1dv = (proc_glVertexAttrib1dv)getProcAddress("glVertexAttrib1dv");
    glVertexAttrib1f = (proc_glVertexAttrib1f)getProcAddress("glVertexAttrib1f");
    glVertexAttrib1fv = (proc_glVertexAttrib1fv)getProcAddress("glVertexAttrib1fv");
    glVertexAttrib1s = (proc_glVertexAttrib1s)getProcAddress("glVertexAttrib1s");
    glVertexAttrib1sv = (proc_glVertexAttrib1sv)getProcAddress("glVertexAttrib1sv");
    glVertexAttrib2d = (proc_glVertexAttrib2d)getProcAddress("glVertexAttrib2d");
    glVertexAttrib2dv = (proc_glVertexAttrib2dv)getProcAddress("glVertexAttrib2dv");
    glVertexAttrib2f = (proc_glVertexAttrib2f)getProcAddress("glVertexAttrib2f");
    glVertexAttrib2fv = (proc_glVertexAttrib2fv)getProcAddress("glVertexAttrib2fv");
    glVertexAttrib2s = (proc_glVertexAttrib2s)getProcAddress("glVertexAttrib2s");
    glVertexAttrib2sv = (proc_glVertexAttrib2sv)getProcAddress("glVertexAttrib2sv");
    glVertexAttrib3d = (proc_glVertexAttrib3d)getProcAddress("glVertexAttrib3d");
    glVertexAttrib3dv = (proc_glVertexAttrib3dv)getProcAddress("glVertexAttrib3dv");
    glVertexAttrib3f = (proc_glVertexAttrib3f)getProcAddress("glVertexAttrib3f");
    glVertexAttrib3fv = (proc_glVertexAttrib3fv)getProcAddress("glVertexAttrib3fv");
    glVertexAttrib3s = (proc_glVertexAttrib3s)getProcAddress("glVertexAttrib3s");
    glVertexAttrib3sv = (proc_glVertexAttrib3sv)getProcAddress("glVertexAttrib3sv");
    glVertexAttrib4Nbv = (proc_glVertexAttrib4Nbv)getProcAddress("glVertexAttrib4Nbv");
    glVertexAttrib4Niv = (proc_glVertexAttrib4Niv)getProcAddress("glVertexAttrib4Niv");
    glVertexAttrib4Nsv = (proc_glVertexAttrib4Nsv)getProcAddress("glVertexAttrib4Nsv");
    glVertexAttrib4Nub = (proc_glVertexAttrib4Nub)getProcAddress("glVertexAttrib4Nub");
    glVertexAttrib4Nubv = (proc_glVertexAttrib4Nubv)getProcAddress("glVertexAttrib4Nubv");
    glVertexAttrib4Nuiv = (proc_glVertexAttrib4Nuiv)getProcAddress("glVertexAttrib4Nuiv");
    glVertexAttrib4Nusv = (proc_glVertexAttrib4Nusv)getProcAddress("glVertexAttrib4Nusv");
    glVertexAttrib4bv = (proc_glVertexAttrib4bv)getProcAddress("glVertexAttrib4bv");
    glVertexAttrib4d = (proc_glVertexAttrib4d)getProcAddress("glVertexAttrib4d");
    glVertexAttrib4dv = (proc_glVertexAttrib4dv)getProcAddress("glVertexAttrib4dv");
    glVertexAttrib4f = (proc_glVertexAttrib4f)getProcAddress("glVertexAttrib4f");
    glVertexAttrib4fv = (proc_glVertexAttrib4fv)getProcAddress("glVertexAttrib4fv");
    glVertexAttrib4iv = (proc_glVertexAttrib4iv)getProcAddress("glVertexAttrib4iv");
    glVertexAttrib4s = (proc_glVertexAttrib4s)getProcAddress("glVertexAttrib4s");
    glVertexAttrib4sv = (proc_glVertexAttrib4sv)getProcAddress("glVertexAttrib4sv");
    glVertexAttrib4ubv = (proc_glVertexAttrib4ubv)getProcAddress("glVertexAttrib4ubv");
    glVertexAttrib4uiv = (proc_glVertexAttrib4uiv)getProcAddress("glVertexAttrib4uiv");
    glVertexAttrib4usv = (proc_glVertexAttrib4usv)getProcAddress("glVertexAttrib4usv");
    glVertexAttribBinding = (proc_glVertexAttribBinding)getProcAddress("glVertexAttribBinding");
    glVertexAttribDivisor = (proc_glVertexAttribDivisor)getProcAddress("glVertexAttribDivisor");
    glVertexAttribFormat = (proc_glVertexAttribFormat)getProcAddress("glVertexAttribFormat");
    glVertexAttribI1i = (proc_glVertexAttribI1i)getProcAddress("glVertexAttribI1i");
    glVertexAttribI1iv = (proc_glVertexAttribI1iv)getProcAddress("glVertexAttribI1iv");
    glVertexAttribI1ui = (proc_glVertexAttribI1ui)getProcAddress("glVertexAttribI1ui");
    glVertexAttribI1uiv = (proc_glVertexAttribI1uiv)getProcAddress("glVertexAttribI1uiv");
    glVertexAttribI2i = (proc_glVertexAttribI2i)getProcAddress("glVertexAttribI2i");
    glVertexAttribI2iv = (proc_glVertexAttribI2iv)getProcAddress("glVertexAttribI2iv");
    glVertexAttribI2ui = (proc_glVertexAttribI2ui)getProcAddress("glVertexAttribI2ui");
    glVertexAttribI2uiv = (proc_glVertexAttribI2uiv)getProcAddress("glVertexAttribI2uiv");
    glVertexAttribI3i = (proc_glVertexAttribI3i)getProcAddress("glVertexAttribI3i");
    glVertexAttribI3iv = (proc_glVertexAttribI3iv)getProcAddress("glVertexAttribI3iv");
    glVertexAttribI3ui = (proc_glVertexAttribI3ui)getProcAddress("glVertexAttribI3ui");
    glVertexAttribI3uiv = (proc_glVertexAttribI3uiv)getProcAddress("glVertexAttribI3uiv");
    glVertexAttribI4bv = (proc_glVertexAttribI4bv)getProcAddress("glVertexAttribI4bv");
    glVertexAttribI4i = (proc_glVertexAttribI4i)getProcAddress("glVertexAttribI4i");
    glVertexAttribI4iv = (proc_glVertexAttribI4iv)getProcAddress("glVertexAttribI4iv");
    glVertexAttribI4sv = (proc_glVertexAttribI4sv)getProcAddress("glVertexAttribI4sv");
    glVertexAttribI4ubv = (proc_glVertexAttribI4ubv)getProcAddress("glVertexAttribI4ubv");
    glVertexAttribI4ui = (proc_glVertexAttribI4ui)getProcAddress("glVertexAttribI4ui");
    glVertexAttribI4uiv = (proc_glVertexAttribI4uiv)getProcAddress("glVertexAttribI4uiv");
    glVertexAttribI4usv = (proc_glVertexAttribI4usv)getProcAddress("glVertexAttribI4usv");
    glVertexAttribIFormat = (proc_glVertexAttribIFormat)getProcAddress("glVertexAttribIFormat");
    glVertexAttribIPointer = (proc_glVertexAttribIPointer)getProcAddress("glVertexAttribIPointer");
    glVertexAttribL1d = (proc_glVertexAttribL1d)getProcAddress("glVertexAttribL1d");
    glVertexAttribL1dv = (proc_glVertexAttribL1dv)getProcAddress("glVertexAttribL1dv");
    glVertexAttribL2d = (proc_glVertexAttribL2d)getProcAddress("glVertexAttribL2d");
    glVertexAttribL2dv = (proc_glVertexAttribL2dv)getProcAddress("glVertexAttribL2dv");
    glVertexAttribL3d = (proc_glVertexAttribL3d)getProcAddress("glVertexAttribL3d");
    glVertexAttribL3dv = (proc_glVertexAttribL3dv)getProcAddress("glVertexAttribL3dv");
    glVertexAttribL4d = (proc_glVertexAttribL4d)getProcAddress("glVertexAttribL4d");
    glVertexAttribL4dv = (proc_glVertexAttribL4dv)getProcAddress("glVertexAttribL4dv");
    glVertexAttribLFormat = (proc_glVertexAttribLFormat)getProcAddress("glVertexAttribLFormat");
    glVertexAttribLPointer = (proc_glVertexAttribLPointer)getProcAddress("glVertexAttribLPointer");
    glVertexAttribP1ui = (proc_glVertexAttribP1ui)getProcAddress("glVertexAttribP1ui");
    glVertexAttribP1uiv = (proc_glVertexAttribP1uiv)getProcAddress("glVertexAttribP1uiv");
    glVertexAttribP2ui = (proc_glVertexAttribP2ui)getProcAddress("glVertexAttribP2ui");
    glVertexAttribP2uiv = (proc_glVertexAttribP2uiv)getProcAddress("glVertexAttribP2uiv");
    glVertexAttribP3ui = (proc_glVertexAttribP3ui)getProcAddress("glVertexAttribP3ui");
    glVertexAttribP3uiv = (proc_glVertexAttribP3uiv)getProcAddress("glVertexAttribP3uiv");
    glVertexAttribP4ui = (proc_glVertexAttribP4ui)getProcAddress("glVertexAttribP4ui");
    glVertexAttribP4uiv = (proc_glVertexAttribP4uiv)getProcAddress("glVertexAttribP4uiv");
    glVertexAttribPointer = (proc_glVertexAttribPointer)getProcAddress("glVertexAttribPointer");
    glVertexBindingDivisor = (proc_glVertexBindingDivisor)getProcAddress("glVertexBindingDivisor");
    glViewport = (proc_glViewport)getProcAddress("glViewport");
    glViewportArrayv = (proc_glViewportArrayv)getProcAddress("glViewportArrayv");
    glViewportIndexedf = (proc_glViewportIndexedf)getProcAddress("glViewportIndexedf");
    glViewportIndexedfv = (proc_glViewportIndexedfv)getProcAddress("glViewportIndexedfv");
    glWaitSync = (proc_glWaitSync)getProcAddress("glWaitSync");
}
static string make_string(char* c_str) {
    string str = (string) {c_str, strlen(c_str)}/*not constant*/;
    return str;
}
static uint64 parse_int(string str) {
    uint64 res = 0/*constant*/;
    uint64 place = 1/*constant*/;
    for (int32 i = 0; i < str.length; i++) {
        uint8 c = (uint8)str.chars[i]/*not constant*/;
        uint8 p = (c % 10)/*not constant*/;
        res += (p * place);
        place *= 10;
    }
    return res;
}
static string to_string(uint64 num) {
    if (num == 0) return (string){"0", 1};
    uint32 i = 20/*constant*/;
    while (num != 0) {
        uint8 r = (uint8)(num % 10)/*not constant*/;
        num /= 10;
        num_str[--i] = ('0' + (char)r);
    }
    return (string){&num_str[i], (20 - i)};
}
static int32 string_equals(string a, string b) {
    if (a.length != b.length) return 0;
    for (int32 i = 0; i < a.length; i++) if (a.chars[i] != b.chars[i]) return 0;
    return 1;
}
static int32 is_whitespace(char c) {
    return ((c == ' ') || (c == *"\n"));
}
static int32 is_upper_case_letter(char c) {
    return ((c >= 'A') && (c <= 'Z'));
}
static int32 is_lower_case_letter(char c) {
    return ((c >= 'a') && (c <= 'z'));
}
static int32 is_letter(char c) {
    return (is_lower_case_letter(c) || is_upper_case_letter(c));
}
static int32 is_digit(char c) {
    return ((c >= '0') && (c <= '9'));
}
static int32 is_hexdigit(char c) {
    return ((is_digit(c) || ((c >= 'a') && (c <= 'f'))) || ((c >= 'A') && (c <= 'F')));
}
static int32 is_alphanumeric(char c) {
    return (is_letter(c) || is_digit(c));
}
static int32 is_punctuation(char c) {
    return (((((c >= '!') && (c <= '/')) || ((c >= ':') && (c <= '@'))) || ((c >= '[') && (c <= '`'))) || ((c >= '{') && (c <= '~')));
}
static StringBuilder sb_create() {
    StringBuilder sb;
    sb.length = 0;
    sb.capacity = 16;
    sb.content = malloc(sb.capacity);
    sb.content[0] = (char)0;
    return sb;
}
static void sb_free(StringBuilder sb) {
    free(sb.content);
}
static void sb_grow(StringBuilder* sb, uint32 len) {
    len += sb->length;
    if (sb->capacity <= len) {
        sb->capacity *= 2;
        while (sb->capacity <= len) sb->capacity *= 2;
        sb->content = realloc(sb->content, sb->capacity);
    }
}
static void sb_append1(StringBuilder* sb, string str) {
    sb_grow(sb, str.length);
    for (int32 i = 0; i < str.length; i++) sb->content[sb->length++] = str.chars[i];
    sb->content[sb->length] = (char)0;
}
static void sb_append2(StringBuilder* sb, char* str) {
    uint32 len = (uint32)strlen(str)/*not constant*/;
    sb_grow(sb, len);
    while (*str) sb->content[sb->length++] = *(str++);
    sb->content[sb->length] = (char)0;
}
static void sb_append3(StringBuilder* sb, char c) {
    sb_grow(sb, 1);
    sb->content[sb->length++] = c;
    sb->content[sb->length] = (char)0;
}
static void sb_insert(StringBuilder* sb, int32 loc, string str) {
    sb_grow(sb, str.length);
    int32 i = (int32)sb->length/*not constant*/;
    while (i >= loc) {
        sb->content[(i + str.length)] = sb->content[i];
        i--;
    }
    sb->length += str.length;
    for (int32 n = 0; n < str.length; n++) {
        sb->content[(loc + n)] = str.chars[n];
    }
}
static void sb_remove(StringBuilder* sb, int32 loc, uint32 num_chars) {
    int32 i = loc/*not constant*/;
    while (i <= sb->length) {
        sb->content[i] = sb->content[(i + num_chars)];
        i++;
    }
    sb->length -= num_chars;
}
static void sb_clear(StringBuilder* sb) {
    sb->length = 0;
}
static int32 key1(char c) {
    return glfwGetKey(main_window, (int32)c);
}
static int32 key2(int32 c) {
    return glfwGetKey(main_window, c);
}
static int32 mouse(int32 btn) {
    return glfwGetMouseButton(main_window, btn);
}
static int32 grax_loop() {
    dispatch_immediate();
    glfwSwapBuffers(main_window);
    glfwPollEvents();
    if (glfwWindowShouldClose(main_window)) {
        glfwDestroyWindow(main_window);
        glfwTerminate();
        return 0;
    }
    glClear(16384);
    return 1;
}
static void on_resize(GLFWwindow* main_window, int32 w, int32 h) {
    printf("%s%d%s%d%s", "resize: ", w, ", ", h, "\n");
    float32 aspect = ((float32)h / (float32)w)/*not constant*/;
    GLint aspect_loc = glGetUniformLocation(immediate_shader.gl_handle, "aspect")/*not constant*/;
    glUniform1f(aspect_loc, aspect);
    glViewport(0, 0, w, h);
}
static void grax_init() {
    if (!glfwInit()) {
        printf("%s", "ERROR: failed to initilize glfw.\n");
        return;
    }
    main_window = glfwCreateWindow(1600, 900, "Grax", 0, 0);
    if (!main_window) {
        glfwTerminate();
        printf("%s", "ERROR: failed to initilize main_window.\n");
        return;
    }
    glfwMakeContextCurrent(main_window);
    glfwSetFramebufferSizeCallback(main_window, on_resize);
    load_opengl(glfwGetProcAddress);
    glEnable(37600);
    glEnable(33346);
    glDebugMessageCallback(opengl_debug_callback, 0);
    glEnable(3042);
    glBlendEquation(32774);
    glBlendFunc(770, 771);
    glClearColor(0.100000, 0.100000, 0.100000, 1.000000);
    {
        immediate_vertices = list_create((uint32)(sizeof(vertex)));
        immediate_indices = list_create((uint32)(sizeof(uint32)));
        immediate_buffer = create_draw_buffers();
    }
    {
        char* fragsrc = fileread1("../grax/shaders/frag.glsl")/*not constant*/;
        char* vertsrc = fileread1("../grax/shaders/vert.glsl")/*not constant*/;
        immediate_shader = create_shader(fragsrc, vertsrc);
        free(fragsrc);
        free(vertsrc);
    }
    Image image = load_bitmap("../grax/CascadiaMono.bmp")/*not constant*/;
    text_atlas = create_texture2D(image);
    free(image.pixels);
}
static void opengl_debug_callback(GLenum source, GLenum _type, GLuint id, GLenum severity, GLsizei length, GLchar* message, void* userParam) {
    switch (_type) {
        case 33356:
        printf("%s", "ERROR: ");
        break;
        case 33357:
        printf("%s", "DEPRECATED BEHAVIOR: ");
        break;
        case 33358:
        printf("%s", "UDEFINED BEHAVIOR: ");
        break;
        case 33359:
        printf("%s", "PORTABILITY: ");
        break;
        case 33360:
        printf("%s", "PERFORMANCE: ");
        break;
        case 33361:
        return;
        case 33384:
        printf("%s", "MARKER: ");
        break;
    }
    printf("%s%s", message, "\n");
}
static uint32 makeshader(uint32 program, GLenum _type, char* code) {
    uint32 s = glCreateShader(_type)/*not constant*/;
    glShaderSource(s, 1, &code, 0);
    glAttachShader(program, s);
    return s;
}
static Shader create_shader(char* fragsrc, char* vertsrc) {
    uint32 program = glCreateProgram()/*not constant*/;
    uint32 f = makeshader(program, 35632, fragsrc)/*not constant*/;
    uint32 v = makeshader(program, 35633, vertsrc)/*not constant*/;
    glLinkProgram(program);
    glDetachShader(program, f);
    glDeleteShader(f);
    glDetachShader(program, v);
    glDeleteShader(v);
    int32 status;
    glGetProgramiv(program, 35714, &status);
    if (status == 0) {
        GLsizei size = 1024/*constant*/;
        char buffer[size];
        glGetProgramInfoLog(program, size, &size, buffer);
        printf("%s", (char*)buffer);
    }
    Shader s;
    s.gl_handle = program;
    return s;
}
static Color rgba(uint32 i) {
    Color c;
    uint8* b = (uint8*)&i/*not constant*/;
    c.r = b[3];
    c.g = b[2];
    c.b = b[1];
    c.a = b[0];
    return c;
}
static Texture2D create_texture2D(Image image) {
    Texture2D tex;
    tex.width = image.width;
    tex.height = image.height;
    glGenTextures(1, &tex.gl_handle);
    glBindTexture(3553, tex.gl_handle);
    glTexParameteri(3553, 10242, 10497);
    glTexParameteri(3553, 10243, 10497);
    /* local constant */
    glTexParameteri(3553, 10241, 9729);
    glTexParameteri(3553, 10240, 9729);
    glTexImage2D(3553, 0, 32856, image.width, image.height, 0, 6408, 5121, image.pixels);
    glGenerateMipmap(3553);
    glBindTexture(3553, 0);
    return tex;
}
static void bind(Texture2D tex) {
    glBindTexture(3553, tex.gl_handle);
}
static void set_filter(Texture2D tex, uint32 filter) {
    bind(tex);
    glTexParameteri(3553, 10241, filter);
    glTexParameteri(3553, 10240, filter);
    glBindTexture(3553, 0);
}
static DrawBuffers create_draw_buffers() {
    DrawBuffers db;
    db.elements_count = 0;
    glGenVertexArrays(1, &db.vao);
    glBindVertexArray(db.vao);
    glGenBuffers(1, &db.vbo);
    glBindBuffer(34962, db.vbo);
    glGenBuffers(1, &db.ebo);
    glBindBuffer(34963, db.ebo);
    vertex* v = 0/*constant*/;
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, 5126, 0, sizeof(vertex), &v->x);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 2, 5126, 0, sizeof(vertex), &v->u);
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2, 4, 5121, 1, sizeof(vertex), &v->color);
    glBindVertexArray(0);
    glBindBuffer(34962, 0);
    return db;
}
static void update_buffers(DrawBuffers* db, vertex* vertices, uint32 vertices_count, uint32* indices, uint32 indices_count) {
    db->elements_count = (int32)indices_count;
    update_buffer(db->vbo, (vertices_count * (uint32)(sizeof(vertex))), vertices);
    update_buffer(db->ebo, (indices_count * (uint32)(sizeof(uint32))), indices);
}
static void update_buffer(uint32 buffer, uint32 size, void* data) {
    glBindBuffer(34962, buffer);
    glBufferData(34962, size, data, 35044);
    glBindBuffer(34962, 0);
}
static void draw_elements1(DrawBuffers db) {
    glBindVertexArray(db.vao);
    glDrawElements(4, db.elements_count, 5125, 0);
    glBindVertexArray(0);
}
static void draw_elements2(DrawBuffers db, uint32 instanceCount) {
    glBindVertexArray(db.vao);
    glDrawElementsInstanced(4, db.elements_count, 5125, 0, instanceCount);
    glBindVertexArray(0);
}
static void* list_create(uint32 stride) {
    List* head = malloc((sizeof(List) + (stride * 2)))/*not constant*/;
    head->stride = stride;
    head->capacity = 2;
    head->length = 0;
    return &head[1];
}
static List* list_head(void* list) {
    return &((List*)list)[-1];
}
static void list_clear(void* list) {
    list_head(list)->length = 0;
}
static void list_add(void** list, void* data) {
    List* head = list_head(*list)/*not constant*/;
    if (head->capacity == head->length) {
        head->capacity *= 2;
        head = realloc(head, (sizeof(List) + (head->capacity * head->stride)));
        *list = &head[1];
    }
    uint64 dst = (uint64)*list/*not constant*/;
    dst += (head->length * head->stride);
    memcpy((void*)dst, data, head->stride);
    head->length++;
}
static uint32 list_length(void* list) {
    return list_head(list)->length;
}
static void dispatch_immediate() {
    uint32 vert_count = list_length(immediate_vertices)/*not constant*/;
    uint32 ind_count = list_length(immediate_indices)/*not constant*/;
    if (vert_count != 0) {
        update_buffers(&immediate_buffer, immediate_vertices, vert_count, immediate_indices, ind_count);
        bind(text_atlas);
        glUseProgram(immediate_shader.gl_handle);
        draw_elements1(immediate_buffer);
    }
    list_clear(immediate_vertices);
    list_clear(immediate_indices);
}
static void immediate_vertex1(float32 x, float32 y, float32 u, float32 v) {
    immediate_vertex2(x, y, u, v, (Color){255, 255, 255, 255});
}
static void immediate_vertex2(float32 x, float32 y, float32 u, float32 v, Color color) {
    vertex vert;
    vert.x = x;
    vert.y = y;
    vert.u = u;
    vert.v = v;
    vert.color = color;
    list_add(&immediate_vertices, &vert);
}
static void immediate_triangle(uint32 i1, uint32 i2, uint32 i3) {
    uint32 base = list_length(immediate_vertices)/*not constant*/;
    i1 += base;
    i2 += base;
    i3 += base;
    list_add(&immediate_indices, &i1);
    list_add(&immediate_indices, &i2);
    list_add(&immediate_indices, &i3);
}
static void draw_rect(vec2 pos, vec2 size) {
    float32 sx = (size.x * 0.500000)/*not constant*/;
    float32 sy = (size.y * 0.500000)/*not constant*/;
    immediate_triangle(0, 1, 2);
    immediate_triangle(1, 3, 2);
    immediate_vertex1((pos.x + -sx), (pos.y + -sy), 0, 0);
    immediate_vertex1((pos.x + sx), (pos.y + -sy), 1, 0);
    immediate_vertex1((pos.x + -sx), (pos.y + sy), 0, 1);
    immediate_vertex1((pos.x + sx), (pos.y + sy), 1, 1);
}
static void draw_image(Texture2D* image) {
}
static void draw_char(vec2 pos, float32 size, char c, Color color) {
    /* local constant */
    /* local constant */
    uint32 b = ((uint8)c - ' ')/*not constant*/;
    float32 col = (b % 14)/*not constant*/;
    float32 row = ((b / 14) + 1)/*not constant*/;
    float32 u = (col / 14.000000)/*not constant*/;
    float32 v = (row / 7.000000)/*not constant*/;
    v = (1 - v);
    float32 sx = ((size * 0.500000) * 0.500000)/*not constant*/;
    float32 sy = (size * 0.500000)/*not constant*/;
    immediate_triangle(0, 1, 2);
    immediate_triangle(1, 3, 2);
    immediate_vertex2((pos.x + -sx), (pos.y + -sy), u, v, color);
    immediate_vertex2((pos.x + sx), (pos.y + -sy), (u + (1.000000 / 14.000000)), v, color);
    immediate_vertex2((pos.x + -sx), (pos.y + sy), u, (v + (1.000000 / 7.000000)), color);
    immediate_vertex2((pos.x + sx), (pos.y + sy), (u + (1.000000 / 14.000000)), (v + (1.000000 / 7.000000)), color);
}
static vec2 draw_text1(vec2 pos, float32 size, string text, Color color) {
    float32 start = pos.x/*not constant*/;
    for (int32 i = 0; i < text.length; i++) {
        char c = text.chars[i]/*not constant*/;
        if (c == *"\n") {
            pos.x = start;
            pos.y -= size;
            continue;
        }
        if (c != ' ') draw_char(pos, size, c, color);
        pos.x += (size * 0.500000);
    }
    return pos;
}
static vec2 draw_text_backwards(vec2 pos, float32 size, string text, Color color) {
    int32 i = ((int32)text.length - 1)/*not constant*/;
    while (i >= 0) {
        char c = text.chars[i--]/*not constant*/;
        if (c != ' ') draw_char(pos, size, c, color);
        pos.x -= (size * 0.500000);
    }
    return pos;
}
static vec2 draw_text2(vec2 pos, float32 size, char* text) {
    float32 start = pos.x/*not constant*/;
    while (*text) {
        switch (*text) {
            case '\n':
            pos.x = start;
            pos.y -= size;
            break;
            default:
            draw_char(pos, size, *text, (Color){255, 255, 255, 255});
            case ' ':
            pos.x += (size * 0.500000);
            break;
        }
        text++;
    }
    return pos;
}
static float32 random(int32 seed) {
    seed = ((seed << 13) ^ seed);
    return (1.000000 - ((((seed * (((seed * seed) * 15731) + 789221)) + 1376312589) & 2147483647) / 1073741824.000000));
}
static int32 clamp1(int32 t, int32 min, int32 max) {
    return (t < min) ? min : (t > max) ? max : t;
}
static float32 clamp2(float32 t, float32 min, float32 max) {
    return (t < min) ? min : (t > max) ? max : t;
}
static float32 lerp1(float32 t, float32 a, float32 b) {
    return (a + ((b - a) * t));
}
static int32 round2int(float32 x) {
    return (int32)(x + 0.500000);
}
static vec2 vec(float32 x, float32 y) {
    vec2 res;
    res.x = x;
    res.y = y;
    return res;
}
static vec2 sub(vec2 a, vec2 b) {
    return vec((a.x - b.x), (a.y - b.y));
}
static vec2 add(vec2 a, vec2 b) {
    return vec((a.x + b.x), (a.y + b.y));
}
static vec2 mul1(vec2 a, vec2 b) {
    return vec((a.x * b.x), (a.y * b.y));
}
static vec2 mul2(vec2 a, float32 s) {
    return vec((a.x * s), (a.y * s));
}
static vec2 neg(vec2 a) {
    return vec(-a.x, -a.y);
}
static float32 dot(vec2 a, vec2 b) {
    return ((a.x * b.x) + (a.y * b.y));
}
static float32 sqlength(vec2 a) {
    return dot(a, a);
}
static float32 length(vec2 a) {
    return sqrtf(dot(a, a));
}
static vec2 normalize(vec2 a) {
    return mul2(a, (1.000000 / length(a)));
}
static vec2 reflect(vec2 a, vec2 normal) {
    return add(a, mul2(normal, (dot(a, normal) * -2.000000)));
}
static vec2 lerp2(float32 t, vec2 a, vec2 b) {
    return add(a, mul2(sub(b, a), t));
}
static Image load_bitmap(char* filename) {
    typedef struct Header {
        uint16 magic_num;
        uint32 file_bytesize;
        uint16 reserved1;
        uint16 reserved2;
        uint32 data_offset;
    } Header;
    typedef struct InfoHeader {
        uint32 size;
        int32 width;
        int32 height;
        uint16 planes;
        uint16 bits_per_pixel;
        uint32 compression;
        uint32 image_size;
        int32 x_pixels_per_m;
        int32 y_pixels_per_m;
        uint32 colors_used;
        uint32 important_colors;
    } InfoHeader;
    printf("%s%llu%s", "Header size: ", sizeof(Header), "\n");
    printf("%s%llu%s", "InfoHeader size: ", sizeof(InfoHeader), "\n");
    Header* head = (Header*)fileread2(filename, "rb")/*not constant*/;
    InfoHeader* info = (InfoHeader*)((uint64)head + 14)/*not constant*/;
    uint32 data_offset = *((uint32*)((uint64)head + 10))/*not constant*/;
    void* data = (void*)((uint64)head + data_offset)/*not constant*/;
    Color* color_table = (Color*)((uint64)head + 54)/*not constant*/;
    printf("%s%u%s", "Data Offset: ", data_offset, "\n");
    printf("%c%c%s", (char)head->magic_num, (char)(head->magic_num >> 8), "\n");
    printf("%s%hu%s", "bits per pixel: ", info->bits_per_pixel, "\n");
    Image image;
    image.width = (uint32)info->width;
    image.height = (uint32)info->height;
    image.pixels = malloc(((image.width * image.height) * sizeof(Color)));
    switch (info->bits_per_pixel) {
        case 1:
        printf("%s%s%s", "ERROR: .bmp file \"", filename, "\" with 1 bits per pixel not implemented yet.\n");
        break;
        case 4:
        printf("%s%s%s", "ERROR: .bmp file \"", filename, "\" with 4 bits per pixel not implemented yet.\n");
        break;
        case 8:
        {
            uint8* bytes = data/*not constant*/;
            for (int32 i = 0; i < (info->width * info->height); i++) {
                image.pixels[i] = color_table[bytes[i]];
            }
        }
        break;
        case 16:
        printf("%s%s%s", "ERROR: .bmp file \"", filename, "\" with 16 bits per pixel not implemented yet.\n");
        break;
        case 24:
        {
            ColorRgb* colors = data/*not constant*/;
            for (int32 i = 0; i < (info->width * info->height); i++) {
                image.pixels[i].r = colors[i].r;
                image.pixels[i].g = colors[i].g;
                image.pixels[i].b = colors[i].b;
                image.pixels[i].a = 255;
            }
        }
        break;
        case 32:
        {
            Color* colors = data/*not constant*/;
            for (int32 i = 0; i < (info->width * info->height); i++) {
                image.pixels[i] = colors[i];
            }
        }
        break;
        default:
        break;
    }
    free(head);
    return image;
}
