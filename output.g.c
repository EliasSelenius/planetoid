/* Namespaces
item: 
item: gizmo
*/

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

// Opaque types
typedef struct __GLsync __GLsync;
typedef struct GLFWmonitor GLFWmonitor;
typedef struct GLFWwindow GLFWwindow;
typedef struct GLFWcursor GLFWcursor;

// Structs forward declarations
typedef struct Mesh Mesh;
typedef struct List List;
typedef struct Transform Transform;
typedef struct Entity Entity;
typedef struct Planet Planet;
typedef struct vec2 vec2;
typedef struct ivec2 ivec2;
typedef struct VoxelGrid VoxelGrid;
typedef struct Intersection Intersection;
typedef struct GLFWvidmode GLFWvidmode;
typedef struct GLFWgammaramp GLFWgammaramp;
typedef struct GLFWimage GLFWimage;
typedef struct GLFWgamepadstate GLFWgamepadstate;

// Enums

// Type aliases
typedef int64 GLintptr;
typedef int64 GLint64;
typedef uint64 GLuint64;
typedef int64 GLsizeiptr;
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
typedef struct Mesh {
    uint32 vao;
    uint32 vbo;
    uint32 ebo;
    int32 elementsCount;
} Mesh;
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
typedef struct Transform {
    vec2 pos;
    float32 rot;
    float32 scale;
} Transform;
typedef struct Intersection {
    vec2 surface_normal;
    float32 distance;
} Intersection;
typedef struct Planet {
    Mesh mesh;
    vec2 pos;
    float32 rot;
    float32 radius;
    float32 dist;
    float32 yearDuration;
    float32 orbitOffset;
} Planet;
typedef struct VoxelGrid {
    Transform transform;
    float32* data;
    uint32 res;
    Mesh mesh;
    uint32 numVerts;
    vec2* verts;
    uint32* inds;
} VoxelGrid;
typedef struct Entity {
    Transform transform;
    Mesh mesh;
    vec2 vel;
} Entity;

// Forward declarations
void _drawMesh1(uint32 vao, int32 elementsCount);
void _drawMesh2(Mesh mesh);
Mesh _createMesh1();
Mesh _createMesh2(vec2* verts, uint32 vertsCount, uint32* inds, uint32 indsCount);
void _updateMeshData(Mesh* mesh, vec2* verts, uint32 vertsCount, uint32* inds, uint32 indsCount);
void _loadGL();
void _opengl_debug_callback(GLenum source, GLenum _type, GLuint id, GLenum severity, GLsizei length, GLchar* message, void* userParam);
void _GLFWframebuffersizefunCallback(GLFWwindow* window, int32 w, int32 h);
uint32 _makeShader(uint32 program, uint32 _type, char* code);
uint32 _createShader();
int32 _key(char c);
int32 _mouse(int32 btn);
vec2 _getMouseWorldCoord();
void _mouse_scrollCallback(GLFWwindow* w, float64 x, float64 y);
int32 fopen_s(void** stream, char* filename, char* mode);
int32 fclose(void* stream);
int32 fseek(void* stream, int32 offset, int32 origin);
uint64 ftell(void* stream);
void rewind(void* stream);
uint64 fread(void* buffer, uint64 elementSize, uint64 elementCount, void* stream);
void* calloc(uint64 count, uint64 size);
void* malloc(uint64 size);
void free(void* block);
void* realloc(void* buffer, uint64 size);
void* memcpy(void* dst, void* src, uint64 size);
char* _fileread(char* filename);
void* _createList(uint32 stride);
List* _listHead(void* list);
void _listClear(void* list);
void _add1(void** list, void* data);
uint32 _length1(void* list);
void _applyCamera();
void _applyTransform(Transform t);
vec2 _rotate_vec(vec2 dir, float32 angle);
vec2 _right(Transform t);
vec2 _up(Transform t);
vec2 _local2world1(Transform t, vec2 p);
vec2 _local2world2(Transform t, float32 x, float32 y);
vec2 _world2local1(Transform t, vec2 p);
vec2 _world2local2(Transform t, float32 x, float32 y);
Entity* _appendEntity(Mesh mesh);
Mesh _genCircle(int32 res, float32 radius);
Planet _genPlanet(float32 radius, float32 dist, float32 year);
void _drawPlanet(Planet* planet);
void _updateEntity(Entity* entity);
void _load();
VoxelGrid _generatePlanet();
int32 main();
float64 sin(float64 t);
float32 sinf(float32 t);
float64 cos(float64 t);
float32 cosf(float32 t);
float64 sqrt(float64 x);
float32 sqrtf(float32 x);
float32 _random(int32 seed);
int32 _clamp1(int32 t, int32 min, int32 max);
float32 _clamp2(float32 t, float32 min, float32 max);
int32 _round2int(float32 x);
vec2 _vec(float32 x, float32 y);
vec2 _sub(vec2 a, vec2 b);
vec2 _add2(vec2 a, vec2 b);
vec2 _mul1(vec2 a, vec2 b);
vec2 _mul2(vec2 a, float32 s);
float32 _dot(vec2 a, vec2 b);
float32 _sqlength(vec2 a);
float32 _length2(vec2 a);
vec2 _normalize(vec2 a);
vec2 _reflect(vec2 a, vec2 normal);
void _addTri(uint32** inds, uint32 i1, uint32 i2, uint32 i3);
uint32 _getIndex(uint32 res, uint32 x, uint32 y);
VoxelGrid _createVoxelGrid(uint32 res);
void _updateGridMesh(VoxelGrid* grid);
vec2 _getLocalCoords(VoxelGrid* grid, float32 x, float32 y);
void _VoxelGrid_addCircle(VoxelGrid* grid, float32 radius, float32 x, float32 y);
void _VoxelGrid_removeCircle(VoxelGrid* grid, float32 radius, float32 x, float32 y);
vec2 _rot90deg(vec2 v);
int32 _point_intersects(vec2 point, VoxelGrid* grid, Intersection* out_intersection);
vec2 _calcCenterOfMass(VoxelGrid* grid);
void _load_opengl(void (*(*getProcAddress)(char*))());
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
void gizmo_initGizmos();

// Declarations
char* _shaderInfoLog = 0;
GLFWwindow* _window;
uint32 _shader;
Transform _camera;
int32 _entitiesLength = 0;
Entity* _entities;
Entity* _player;
Planet* _planets;
VoxelGrid _voxelGrid;
Mesh _voxelMesh_circle;
proc_glActiveShaderProgram _glActiveShaderProgram = 0;
proc_glActiveTexture _glActiveTexture = 0;
proc_glAttachShader _glAttachShader = 0;
proc_glBeginConditionalRender _glBeginConditionalRender = 0;
proc_glBeginQuery _glBeginQuery = 0;
proc_glBeginQueryIndexed _glBeginQueryIndexed = 0;
proc_glBeginTransformFeedback _glBeginTransformFeedback = 0;
proc_glBindAttribLocation _glBindAttribLocation = 0;
proc_glBindBuffer _glBindBuffer = 0;
proc_glBindBufferBase _glBindBufferBase = 0;
proc_glBindBufferRange _glBindBufferRange = 0;
proc_glBindFragDataLocation _glBindFragDataLocation = 0;
proc_glBindFragDataLocationIndexed _glBindFragDataLocationIndexed = 0;
proc_glBindFramebuffer _glBindFramebuffer = 0;
proc_glBindImageTexture _glBindImageTexture = 0;
proc_glBindProgramPipeline _glBindProgramPipeline = 0;
proc_glBindRenderbuffer _glBindRenderbuffer = 0;
proc_glBindSampler _glBindSampler = 0;
proc_glBindTexture _glBindTexture = 0;
proc_glBindTransformFeedback _glBindTransformFeedback = 0;
proc_glBindVertexArray _glBindVertexArray = 0;
proc_glBindVertexBuffer _glBindVertexBuffer = 0;
proc_glBlendColor _glBlendColor = 0;
proc_glBlendEquation _glBlendEquation = 0;
proc_glBlendEquationSeparate _glBlendEquationSeparate = 0;
proc_glBlendEquationSeparatei _glBlendEquationSeparatei = 0;
proc_glBlendEquationi _glBlendEquationi = 0;
proc_glBlendFunc _glBlendFunc = 0;
proc_glBlendFuncSeparate _glBlendFuncSeparate = 0;
proc_glBlendFuncSeparatei _glBlendFuncSeparatei = 0;
proc_glBlendFunci _glBlendFunci = 0;
proc_glBlitFramebuffer _glBlitFramebuffer = 0;
proc_glBufferData _glBufferData = 0;
proc_glBufferSubData _glBufferSubData = 0;
proc_glCheckFramebufferStatus _glCheckFramebufferStatus = 0;
proc_glClampColor _glClampColor = 0;
proc_glClear _glClear = 0;
proc_glClearBufferData _glClearBufferData = 0;
proc_glClearBufferSubData _glClearBufferSubData = 0;
proc_glClearBufferfi _glClearBufferfi = 0;
proc_glClearBufferfv _glClearBufferfv = 0;
proc_glClearBufferiv _glClearBufferiv = 0;
proc_glClearBufferuiv _glClearBufferuiv = 0;
proc_glClearColor _glClearColor = 0;
proc_glClearDepth _glClearDepth = 0;
proc_glClearDepthf _glClearDepthf = 0;
proc_glClearStencil _glClearStencil = 0;
proc_glClientWaitSync _glClientWaitSync = 0;
proc_glColorMask _glColorMask = 0;
proc_glColorMaski _glColorMaski = 0;
proc_glCompileShader _glCompileShader = 0;
proc_glCompressedTexImage1D _glCompressedTexImage1D = 0;
proc_glCompressedTexImage2D _glCompressedTexImage2D = 0;
proc_glCompressedTexImage3D _glCompressedTexImage3D = 0;
proc_glCompressedTexSubImage1D _glCompressedTexSubImage1D = 0;
proc_glCompressedTexSubImage2D _glCompressedTexSubImage2D = 0;
proc_glCompressedTexSubImage3D _glCompressedTexSubImage3D = 0;
proc_glCopyBufferSubData _glCopyBufferSubData = 0;
proc_glCopyImageSubData _glCopyImageSubData = 0;
proc_glCopyTexImage1D _glCopyTexImage1D = 0;
proc_glCopyTexImage2D _glCopyTexImage2D = 0;
proc_glCopyTexSubImage1D _glCopyTexSubImage1D = 0;
proc_glCopyTexSubImage2D _glCopyTexSubImage2D = 0;
proc_glCopyTexSubImage3D _glCopyTexSubImage3D = 0;
proc_glCreateProgram _glCreateProgram = 0;
proc_glCreateShader _glCreateShader = 0;
proc_glCreateShaderProgramv _glCreateShaderProgramv = 0;
proc_glCullFace _glCullFace = 0;
proc_glDebugMessageCallback _glDebugMessageCallback = 0;
proc_glDebugMessageControl _glDebugMessageControl = 0;
proc_glDebugMessageInsert _glDebugMessageInsert = 0;
proc_glDeleteBuffers _glDeleteBuffers = 0;
proc_glDeleteFramebuffers _glDeleteFramebuffers = 0;
proc_glDeleteProgram _glDeleteProgram = 0;
proc_glDeleteProgramPipelines _glDeleteProgramPipelines = 0;
proc_glDeleteQueries _glDeleteQueries = 0;
proc_glDeleteRenderbuffers _glDeleteRenderbuffers = 0;
proc_glDeleteSamplers _glDeleteSamplers = 0;
proc_glDeleteShader _glDeleteShader = 0;
proc_glDeleteSync _glDeleteSync = 0;
proc_glDeleteTextures _glDeleteTextures = 0;
proc_glDeleteTransformFeedbacks _glDeleteTransformFeedbacks = 0;
proc_glDeleteVertexArrays _glDeleteVertexArrays = 0;
proc_glDepthFunc _glDepthFunc = 0;
proc_glDepthMask _glDepthMask = 0;
proc_glDepthRange _glDepthRange = 0;
proc_glDepthRangeArrayv _glDepthRangeArrayv = 0;
proc_glDepthRangeIndexed _glDepthRangeIndexed = 0;
proc_glDepthRangef _glDepthRangef = 0;
proc_glDetachShader _glDetachShader = 0;
proc_glDisable _glDisable = 0;
proc_glDisableVertexAttribArray _glDisableVertexAttribArray = 0;
proc_glDisablei _glDisablei = 0;
proc_glDispatchCompute _glDispatchCompute = 0;
proc_glDispatchComputeIndirect _glDispatchComputeIndirect = 0;
proc_glDrawArrays _glDrawArrays = 0;
proc_glDrawArraysIndirect _glDrawArraysIndirect = 0;
proc_glDrawArraysInstanced _glDrawArraysInstanced = 0;
proc_glDrawArraysInstancedBaseInstance _glDrawArraysInstancedBaseInstance = 0;
proc_glDrawBuffer _glDrawBuffer = 0;
proc_glDrawBuffers _glDrawBuffers = 0;
proc_glDrawElements _glDrawElements = 0;
proc_glDrawElementsBaseVertex _glDrawElementsBaseVertex = 0;
proc_glDrawElementsIndirect _glDrawElementsIndirect = 0;
proc_glDrawElementsInstanced _glDrawElementsInstanced = 0;
proc_glDrawElementsInstancedBaseInstance _glDrawElementsInstancedBaseInstance = 0;
proc_glDrawElementsInstancedBaseVertex _glDrawElementsInstancedBaseVertex = 0;
proc_glDrawElementsInstancedBaseVertexBaseInstance _glDrawElementsInstancedBaseVertexBaseInstance = 0;
proc_glDrawRangeElements _glDrawRangeElements = 0;
proc_glDrawRangeElementsBaseVertex _glDrawRangeElementsBaseVertex = 0;
proc_glDrawTransformFeedback _glDrawTransformFeedback = 0;
proc_glDrawTransformFeedbackInstanced _glDrawTransformFeedbackInstanced = 0;
proc_glDrawTransformFeedbackStream _glDrawTransformFeedbackStream = 0;
proc_glDrawTransformFeedbackStreamInstanced _glDrawTransformFeedbackStreamInstanced = 0;
proc_glEnable _glEnable = 0;
proc_glEnableVertexAttribArray _glEnableVertexAttribArray = 0;
proc_glEnablei _glEnablei = 0;
proc_glEndConditionalRender _glEndConditionalRender = 0;
proc_glEndQuery _glEndQuery = 0;
proc_glEndQueryIndexed _glEndQueryIndexed = 0;
proc_glEndTransformFeedback _glEndTransformFeedback = 0;
proc_glFenceSync _glFenceSync = 0;
proc_glFinish _glFinish = 0;
proc_glFlush _glFlush = 0;
proc_glFlushMappedBufferRange _glFlushMappedBufferRange = 0;
proc_glFramebufferParameteri _glFramebufferParameteri = 0;
proc_glFramebufferRenderbuffer _glFramebufferRenderbuffer = 0;
proc_glFramebufferTexture _glFramebufferTexture = 0;
proc_glFramebufferTexture1D _glFramebufferTexture1D = 0;
proc_glFramebufferTexture2D _glFramebufferTexture2D = 0;
proc_glFramebufferTexture3D _glFramebufferTexture3D = 0;
proc_glFramebufferTextureLayer _glFramebufferTextureLayer = 0;
proc_glFrontFace _glFrontFace = 0;
proc_glGenBuffers _glGenBuffers = 0;
proc_glGenFramebuffers _glGenFramebuffers = 0;
proc_glGenProgramPipelines _glGenProgramPipelines = 0;
proc_glGenQueries _glGenQueries = 0;
proc_glGenRenderbuffers _glGenRenderbuffers = 0;
proc_glGenSamplers _glGenSamplers = 0;
proc_glGenTextures _glGenTextures = 0;
proc_glGenTransformFeedbacks _glGenTransformFeedbacks = 0;
proc_glGenVertexArrays _glGenVertexArrays = 0;
proc_glGenerateMipmap _glGenerateMipmap = 0;
proc_glGetActiveAtomicCounterBufferiv _glGetActiveAtomicCounterBufferiv = 0;
proc_glGetActiveAttrib _glGetActiveAttrib = 0;
proc_glGetActiveSubroutineName _glGetActiveSubroutineName = 0;
proc_glGetActiveSubroutineUniformName _glGetActiveSubroutineUniformName = 0;
proc_glGetActiveSubroutineUniformiv _glGetActiveSubroutineUniformiv = 0;
proc_glGetActiveUniform _glGetActiveUniform = 0;
proc_glGetActiveUniformBlockName _glGetActiveUniformBlockName = 0;
proc_glGetActiveUniformBlockiv _glGetActiveUniformBlockiv = 0;
proc_glGetActiveUniformName _glGetActiveUniformName = 0;
proc_glGetActiveUniformsiv _glGetActiveUniformsiv = 0;
proc_glGetAttachedShaders _glGetAttachedShaders = 0;
proc_glGetAttribLocation _glGetAttribLocation = 0;
proc_glGetBooleani_v _glGetBooleani_v = 0;
proc_glGetBooleanv _glGetBooleanv = 0;
proc_glGetBufferParameteri64v _glGetBufferParameteri64v = 0;
proc_glGetBufferParameteriv _glGetBufferParameteriv = 0;
proc_glGetBufferPointerv _glGetBufferPointerv = 0;
proc_glGetBufferSubData _glGetBufferSubData = 0;
proc_glGetCompressedTexImage _glGetCompressedTexImage = 0;
proc_glGetDebugMessageLog _glGetDebugMessageLog = 0;
proc_glGetDoublei_v _glGetDoublei_v = 0;
proc_glGetDoublev _glGetDoublev = 0;
proc_glGetError _glGetError = 0;
proc_glGetFloati_v _glGetFloati_v = 0;
proc_glGetFloatv _glGetFloatv = 0;
proc_glGetFragDataIndex _glGetFragDataIndex = 0;
proc_glGetFragDataLocation _glGetFragDataLocation = 0;
proc_glGetFramebufferAttachmentParameteriv _glGetFramebufferAttachmentParameteriv = 0;
proc_glGetFramebufferParameteriv _glGetFramebufferParameteriv = 0;
proc_glGetInteger64i_v _glGetInteger64i_v = 0;
proc_glGetInteger64v _glGetInteger64v = 0;
proc_glGetIntegeri_v _glGetIntegeri_v = 0;
proc_glGetIntegerv _glGetIntegerv = 0;
proc_glGetInternalformati64v _glGetInternalformati64v = 0;
proc_glGetInternalformativ _glGetInternalformativ = 0;
proc_glGetMultisamplefv _glGetMultisamplefv = 0;
proc_glGetObjectLabel _glGetObjectLabel = 0;
proc_glGetObjectPtrLabel _glGetObjectPtrLabel = 0;
proc_glGetPointerv _glGetPointerv = 0;
proc_glGetProgramBinary _glGetProgramBinary = 0;
proc_glGetProgramInfoLog _glGetProgramInfoLog = 0;
proc_glGetProgramInterfaceiv _glGetProgramInterfaceiv = 0;
proc_glGetProgramPipelineInfoLog _glGetProgramPipelineInfoLog = 0;
proc_glGetProgramPipelineiv _glGetProgramPipelineiv = 0;
proc_glGetProgramResourceIndex _glGetProgramResourceIndex = 0;
proc_glGetProgramResourceLocation _glGetProgramResourceLocation = 0;
proc_glGetProgramResourceLocationIndex _glGetProgramResourceLocationIndex = 0;
proc_glGetProgramResourceName _glGetProgramResourceName = 0;
proc_glGetProgramResourceiv _glGetProgramResourceiv = 0;
proc_glGetProgramStageiv _glGetProgramStageiv = 0;
proc_glGetProgramiv _glGetProgramiv = 0;
proc_glGetQueryIndexediv _glGetQueryIndexediv = 0;
proc_glGetQueryObjecti64v _glGetQueryObjecti64v = 0;
proc_glGetQueryObjectiv _glGetQueryObjectiv = 0;
proc_glGetQueryObjectui64v _glGetQueryObjectui64v = 0;
proc_glGetQueryObjectuiv _glGetQueryObjectuiv = 0;
proc_glGetQueryiv _glGetQueryiv = 0;
proc_glGetRenderbufferParameteriv _glGetRenderbufferParameteriv = 0;
proc_glGetSamplerParameterIiv _glGetSamplerParameterIiv = 0;
proc_glGetSamplerParameterIuiv _glGetSamplerParameterIuiv = 0;
proc_glGetSamplerParameterfv _glGetSamplerParameterfv = 0;
proc_glGetSamplerParameteriv _glGetSamplerParameteriv = 0;
proc_glGetShaderInfoLog _glGetShaderInfoLog = 0;
proc_glGetShaderPrecisionFormat _glGetShaderPrecisionFormat = 0;
proc_glGetShaderSource _glGetShaderSource = 0;
proc_glGetShaderiv _glGetShaderiv = 0;
proc_glGetString _glGetString = 0;
proc_glGetStringi _glGetStringi = 0;
proc_glGetSubroutineIndex _glGetSubroutineIndex = 0;
proc_glGetSubroutineUniformLocation _glGetSubroutineUniformLocation = 0;
proc_glGetSynciv _glGetSynciv = 0;
proc_glGetTexImage _glGetTexImage = 0;
proc_glGetTexLevelParameterfv _glGetTexLevelParameterfv = 0;
proc_glGetTexLevelParameteriv _glGetTexLevelParameteriv = 0;
proc_glGetTexParameterIiv _glGetTexParameterIiv = 0;
proc_glGetTexParameterIuiv _glGetTexParameterIuiv = 0;
proc_glGetTexParameterfv _glGetTexParameterfv = 0;
proc_glGetTexParameteriv _glGetTexParameteriv = 0;
proc_glGetTransformFeedbackVarying _glGetTransformFeedbackVarying = 0;
proc_glGetUniformBlockIndex _glGetUniformBlockIndex = 0;
proc_glGetUniformIndices _glGetUniformIndices = 0;
proc_glGetUniformLocation _glGetUniformLocation = 0;
proc_glGetUniformSubroutineuiv _glGetUniformSubroutineuiv = 0;
proc_glGetUniformdv _glGetUniformdv = 0;
proc_glGetUniformfv _glGetUniformfv = 0;
proc_glGetUniformiv _glGetUniformiv = 0;
proc_glGetUniformuiv _glGetUniformuiv = 0;
proc_glGetVertexAttribIiv _glGetVertexAttribIiv = 0;
proc_glGetVertexAttribIuiv _glGetVertexAttribIuiv = 0;
proc_glGetVertexAttribLdv _glGetVertexAttribLdv = 0;
proc_glGetVertexAttribPointerv _glGetVertexAttribPointerv = 0;
proc_glGetVertexAttribdv _glGetVertexAttribdv = 0;
proc_glGetVertexAttribfv _glGetVertexAttribfv = 0;
proc_glGetVertexAttribiv _glGetVertexAttribiv = 0;
proc_glHint _glHint = 0;
proc_glInvalidateBufferData _glInvalidateBufferData = 0;
proc_glInvalidateBufferSubData _glInvalidateBufferSubData = 0;
proc_glInvalidateFramebuffer _glInvalidateFramebuffer = 0;
proc_glInvalidateSubFramebuffer _glInvalidateSubFramebuffer = 0;
proc_glInvalidateTexImage _glInvalidateTexImage = 0;
proc_glInvalidateTexSubImage _glInvalidateTexSubImage = 0;
proc_glIsBuffer _glIsBuffer = 0;
proc_glIsEnabled _glIsEnabled = 0;
proc_glIsEnabledi _glIsEnabledi = 0;
proc_glIsFramebuffer _glIsFramebuffer = 0;
proc_glIsProgram _glIsProgram = 0;
proc_glIsProgramPipeline _glIsProgramPipeline = 0;
proc_glIsQuery _glIsQuery = 0;
proc_glIsRenderbuffer _glIsRenderbuffer = 0;
proc_glIsSampler _glIsSampler = 0;
proc_glIsShader _glIsShader = 0;
proc_glIsSync _glIsSync = 0;
proc_glIsTexture _glIsTexture = 0;
proc_glIsTransformFeedback _glIsTransformFeedback = 0;
proc_glIsVertexArray _glIsVertexArray = 0;
proc_glLineWidth _glLineWidth = 0;
proc_glLinkProgram _glLinkProgram = 0;
proc_glLogicOp _glLogicOp = 0;
proc_glMapBuffer _glMapBuffer = 0;
proc_glMapBufferRange _glMapBufferRange = 0;
proc_glMemoryBarrier _glMemoryBarrier = 0;
proc_glMinSampleShading _glMinSampleShading = 0;
proc_glMultiDrawArrays _glMultiDrawArrays = 0;
proc_glMultiDrawArraysIndirect _glMultiDrawArraysIndirect = 0;
proc_glMultiDrawElements _glMultiDrawElements = 0;
proc_glMultiDrawElementsBaseVertex _glMultiDrawElementsBaseVertex = 0;
proc_glMultiDrawElementsIndirect _glMultiDrawElementsIndirect = 0;
proc_glObjectLabel _glObjectLabel = 0;
proc_glObjectPtrLabel _glObjectPtrLabel = 0;
proc_glPatchParameterfv _glPatchParameterfv = 0;
proc_glPatchParameteri _glPatchParameteri = 0;
proc_glPauseTransformFeedback _glPauseTransformFeedback = 0;
proc_glPixelStoref _glPixelStoref = 0;
proc_glPixelStorei _glPixelStorei = 0;
proc_glPointParameterf _glPointParameterf = 0;
proc_glPointParameterfv _glPointParameterfv = 0;
proc_glPointParameteri _glPointParameteri = 0;
proc_glPointParameteriv _glPointParameteriv = 0;
proc_glPointSize _glPointSize = 0;
proc_glPolygonMode _glPolygonMode = 0;
proc_glPolygonOffset _glPolygonOffset = 0;
proc_glPopDebugGroup _glPopDebugGroup = 0;
proc_glPrimitiveRestartIndex _glPrimitiveRestartIndex = 0;
proc_glProgramBinary _glProgramBinary = 0;
proc_glProgramParameteri _glProgramParameteri = 0;
proc_glProgramUniform1d _glProgramUniform1d = 0;
proc_glProgramUniform1dv _glProgramUniform1dv = 0;
proc_glProgramUniform1f _glProgramUniform1f = 0;
proc_glProgramUniform1fv _glProgramUniform1fv = 0;
proc_glProgramUniform1i _glProgramUniform1i = 0;
proc_glProgramUniform1iv _glProgramUniform1iv = 0;
proc_glProgramUniform1ui _glProgramUniform1ui = 0;
proc_glProgramUniform1uiv _glProgramUniform1uiv = 0;
proc_glProgramUniform2d _glProgramUniform2d = 0;
proc_glProgramUniform2dv _glProgramUniform2dv = 0;
proc_glProgramUniform2f _glProgramUniform2f = 0;
proc_glProgramUniform2fv _glProgramUniform2fv = 0;
proc_glProgramUniform2i _glProgramUniform2i = 0;
proc_glProgramUniform2iv _glProgramUniform2iv = 0;
proc_glProgramUniform2ui _glProgramUniform2ui = 0;
proc_glProgramUniform2uiv _glProgramUniform2uiv = 0;
proc_glProgramUniform3d _glProgramUniform3d = 0;
proc_glProgramUniform3dv _glProgramUniform3dv = 0;
proc_glProgramUniform3f _glProgramUniform3f = 0;
proc_glProgramUniform3fv _glProgramUniform3fv = 0;
proc_glProgramUniform3i _glProgramUniform3i = 0;
proc_glProgramUniform3iv _glProgramUniform3iv = 0;
proc_glProgramUniform3ui _glProgramUniform3ui = 0;
proc_glProgramUniform3uiv _glProgramUniform3uiv = 0;
proc_glProgramUniform4d _glProgramUniform4d = 0;
proc_glProgramUniform4dv _glProgramUniform4dv = 0;
proc_glProgramUniform4f _glProgramUniform4f = 0;
proc_glProgramUniform4fv _glProgramUniform4fv = 0;
proc_glProgramUniform4i _glProgramUniform4i = 0;
proc_glProgramUniform4iv _glProgramUniform4iv = 0;
proc_glProgramUniform4ui _glProgramUniform4ui = 0;
proc_glProgramUniform4uiv _glProgramUniform4uiv = 0;
proc_glProgramUniformMatrix2dv _glProgramUniformMatrix2dv = 0;
proc_glProgramUniformMatrix2fv _glProgramUniformMatrix2fv = 0;
proc_glProgramUniformMatrix2x3dv _glProgramUniformMatrix2x3dv = 0;
proc_glProgramUniformMatrix2x3fv _glProgramUniformMatrix2x3fv = 0;
proc_glProgramUniformMatrix2x4dv _glProgramUniformMatrix2x4dv = 0;
proc_glProgramUniformMatrix2x4fv _glProgramUniformMatrix2x4fv = 0;
proc_glProgramUniformMatrix3dv _glProgramUniformMatrix3dv = 0;
proc_glProgramUniformMatrix3fv _glProgramUniformMatrix3fv = 0;
proc_glProgramUniformMatrix3x2dv _glProgramUniformMatrix3x2dv = 0;
proc_glProgramUniformMatrix3x2fv _glProgramUniformMatrix3x2fv = 0;
proc_glProgramUniformMatrix3x4dv _glProgramUniformMatrix3x4dv = 0;
proc_glProgramUniformMatrix3x4fv _glProgramUniformMatrix3x4fv = 0;
proc_glProgramUniformMatrix4dv _glProgramUniformMatrix4dv = 0;
proc_glProgramUniformMatrix4fv _glProgramUniformMatrix4fv = 0;
proc_glProgramUniformMatrix4x2dv _glProgramUniformMatrix4x2dv = 0;
proc_glProgramUniformMatrix4x2fv _glProgramUniformMatrix4x2fv = 0;
proc_glProgramUniformMatrix4x3dv _glProgramUniformMatrix4x3dv = 0;
proc_glProgramUniformMatrix4x3fv _glProgramUniformMatrix4x3fv = 0;
proc_glProvokingVertex _glProvokingVertex = 0;
proc_glPushDebugGroup _glPushDebugGroup = 0;
proc_glQueryCounter _glQueryCounter = 0;
proc_glReadBuffer _glReadBuffer = 0;
proc_glReadPixels _glReadPixels = 0;
proc_glReleaseShaderCompiler _glReleaseShaderCompiler = 0;
proc_glRenderbufferStorage _glRenderbufferStorage = 0;
proc_glRenderbufferStorageMultisample _glRenderbufferStorageMultisample = 0;
proc_glResumeTransformFeedback _glResumeTransformFeedback = 0;
proc_glSampleCoverage _glSampleCoverage = 0;
proc_glSampleMaski _glSampleMaski = 0;
proc_glSamplerParameterIiv _glSamplerParameterIiv = 0;
proc_glSamplerParameterIuiv _glSamplerParameterIuiv = 0;
proc_glSamplerParameterf _glSamplerParameterf = 0;
proc_glSamplerParameterfv _glSamplerParameterfv = 0;
proc_glSamplerParameteri _glSamplerParameteri = 0;
proc_glSamplerParameteriv _glSamplerParameteriv = 0;
proc_glScissor _glScissor = 0;
proc_glScissorArrayv _glScissorArrayv = 0;
proc_glScissorIndexed _glScissorIndexed = 0;
proc_glScissorIndexedv _glScissorIndexedv = 0;
proc_glShaderBinary _glShaderBinary = 0;
proc_glShaderSource _glShaderSource = 0;
proc_glShaderStorageBlockBinding _glShaderStorageBlockBinding = 0;
proc_glStencilFunc _glStencilFunc = 0;
proc_glStencilFuncSeparate _glStencilFuncSeparate = 0;
proc_glStencilMask _glStencilMask = 0;
proc_glStencilMaskSeparate _glStencilMaskSeparate = 0;
proc_glStencilOp _glStencilOp = 0;
proc_glStencilOpSeparate _glStencilOpSeparate = 0;
proc_glTexBuffer _glTexBuffer = 0;
proc_glTexBufferRange _glTexBufferRange = 0;
proc_glTexImage1D _glTexImage1D = 0;
proc_glTexImage2D _glTexImage2D = 0;
proc_glTexImage2DMultisample _glTexImage2DMultisample = 0;
proc_glTexImage3D _glTexImage3D = 0;
proc_glTexImage3DMultisample _glTexImage3DMultisample = 0;
proc_glTexParameterIiv _glTexParameterIiv = 0;
proc_glTexParameterIuiv _glTexParameterIuiv = 0;
proc_glTexParameterf _glTexParameterf = 0;
proc_glTexParameterfv _glTexParameterfv = 0;
proc_glTexParameteri _glTexParameteri = 0;
proc_glTexParameteriv _glTexParameteriv = 0;
proc_glTexStorage1D _glTexStorage1D = 0;
proc_glTexStorage2D _glTexStorage2D = 0;
proc_glTexStorage2DMultisample _glTexStorage2DMultisample = 0;
proc_glTexStorage3D _glTexStorage3D = 0;
proc_glTexStorage3DMultisample _glTexStorage3DMultisample = 0;
proc_glTexSubImage1D _glTexSubImage1D = 0;
proc_glTexSubImage2D _glTexSubImage2D = 0;
proc_glTexSubImage3D _glTexSubImage3D = 0;
proc_glTextureView _glTextureView = 0;
proc_glTransformFeedbackVaryings _glTransformFeedbackVaryings = 0;
proc_glUniform1d _glUniform1d = 0;
proc_glUniform1dv _glUniform1dv = 0;
proc_glUniform1f _glUniform1f = 0;
proc_glUniform1fv _glUniform1fv = 0;
proc_glUniform1i _glUniform1i = 0;
proc_glUniform1iv _glUniform1iv = 0;
proc_glUniform1ui _glUniform1ui = 0;
proc_glUniform1uiv _glUniform1uiv = 0;
proc_glUniform2d _glUniform2d = 0;
proc_glUniform2dv _glUniform2dv = 0;
proc_glUniform2f _glUniform2f = 0;
proc_glUniform2fv _glUniform2fv = 0;
proc_glUniform2i _glUniform2i = 0;
proc_glUniform2iv _glUniform2iv = 0;
proc_glUniform2ui _glUniform2ui = 0;
proc_glUniform2uiv _glUniform2uiv = 0;
proc_glUniform3d _glUniform3d = 0;
proc_glUniform3dv _glUniform3dv = 0;
proc_glUniform3f _glUniform3f = 0;
proc_glUniform3fv _glUniform3fv = 0;
proc_glUniform3i _glUniform3i = 0;
proc_glUniform3iv _glUniform3iv = 0;
proc_glUniform3ui _glUniform3ui = 0;
proc_glUniform3uiv _glUniform3uiv = 0;
proc_glUniform4d _glUniform4d = 0;
proc_glUniform4dv _glUniform4dv = 0;
proc_glUniform4f _glUniform4f = 0;
proc_glUniform4fv _glUniform4fv = 0;
proc_glUniform4i _glUniform4i = 0;
proc_glUniform4iv _glUniform4iv = 0;
proc_glUniform4ui _glUniform4ui = 0;
proc_glUniform4uiv _glUniform4uiv = 0;
proc_glUniformBlockBinding _glUniformBlockBinding = 0;
proc_glUniformMatrix2dv _glUniformMatrix2dv = 0;
proc_glUniformMatrix2fv _glUniformMatrix2fv = 0;
proc_glUniformMatrix2x3dv _glUniformMatrix2x3dv = 0;
proc_glUniformMatrix2x3fv _glUniformMatrix2x3fv = 0;
proc_glUniformMatrix2x4dv _glUniformMatrix2x4dv = 0;
proc_glUniformMatrix2x4fv _glUniformMatrix2x4fv = 0;
proc_glUniformMatrix3dv _glUniformMatrix3dv = 0;
proc_glUniformMatrix3fv _glUniformMatrix3fv = 0;
proc_glUniformMatrix3x2dv _glUniformMatrix3x2dv = 0;
proc_glUniformMatrix3x2fv _glUniformMatrix3x2fv = 0;
proc_glUniformMatrix3x4dv _glUniformMatrix3x4dv = 0;
proc_glUniformMatrix3x4fv _glUniformMatrix3x4fv = 0;
proc_glUniformMatrix4dv _glUniformMatrix4dv = 0;
proc_glUniformMatrix4fv _glUniformMatrix4fv = 0;
proc_glUniformMatrix4x2dv _glUniformMatrix4x2dv = 0;
proc_glUniformMatrix4x2fv _glUniformMatrix4x2fv = 0;
proc_glUniformMatrix4x3dv _glUniformMatrix4x3dv = 0;
proc_glUniformMatrix4x3fv _glUniformMatrix4x3fv = 0;
proc_glUniformSubroutinesuiv _glUniformSubroutinesuiv = 0;
proc_glUnmapBuffer _glUnmapBuffer = 0;
proc_glUseProgram _glUseProgram = 0;
proc_glUseProgramStages _glUseProgramStages = 0;
proc_glValidateProgram _glValidateProgram = 0;
proc_glValidateProgramPipeline _glValidateProgramPipeline = 0;
proc_glVertexAttrib1d _glVertexAttrib1d = 0;
proc_glVertexAttrib1dv _glVertexAttrib1dv = 0;
proc_glVertexAttrib1f _glVertexAttrib1f = 0;
proc_glVertexAttrib1fv _glVertexAttrib1fv = 0;
proc_glVertexAttrib1s _glVertexAttrib1s = 0;
proc_glVertexAttrib1sv _glVertexAttrib1sv = 0;
proc_glVertexAttrib2d _glVertexAttrib2d = 0;
proc_glVertexAttrib2dv _glVertexAttrib2dv = 0;
proc_glVertexAttrib2f _glVertexAttrib2f = 0;
proc_glVertexAttrib2fv _glVertexAttrib2fv = 0;
proc_glVertexAttrib2s _glVertexAttrib2s = 0;
proc_glVertexAttrib2sv _glVertexAttrib2sv = 0;
proc_glVertexAttrib3d _glVertexAttrib3d = 0;
proc_glVertexAttrib3dv _glVertexAttrib3dv = 0;
proc_glVertexAttrib3f _glVertexAttrib3f = 0;
proc_glVertexAttrib3fv _glVertexAttrib3fv = 0;
proc_glVertexAttrib3s _glVertexAttrib3s = 0;
proc_glVertexAttrib3sv _glVertexAttrib3sv = 0;
proc_glVertexAttrib4Nbv _glVertexAttrib4Nbv = 0;
proc_glVertexAttrib4Niv _glVertexAttrib4Niv = 0;
proc_glVertexAttrib4Nsv _glVertexAttrib4Nsv = 0;
proc_glVertexAttrib4Nub _glVertexAttrib4Nub = 0;
proc_glVertexAttrib4Nubv _glVertexAttrib4Nubv = 0;
proc_glVertexAttrib4Nuiv _glVertexAttrib4Nuiv = 0;
proc_glVertexAttrib4Nusv _glVertexAttrib4Nusv = 0;
proc_glVertexAttrib4bv _glVertexAttrib4bv = 0;
proc_glVertexAttrib4d _glVertexAttrib4d = 0;
proc_glVertexAttrib4dv _glVertexAttrib4dv = 0;
proc_glVertexAttrib4f _glVertexAttrib4f = 0;
proc_glVertexAttrib4fv _glVertexAttrib4fv = 0;
proc_glVertexAttrib4iv _glVertexAttrib4iv = 0;
proc_glVertexAttrib4s _glVertexAttrib4s = 0;
proc_glVertexAttrib4sv _glVertexAttrib4sv = 0;
proc_glVertexAttrib4ubv _glVertexAttrib4ubv = 0;
proc_glVertexAttrib4uiv _glVertexAttrib4uiv = 0;
proc_glVertexAttrib4usv _glVertexAttrib4usv = 0;
proc_glVertexAttribBinding _glVertexAttribBinding = 0;
proc_glVertexAttribDivisor _glVertexAttribDivisor = 0;
proc_glVertexAttribFormat _glVertexAttribFormat = 0;
proc_glVertexAttribI1i _glVertexAttribI1i = 0;
proc_glVertexAttribI1iv _glVertexAttribI1iv = 0;
proc_glVertexAttribI1ui _glVertexAttribI1ui = 0;
proc_glVertexAttribI1uiv _glVertexAttribI1uiv = 0;
proc_glVertexAttribI2i _glVertexAttribI2i = 0;
proc_glVertexAttribI2iv _glVertexAttribI2iv = 0;
proc_glVertexAttribI2ui _glVertexAttribI2ui = 0;
proc_glVertexAttribI2uiv _glVertexAttribI2uiv = 0;
proc_glVertexAttribI3i _glVertexAttribI3i = 0;
proc_glVertexAttribI3iv _glVertexAttribI3iv = 0;
proc_glVertexAttribI3ui _glVertexAttribI3ui = 0;
proc_glVertexAttribI3uiv _glVertexAttribI3uiv = 0;
proc_glVertexAttribI4bv _glVertexAttribI4bv = 0;
proc_glVertexAttribI4i _glVertexAttribI4i = 0;
proc_glVertexAttribI4iv _glVertexAttribI4iv = 0;
proc_glVertexAttribI4sv _glVertexAttribI4sv = 0;
proc_glVertexAttribI4ubv _glVertexAttribI4ubv = 0;
proc_glVertexAttribI4ui _glVertexAttribI4ui = 0;
proc_glVertexAttribI4uiv _glVertexAttribI4uiv = 0;
proc_glVertexAttribI4usv _glVertexAttribI4usv = 0;
proc_glVertexAttribIFormat _glVertexAttribIFormat = 0;
proc_glVertexAttribIPointer _glVertexAttribIPointer = 0;
proc_glVertexAttribL1d _glVertexAttribL1d = 0;
proc_glVertexAttribL1dv _glVertexAttribL1dv = 0;
proc_glVertexAttribL2d _glVertexAttribL2d = 0;
proc_glVertexAttribL2dv _glVertexAttribL2dv = 0;
proc_glVertexAttribL3d _glVertexAttribL3d = 0;
proc_glVertexAttribL3dv _glVertexAttribL3dv = 0;
proc_glVertexAttribL4d _glVertexAttribL4d = 0;
proc_glVertexAttribL4dv _glVertexAttribL4dv = 0;
proc_glVertexAttribLFormat _glVertexAttribLFormat = 0;
proc_glVertexAttribLPointer _glVertexAttribLPointer = 0;
proc_glVertexAttribP1ui _glVertexAttribP1ui = 0;
proc_glVertexAttribP1uiv _glVertexAttribP1uiv = 0;
proc_glVertexAttribP2ui _glVertexAttribP2ui = 0;
proc_glVertexAttribP2uiv _glVertexAttribP2uiv = 0;
proc_glVertexAttribP3ui _glVertexAttribP3ui = 0;
proc_glVertexAttribP3uiv _glVertexAttribP3uiv = 0;
proc_glVertexAttribP4ui _glVertexAttribP4ui = 0;
proc_glVertexAttribP4uiv _glVertexAttribP4uiv = 0;
proc_glVertexAttribPointer _glVertexAttribPointer = 0;
proc_glVertexBindingDivisor _glVertexBindingDivisor = 0;
proc_glViewport _glViewport = 0;
proc_glViewportArrayv _glViewportArrayv = 0;
proc_glViewportIndexedf _glViewportIndexedf = 0;
proc_glViewportIndexedfv _glViewportIndexedfv = 0;
proc_glWaitSync _glWaitSync = 0;
uint32 gizmo_vao;
uint32 gizmo_vbo;
uint32 gizmo_ebo;

// Implementations
void _drawMesh1(uint32 vao, int32 elementsCount) {
    _glBindVertexArray(vao);
    _glDrawElements(4, elementsCount, 5125, 0);
    _glBindVertexArray(0);
}
void _drawMesh2(Mesh mesh) {
    _drawMesh1(mesh.vao, mesh.elementsCount);
}
Mesh _createMesh1() {
    Mesh mesh;
    mesh.elementsCount = 0;
    _glGenVertexArrays(1, &mesh.vao);
    _glBindVertexArray(mesh.vao);
    _glGenBuffers(1, &mesh.vbo);
    _glBindBuffer(34962, mesh.vbo);
    _glGenBuffers(1, &mesh.ebo);
    _glBindBuffer(34963, mesh.ebo);
    _glEnableVertexAttribArray(0);
    _glVertexAttribPointer(0, 2, 5126, (uint8)0, 8, 0);
    _glBindVertexArray(0);
    return mesh;
}
Mesh _createMesh2(vec2* verts, uint32 vertsCount, uint32* inds, uint32 indsCount) {
    Mesh mesh;
    mesh.elementsCount = (int32)indsCount;
    _glGenVertexArrays(1, &mesh.vao);
    _glBindVertexArray(mesh.vao);
    _glGenBuffers(1, &mesh.vbo);
    _glBindBuffer(34962, mesh.vbo);
    _glBufferData(34962, (sizeof(vec2) * vertsCount), verts, 35044);
    _glGenBuffers(1, &mesh.ebo);
    _glBindBuffer(34963, mesh.ebo);
    _glBufferData(34963, (sizeof(uint32) * indsCount), inds, 35044);
    _glEnableVertexAttribArray(0);
    _glVertexAttribPointer(0, 2, 5126, (uint8)0, 8, 0);
    _glBindVertexArray(0);
    return mesh;
}
void _updateMeshData(Mesh* mesh, vec2* verts, uint32 vertsCount, uint32* inds, uint32 indsCount) {
    mesh->elementsCount = (int32)indsCount;
    _glBindBuffer(34962, mesh->vbo);
    _glBufferData(34962, (sizeof(vec2) * vertsCount), verts, 35044);
    _glBindBuffer(34962, 0);
    _glBindBuffer(34963, mesh->ebo);
    _glBufferData(34963, (sizeof(uint32) * indsCount), inds, 35044);
    _glBindBuffer(34963, 0);
}
void _loadGL() {
    _load_opengl(glfwGetProcAddress);
    _shaderInfoLog = malloc(1024);
    glfwSetFramebufferSizeCallback(_window, _GLFWframebuffersizefunCallback);
    _shader = _createShader();
    _glUseProgram(_shader);
    _glPointSize(1.000000);
    _glEnable(37600);
    _glEnable(33346);
    _glDebugMessageCallback(_opengl_debug_callback, 0);
}
void _opengl_debug_callback(GLenum source, GLenum _type, GLuint id, GLenum severity, GLsizei length, GLchar* message, void* userParam) {
    switch (_type) {
        case 33356:
        printf("%s", "ERROR");
        break;
        case 33357:
        printf("%s", "DEPRECATED BEHAVIOR");
        break;
        case 33358:
        printf("%s", "UDEFINED BEHAVIOR");
        break;
        case 33359:
        printf("%s", "PORTABILITY");
        break;
        case 33360:
        printf("%s", "PERFORMANCE");
        break;
        case 33384:
        printf("%s", "MARKER");
        break;
    }
}
void _GLFWframebuffersizefunCallback(GLFWwindow* window, int32 w, int32 h) {
    float32 aspect = ((float32)h / w)/*not constant*/;
    _glUniform1f(_glGetUniformLocation(_shader, "aspect"), aspect);
}
uint32 _makeShader(uint32 program, uint32 _type, char* code) {
    GLuint s = _glCreateShader(_type)/*not constant*/;
    _glShaderSource(s, 1, &code, 0);
    _glAttachShader(program, s);
    return s;
}
uint32 _createShader() {
    GLuint program = _glCreateProgram()/*not constant*/;
    char* vertCode = _fileread("shaders/vert.glsl")/*not constant*/;
    char* fragCode = _fileread("shaders/frag.glsl")/*not constant*/;
    uint32 v = _makeShader(program, 35633, vertCode)/*not constant*/;
    uint32 f = _makeShader(program, 35632, fragCode)/*not constant*/;
    free(vertCode);
    free(fragCode);
    _glLinkProgram(program);
    _glDetachShader(program, v);
    _glDeleteShader(v);
    _glDetachShader(program, f);
    _glDeleteShader(f);
    {
        int32 status;
        _glGetProgramiv(program, 35714, &status);
        if (status == 0) {
            int32 len;
            _glGetProgramInfoLog(program, 1024, &len, _shaderInfoLog);
            printf("%s", _shaderInfoLog);
        }
    }
    return program;
}
int32 _key(char c) {
    return glfwGetKey(_window, (int32)c);
}
int32 _mouse(int32 btn) {
    return glfwGetMouseButton(_window, btn);
}
vec2 _getMouseWorldCoord() {
    float64 cx;
    float64 cy;
    glfwGetCursorPos(_window, &cx, &cy);
    int32 w;
    int32 h;
    glfwGetFramebufferSize(_window, &w, &h);
    float32 x = ((((float32)cx / w) * 2) - 1)/*not constant*/;
    float32 y = -((((float32)cy / h) * 2) - 1)/*not constant*/;
    x *= ((float32)w / h);
    vec2 res = _local2world2(_camera, x, y)/*not constant*/;
    return res;
}
void _mouse_scrollCallback(GLFWwindow* w, float64 x, float64 y) {
    _camera.scale -= ((_camera.scale * ((float32)y)) * 0.100000);
    _camera.scale = _clamp2(_camera.scale, 1.000000, 10000.000000);
}
char* _fileread(char* filename) {
    void* stream;
    if (fopen_s(&stream, filename, "r")) {
        printf("%s", "Could not open file");
        return 0;
    }
    fseek(stream, 0, 2);
    uint64 len = ftell(stream)/*not constant*/;
    rewind(stream);
    char* res = calloc((len + 1), 1)/*not constant*/;
    fread(res, 1, len, stream);
    fclose(stream);
    return res;
}
void* _createList(uint32 stride) {
    List* head = malloc((sizeof(List) + (stride * 2)))/*not constant*/;
    head->stride = stride;
    head->capacity = 2;
    head->length = 0;
    return &head[1];
}
List* _listHead(void* list) {
    return &((List*)list)[-1];
}
void _listClear(void* list) {
    _listHead(list)->length = 0;
}
void _add1(void** list, void* data) {
    List* head = _listHead(*list)/*not constant*/;
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
uint32 _length1(void* list) {
    return _listHead(list)->length;
}
void _applyCamera() {
    _glUniform1f(_glGetUniformLocation(_shader, "zoom"), _camera.scale);
    _glUniform2f(_glGetUniformLocation(_shader, "cam_pos"), _camera.pos.x, _camera.pos.y);
    _glUniform1f(_glGetUniformLocation(_shader, "cam_rot"), _camera.rot);
}
void _applyTransform(Transform t) {
    _glUniform2f(_glGetUniformLocation(_shader, "entity_pos"), t.pos.x, t.pos.y);
    _glUniform1f(_glGetUniformLocation(_shader, "entity_rot"), t.rot);
    _glUniform1f(_glGetUniformLocation(_shader, "entity_scale"), t.scale);
}
vec2 _rotate_vec(vec2 dir, float32 angle) {
    float32 c = cosf(angle)/*not constant*/;
    float32 s = sinf(angle)/*not constant*/;
    vec2 res;
    res.x = ((c * dir.x) + (s * dir.y));
    res.y = ((-s * dir.x) + (c * dir.y));
    return res;
}
vec2 _right(Transform t) {
    return _vec(cosf(t.rot), sinf(t.rot));
}
vec2 _up(Transform t) {
    return _vec(-sinf(t.rot), cosf(t.rot));
}
vec2 _local2world1(Transform t, vec2 p) {
    return _local2world2(t, p.x, p.y);
}
vec2 _local2world2(Transform t, float32 x, float32 y) {
    float32 c = (cosf(t.rot) * t.scale)/*not constant*/;
    float32 s = (sinf(t.rot) * t.scale)/*not constant*/;
    vec2 res;
    res.x = (((c * x) + (s * y)) + t.pos.x);
    res.y = (((-s * x) + (c * y)) + t.pos.y);
    return res;
}
vec2 _world2local1(Transform t, vec2 p) {
    return _world2local2(t, p.x, p.y);
}
vec2 _world2local2(Transform t, float32 x, float32 y) {
    float32 c = (cosf(t.rot) / t.scale)/*not constant*/;
    float32 s = (sinf(t.rot) / t.scale)/*not constant*/;
    float32 px = (x - t.pos.x)/*not constant*/;
    float32 py = (y - t.pos.y)/*not constant*/;
    vec2 res;
    res.x = ((c * px) - (s * py));
    res.y = ((c * py) + (s * px));
    return res;
}
Entity* _appendEntity(Mesh mesh) {
    if (_entitiesLength >= 256) {
        printf("%s", "Failed to append entity. Max limit reached.");
        return 0;
    }
    Entity* res = &_entities[_entitiesLength++]/*not constant*/;
    res->transform.pos = _vec(0, 0);
    res->transform.scale = 1;
    res->transform.rot = 0;
    res->mesh = mesh;
    res->vel = _vec(0, 0);
    return res;
}
Mesh _genCircle(int32 res, float32 radius) {
    uint32 vertsCount = ((uint32)res + 1)/*not constant*/;
    vec2 verts[vertsCount];
    verts[0].x = 0;
    verts[0].y = 0;
    for (int32 i = 1; i < (res + 1); i++) {
        float32 angle = ((i * (3.141593 * 2.000000)) / res)/*not constant*/;
        verts[i].x = (cosf(angle) * radius);
        verts[i].y = (sinf(angle) * radius);
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
    return _createMesh2(verts, vertsCount, inds, indsCount);
}
Planet _genPlanet(float32 radius, float32 dist, float32 year) {
    Planet p;
    p.radius = radius;
    p.dist = dist;
    p.yearDuration = year;
    p.mesh = _genCircle(_round2int((36 * radius)), radius);
    p.rot = 0.000000;
    p.orbitOffset = (3.141593 * _random((int32)dist));
    return p;
}
void _drawPlanet(Planet* planet) {
    _glUniform2f(_glGetUniformLocation(_shader, "entity_pos"), planet->pos.x, planet->pos.y);
    _glUniform1f(_glGetUniformLocation(_shader, "entity_rot"), planet->rot);
    _drawMesh2(planet->mesh);
}
void _updateEntity(Entity* entity) {
    entity->transform.pos = _add2(entity->transform.pos, entity->vel);
    for (int32 i = 0; i < 16; i++) {
        Planet* planet = &_planets[i]/*not constant*/;
        vec2 diff = _sub(entity->transform.pos, planet->pos)/*not constant*/;
        vec2 normal = _normalize(diff)/*not constant*/;
        float32 intersection = (_length2(diff) - planet->radius)/*not constant*/;
        float32 planetArea = ((3.141593 * planet->radius) * planet->radius)/*not constant*/;
        float32 planetMass = planetArea/*not constant*/;
        vec2 gravity = _mul2(normal, ((planetMass / _sqlength(diff)) * -0.000003))/*not constant*/;
        if (intersection <= 0.000000) {
            vec2 correction = _mul2(normal, -intersection)/*not constant*/;
            entity->transform.pos = _add2(entity->transform.pos, correction);
            entity->vel = _add2(entity->vel, _mul2(normal, -_dot(entity->vel, normal)));
        }
    }
    Intersection intersection;
    if (_point_intersects(entity->transform.pos, &_voxelGrid, &intersection)) {
        vec2 normal = intersection.surface_normal/*not constant*/;
        vec2 correction = _mul2(normal, -intersection.distance)/*not constant*/;
        entity->transform.pos = _add2(entity->transform.pos, correction);
        entity->vel = _add2(entity->vel, _mul2(normal, -_dot(entity->vel, normal)));
    }
}
void _load() {
    _camera.rot = 0;
    _camera.scale = 40;
    glfwSetScrollCallback(_window, _mouse_scrollCallback);
    _entities = malloc((sizeof(Entity) * 256));
    _planets = malloc((sizeof(Planet) * 16));
    for (int32 i = 0; i < 16; i++) {
        float32 r = (20.000000 + _random((int32)i))/*not constant*/;
        Planet p = _genPlanet(r, (70.000000 + ((r * 30.000000) * i)), (100.000000 + (20.000000 * _random(((2 * i) + 100)))))/*not constant*/;
        _planets[i] = p;
    }
    _player = _appendEntity(_genCircle(4, 0.100000));
    _voxelGrid = _generatePlanet();
    _voxelGrid.transform.pos = _vec(-20, 30);
    printf("%s%u%s", "Voxelgrid Tri Count: ", (_length1(_voxelGrid.inds) / 3), "\n");
    _voxelMesh_circle = _genCircle(360, 40);
}
VoxelGrid _generatePlanet() {
    VoxelGrid grid = _createVoxelGrid(100)/*not constant*/;
    grid.transform.scale = 1;
    float32 half = ((float32)grid.res / 2)/*not constant*/;
    for (uint32 x = 0; x < grid.res; x++) {
        for (uint32 y = 0; y < grid.res; y++) {
            float32 xf = ((float32)x - half)/*not constant*/;
            float32 yf = ((float32)y - half)/*not constant*/;
            float32 len = sqrtf(((xf * xf) + (yf * yf)))/*not constant*/;
            uint32 i = ((x * grid.res) + y)/*not constant*/;
            grid.data[i] = _clamp2((40 - len), 0, 1);
        }
    }
    _updateGridMesh(&grid);
    return grid;
}
int32 main() {
    if (!glfwInit()) return -1;
    int32 width = 1600/*constant*/;
    int32 height = 900/*constant*/;
    _window = glfwCreateWindow(width, height, "Window", 0, 0);
    if (!_window) {
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(_window);
    _loadGL();
    _glClearColor(0.050000, 0.050000, 0.050000, 1.000000);
    _load();
    GLenum error = _glGetError()/*not constant*/;
    if (error) printf("%s%u%s", "OpenGL error. ", error, "\n");
    while (!glfwWindowShouldClose(_window)) {
        vec2 wasd;
        wasd.x = 0;
        wasd.y = 0;
        if (_key('W')) wasd.y += 1;
        if (_key('S')) wasd.y -= 1;
        if (_key('A')) wasd.x -= 1;
        if (_key('D')) wasd.x += 1;
        if (_key('F')) {
            _player->vel.x = 0.000000;
            _player->vel.y = 0.000000;
        }
        float32 c = cosf(_player->transform.rot)/*not constant*/;
        float32 s = sinf(_player->transform.rot)/*not constant*/;
        vec2 dir = _vec(_dot(_vec(c, s), wasd), _dot(_vec(-s, c), wasd))/*not constant*/;
        _player->vel = _add2(_player->vel, _mul2(dir, 0.010000));
        int32 w;
        int32 h;
        glfwGetFramebufferSize(_window, &w, &h);
        _glViewport(0, 0, w, h);
        _glClear(16384);
        float32 time = (float32)glfwGetTime()/*not constant*/;
        time = 0.000000;
        for (int32 i = 0; i < 16; i++) {
            Planet* planet = &_planets[i]/*not constant*/;
            float32 t = (3.141593 * 2.000000)/*constant*/;
            planet->pos.x = (cosf((planet->orbitOffset + ((t * time) / planet->yearDuration))) * planet->dist);
            planet->pos.y = (sinf((planet->orbitOffset + ((t * time) / planet->yearDuration))) * planet->dist);
            _drawPlanet(planet);
        }
        for (int32 i = 0; i < _entitiesLength; i++) {
            Entity* e = &_entities[i]/*not constant*/;
            _updateEntity(e);
        }
        if (_key('Q')) _camera.rot -= 0.050000;
        if (_key('E')) _camera.rot += 0.050000;
        _camera.pos = _player->transform.pos;
        _player->transform.rot = _camera.rot;
        _applyCamera();
        for (int32 i = 0; i < _entitiesLength; i++) {
            Entity* e = &_entities[i]/*not constant*/;
            _applyTransform(e->transform);
            _drawMesh2(e->mesh);
        }
        {
            vec2 mouseCoord = _getMouseWorldCoord()/*not constant*/;
            Intersection intersection;
            if (_point_intersects(mouseCoord, &_voxelGrid, &intersection)) {
                printf("%s%f%s", "Intersects ", intersection.distance, "\n");
            }
            if (_mouse(0)) {
                _VoxelGrid_addCircle(&_voxelGrid, 3, mouseCoord.x, mouseCoord.y);
                _updateGridMesh(&_voxelGrid);
            } else if (_mouse(1)) {
                _VoxelGrid_removeCircle(&_voxelGrid, 3, mouseCoord.x, mouseCoord.y);
                _updateGridMesh(&_voxelGrid);
            }
            _applyTransform(_voxelGrid.transform);
            _drawMesh2(_voxelGrid.mesh);
            _glBindVertexArray(_voxelGrid.mesh.vao);
            _glDrawArrays(0, 0, (int32)_voxelGrid.numVerts);
            _glBindVertexArray(0);
        }
        glfwSwapBuffers(_window);
        glfwPollEvents();
    }
    glfwDestroyWindow(_window);
    glfwTerminate();
}
float32 _random(int32 seed) {
    seed = ((seed << 13) ^ seed);
    return (1.000000 - ((((seed * (((seed * seed) * 15731) + 789221)) + 1376312589) & 2147483647) / 1073741824.000000));
}
int32 _clamp1(int32 t, int32 min, int32 max) {
    return (t < min) ? min : (t > max) ? max : t;
}
float32 _clamp2(float32 t, float32 min, float32 max) {
    return (t < min) ? min : (t > max) ? max : t;
}
int32 _round2int(float32 x) {
    return (int32)(x + 0.500000);
}
vec2 _vec(float32 x, float32 y) {
    vec2 res;
    res.x = x;
    res.y = y;
    return res;
}
vec2 _sub(vec2 a, vec2 b) {
    return _vec((a.x - b.x), (a.y - b.y));
}
vec2 _add2(vec2 a, vec2 b) {
    return _vec((a.x + b.x), (a.y + b.y));
}
vec2 _mul1(vec2 a, vec2 b) {
    return _vec((a.x * b.x), (a.y * b.y));
}
vec2 _mul2(vec2 a, float32 s) {
    return _vec((a.x * s), (a.y * s));
}
float32 _dot(vec2 a, vec2 b) {
    return ((a.x * b.x) + (a.y * b.y));
}
float32 _sqlength(vec2 a) {
    return _dot(a, a);
}
float32 _length2(vec2 a) {
    return sqrtf(_dot(a, a));
}
vec2 _normalize(vec2 a) {
    return _mul2(a, (1.000000 / _length2(a)));
}
vec2 _reflect(vec2 a, vec2 normal) {
    return _add2(a, _mul2(normal, (_dot(a, normal) * -2.000000)));
}
void _addTri(uint32** inds, uint32 i1, uint32 i2, uint32 i3) {
    _add1(inds, &i1);
    _add1(inds, &i2);
    _add1(inds, &i3);
}
uint32 _getIndex(uint32 res, uint32 x, uint32 y) {
    return ((x * res) + y);
}
VoxelGrid _createVoxelGrid(uint32 res) {
    VoxelGrid grid;
    grid.transform.pos = _vec(0, 0);
    grid.transform.rot = 0;
    grid.res = res;
    grid.data = malloc(sizeof(float32) * (res * res));
    grid.numVerts = (((3 * grid.res) * grid.res) - (2 * grid.res));
    grid.verts = malloc(sizeof(vec2) * grid.numVerts);
    float32 half = ((float32)grid.res / 2.000000)/*not constant*/;
    for (uint32 x = 0; x < grid.res; x++) {
        for (uint32 y = 0; y < grid.res; y++) {
            uint32 i = _getIndex(grid.res, x, y)/*not constant*/;
            grid.verts[i].x = ((float32)x - half);
            grid.verts[i].y = ((float32)y - half);
        }
    }
    grid.inds = _createList((uint32)sizeof(uint32));
    grid.mesh = _createMesh1();
    return grid;
}
void _updateGridMesh(VoxelGrid* grid) {
    _listClear(grid->inds);
    uint32 size = (grid->res - 1)/*not constant*/;
    uint32 g1_byteoffset = (grid->res * grid->res)/*not constant*/;
    uint32 g2_byteoffset = (g1_byteoffset + (grid->res * size))/*not constant*/;
    for (uint32 x = 0; x < size; x++) {
        for (uint32 y = 0; y < size; y++) {
            uint32 e2 = ((g1_byteoffset + (x * size)) + y)/*not constant*/;
            uint32 e3 = ((g1_byteoffset + ((x + 1) * size)) + y)/*not constant*/;
            uint32 e1 = ((g2_byteoffset + (x * grid->res)) + (y + 1))/*not constant*/;
            uint32 e4 = ((g2_byteoffset + (x * grid->res)) + y)/*not constant*/;
            uint32 i1 = _getIndex(grid->res, x, (y + 1))/*not constant*/;
            uint32 i2 = _getIndex(grid->res, (x + 1), (y + 1))/*not constant*/;
            uint32 i3 = _getIndex(grid->res, x, y)/*not constant*/;
            uint32 i4 = _getIndex(grid->res, (x + 1), y)/*not constant*/;
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
                _addTri(&grid->inds, i1, e2, e1);
                break;
                case 4:
                _addTri(&grid->inds, i2, e1, e3);
                break;
                case 1:
                _addTri(&grid->inds, i4, e3, e4);
                break;
                case 2:
                _addTri(&grid->inds, i3, e4, e2);
                break;
                case (15 & ~8):
                _addTri(&grid->inds, i4, e1, e2);
                _addTri(&grid->inds, i4, i2, e1);
                _addTri(&grid->inds, i4, e2, i3);
                break;
                case (15 & ~4):
                _addTri(&grid->inds, i3, e3, e1);
                _addTri(&grid->inds, i3, i4, e3);
                _addTri(&grid->inds, i3, e1, i1);
                break;
                case (15 & ~1):
                _addTri(&grid->inds, i1, e3, e4);
                _addTri(&grid->inds, i1, e3, i2);
                _addTri(&grid->inds, i1, e4, i3);
                break;
                case (15 & ~2):
                _addTri(&grid->inds, i2, e2, e4);
                _addTri(&grid->inds, i2, i1, e2);
                _addTri(&grid->inds, i2, e4, i4);
                break;
                case (8 | 4):
                _addTri(&grid->inds, i1, e2, i2);
                _addTri(&grid->inds, i2, e2, e3);
                break;
                case (2 | 1):
                _addTri(&grid->inds, i3, e3, e2);
                _addTri(&grid->inds, i4, e3, i3);
                break;
                case (8 | 2):
                _addTri(&grid->inds, i1, i3, e1);
                _addTri(&grid->inds, i3, e4, e1);
                break;
                case (4 | 1):
                _addTri(&grid->inds, i2, e1, i4);
                _addTri(&grid->inds, i4, e1, e4);
                break;
                case (8 | 1):
                _addTri(&grid->inds, i1, e2, e1);
                _addTri(&grid->inds, i4, e3, e4);
                break;
                case (4 | 2):
                _addTri(&grid->inds, i2, e1, e3);
                _addTri(&grid->inds, i3, e4, e2);
                break;
                case 15:
                _addTri(&grid->inds, i1, i3, i2);
                _addTri(&grid->inds, i2, i3, i4);
                break;
            }
        }
    }
    if (1) {
        float32 half = ((float32)grid->res / 2.000000)/*not constant*/;
        for (uint32 x = 0; x < grid->res; x++) {
            for (uint32 y = 0; y < size; y++) {
                float32 p1 = grid->data[_getIndex(grid->res, x, y)]/*not constant*/;
                float32 p2 = grid->data[_getIndex(grid->res, x, (y + 1))]/*not constant*/;
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
                float32 p1 = grid->data[_getIndex(grid->res, x, y)]/*not constant*/;
                float32 p2 = grid->data[_getIndex(grid->res, (x + 1), y)]/*not constant*/;
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
    _updateMeshData(&grid->mesh, grid->verts, grid->numVerts, grid->inds, _length1(grid->inds));
}
vec2 _getLocalCoords(VoxelGrid* grid, float32 x, float32 y) {
    vec2 p = _world2local2(grid->transform, x, y)/*not constant*/;
    float32 half = ((float32)grid->res / 2.000000)/*not constant*/;
    p.x += half;
    p.y += half;
    return p;
}
void _VoxelGrid_addCircle(VoxelGrid* grid, float32 radius, float32 x, float32 y) {
    vec2 p = _getLocalCoords(grid, x, y)/*not constant*/;
    int32 rx = _round2int(p.x)/*not constant*/;
    int32 ry = _round2int(p.y)/*not constant*/;
    int32 iradius = (int32)(radius + 1)/*not constant*/;
    int32 x_min = _clamp1((rx - iradius), 0, (int32)grid->res)/*not constant*/;
    int32 x_max = _clamp1((rx + iradius), 0, (int32)grid->res)/*not constant*/;
    int32 y_min = _clamp1((ry - iradius), 0, (int32)grid->res)/*not constant*/;
    int32 y_max = _clamp1((ry + iradius), 0, (int32)grid->res)/*not constant*/;
    for (int32 ix = x_min; ix < x_max; ix++) {
        for (int32 iy = y_min; iy < y_max; iy++) {
            float32 xf = ((float32)ix - p.x)/*not constant*/;
            float32 yf = ((float32)iy - p.y)/*not constant*/;
            float32 len = sqrtf(((xf * xf) + (yf * yf)))/*not constant*/;
            int32 i = ((ix * grid->res) + iy)/*not constant*/;
            float32 addition = _clamp2((radius - len), 0, 1)/*not constant*/;
            if (grid->data[i] < addition) grid->data[i] = addition;
        }
    }
}
void _VoxelGrid_removeCircle(VoxelGrid* grid, float32 radius, float32 x, float32 y) {
    vec2 p = _getLocalCoords(grid, x, y)/*not constant*/;
    int32 rx = _round2int(p.x)/*not constant*/;
    int32 ry = _round2int(p.y)/*not constant*/;
    int32 iradius = (int32)(radius + 1)/*not constant*/;
    int32 x_min = _clamp1((rx - iradius), 0, (int32)grid->res)/*not constant*/;
    int32 x_max = _clamp1((rx + iradius), 0, (int32)grid->res)/*not constant*/;
    int32 y_min = _clamp1((ry - iradius), 0, (int32)grid->res)/*not constant*/;
    int32 y_max = _clamp1((ry + iradius), 0, (int32)grid->res)/*not constant*/;
    for (int32 ix = x_min; ix < x_max; ix++) {
        for (int32 iy = y_min; iy < y_max; iy++) {
            float32 xf = ((float32)ix - p.x)/*not constant*/;
            float32 yf = ((float32)iy - p.y)/*not constant*/;
            float32 len = sqrtf(((xf * xf) + (yf * yf)))/*not constant*/;
            int32 i = ((ix * grid->res) + iy)/*not constant*/;
            float32 newValue = _clamp2((len - radius), 0, 1)/*not constant*/;
            if (grid->data[i] > newValue) grid->data[i] = newValue;
        }
    }
}
vec2 _rot90deg(vec2 v) {
    vec2 res = _vec(-v.y, v.x)/*not constant*/;
    return res;
}
int32 _point_intersects(vec2 point, VoxelGrid* grid, Intersection* out_intersection) {
    point = _getLocalCoords(grid, point.x, point.y);
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
        a = _vec(p1, 1);
        b = _vec(0, (1 - p1));
        break;
        case 4:
        a = _vec(1, (1 - p2));
        b = _vec((1 - p2), 1);
        break;
        case 1:
        a = _vec((1 - p4), 0);
        b = _vec(1, p4);
        break;
        case 2:
        a = _vec(0, p3);
        b = _vec(p3, 0);
        break;
        case (15 & ~8):
        a = _vec(0, p3);
        b = _vec((1 - p2), 1);
        break;
        case (15 & ~4):
        a = _vec(p1, 1);
        b = _vec(1, p4);
        break;
        case (15 & ~1):
        a = _vec(1, (1 - p2));
        b = _vec(p3, 0);
        break;
        case (15 & ~2):
        a = _vec((1 - p4), 0);
        b = _vec(0, (1 - p1));
        break;
        case (8 | 4):
        a = _vec(1, (1 - p2));
        b = _vec(0, (1 - p1));
        break;
        case (2 | 1):
        a = _vec(0, p3);
        b = _vec(1, p4);
        break;
        case (8 | 2):
        a = _vec(p1, 1);
        b = _vec(p3, 0);
        break;
        case (4 | 1):
        a = _vec((1 - p4), 0);
        b = _vec((1 - p2), 1);
        break;
        case 15:
        return 1;
        case 0:
        return 0;
        default:
        return 0;
    }
    vec2 local = _sub(point, _vec(x, y))/*not constant*/;
    local = _sub(local, a);
    vec2 normal = _rot90deg(_sub(b, a))/*not constant*/;
    out_intersection->distance = _dot(normal, local);
    out_intersection->surface_normal = _rotate_vec(normal, grid->transform.rot);
    if (out_intersection->distance <= 0) return 1;
    return 0;
}
vec2 _calcCenterOfMass(VoxelGrid* grid) {
    vec2 res = _vec(0, 0)/*not constant*/;
    float32 total = 0/*constant*/;
    uint32 x = -1/*constant*/;
    while (++x < grid->res) {
        uint32 y = -1/*constant*/;
        while (++y < grid->res) {
            uint32 i = ((x * grid->res) + y)/*not constant*/;
            float32 value = grid->data[i]/*not constant*/;
            if (value > 0.001000) {
                total += value;
                res = _add2(res, _mul2(_vec(x, y), value));
            }
        }
    }
    res = _mul2(res, (1.000000 / total));
    return res;
}
void _load_opengl(void (*(*getProcAddress)(char*))()) {
    _glActiveShaderProgram = (proc_glActiveShaderProgram)getProcAddress("glActiveShaderProgram");
    _glActiveTexture = (proc_glActiveTexture)getProcAddress("glActiveTexture");
    _glAttachShader = (proc_glAttachShader)getProcAddress("glAttachShader");
    _glBeginConditionalRender = (proc_glBeginConditionalRender)getProcAddress("glBeginConditionalRender");
    _glBeginQuery = (proc_glBeginQuery)getProcAddress("glBeginQuery");
    _glBeginQueryIndexed = (proc_glBeginQueryIndexed)getProcAddress("glBeginQueryIndexed");
    _glBeginTransformFeedback = (proc_glBeginTransformFeedback)getProcAddress("glBeginTransformFeedback");
    _glBindAttribLocation = (proc_glBindAttribLocation)getProcAddress("glBindAttribLocation");
    _glBindBuffer = (proc_glBindBuffer)getProcAddress("glBindBuffer");
    _glBindBufferBase = (proc_glBindBufferBase)getProcAddress("glBindBufferBase");
    _glBindBufferRange = (proc_glBindBufferRange)getProcAddress("glBindBufferRange");
    _glBindFragDataLocation = (proc_glBindFragDataLocation)getProcAddress("glBindFragDataLocation");
    _glBindFragDataLocationIndexed = (proc_glBindFragDataLocationIndexed)getProcAddress("glBindFragDataLocationIndexed");
    _glBindFramebuffer = (proc_glBindFramebuffer)getProcAddress("glBindFramebuffer");
    _glBindImageTexture = (proc_glBindImageTexture)getProcAddress("glBindImageTexture");
    _glBindProgramPipeline = (proc_glBindProgramPipeline)getProcAddress("glBindProgramPipeline");
    _glBindRenderbuffer = (proc_glBindRenderbuffer)getProcAddress("glBindRenderbuffer");
    _glBindSampler = (proc_glBindSampler)getProcAddress("glBindSampler");
    _glBindTexture = (proc_glBindTexture)getProcAddress("glBindTexture");
    _glBindTransformFeedback = (proc_glBindTransformFeedback)getProcAddress("glBindTransformFeedback");
    _glBindVertexArray = (proc_glBindVertexArray)getProcAddress("glBindVertexArray");
    _glBindVertexBuffer = (proc_glBindVertexBuffer)getProcAddress("glBindVertexBuffer");
    _glBlendColor = (proc_glBlendColor)getProcAddress("glBlendColor");
    _glBlendEquation = (proc_glBlendEquation)getProcAddress("glBlendEquation");
    _glBlendEquationSeparate = (proc_glBlendEquationSeparate)getProcAddress("glBlendEquationSeparate");
    _glBlendEquationSeparatei = (proc_glBlendEquationSeparatei)getProcAddress("glBlendEquationSeparatei");
    _glBlendEquationi = (proc_glBlendEquationi)getProcAddress("glBlendEquationi");
    _glBlendFunc = (proc_glBlendFunc)getProcAddress("glBlendFunc");
    _glBlendFuncSeparate = (proc_glBlendFuncSeparate)getProcAddress("glBlendFuncSeparate");
    _glBlendFuncSeparatei = (proc_glBlendFuncSeparatei)getProcAddress("glBlendFuncSeparatei");
    _glBlendFunci = (proc_glBlendFunci)getProcAddress("glBlendFunci");
    _glBlitFramebuffer = (proc_glBlitFramebuffer)getProcAddress("glBlitFramebuffer");
    _glBufferData = (proc_glBufferData)getProcAddress("glBufferData");
    _glBufferSubData = (proc_glBufferSubData)getProcAddress("glBufferSubData");
    _glCheckFramebufferStatus = (proc_glCheckFramebufferStatus)getProcAddress("glCheckFramebufferStatus");
    _glClampColor = (proc_glClampColor)getProcAddress("glClampColor");
    _glClear = (proc_glClear)getProcAddress("glClear");
    _glClearBufferData = (proc_glClearBufferData)getProcAddress("glClearBufferData");
    _glClearBufferSubData = (proc_glClearBufferSubData)getProcAddress("glClearBufferSubData");
    _glClearBufferfi = (proc_glClearBufferfi)getProcAddress("glClearBufferfi");
    _glClearBufferfv = (proc_glClearBufferfv)getProcAddress("glClearBufferfv");
    _glClearBufferiv = (proc_glClearBufferiv)getProcAddress("glClearBufferiv");
    _glClearBufferuiv = (proc_glClearBufferuiv)getProcAddress("glClearBufferuiv");
    _glClearColor = (proc_glClearColor)getProcAddress("glClearColor");
    _glClearDepth = (proc_glClearDepth)getProcAddress("glClearDepth");
    _glClearDepthf = (proc_glClearDepthf)getProcAddress("glClearDepthf");
    _glClearStencil = (proc_glClearStencil)getProcAddress("glClearStencil");
    _glClientWaitSync = (proc_glClientWaitSync)getProcAddress("glClientWaitSync");
    _glColorMask = (proc_glColorMask)getProcAddress("glColorMask");
    _glColorMaski = (proc_glColorMaski)getProcAddress("glColorMaski");
    _glCompileShader = (proc_glCompileShader)getProcAddress("glCompileShader");
    _glCompressedTexImage1D = (proc_glCompressedTexImage1D)getProcAddress("glCompressedTexImage1D");
    _glCompressedTexImage2D = (proc_glCompressedTexImage2D)getProcAddress("glCompressedTexImage2D");
    _glCompressedTexImage3D = (proc_glCompressedTexImage3D)getProcAddress("glCompressedTexImage3D");
    _glCompressedTexSubImage1D = (proc_glCompressedTexSubImage1D)getProcAddress("glCompressedTexSubImage1D");
    _glCompressedTexSubImage2D = (proc_glCompressedTexSubImage2D)getProcAddress("glCompressedTexSubImage2D");
    _glCompressedTexSubImage3D = (proc_glCompressedTexSubImage3D)getProcAddress("glCompressedTexSubImage3D");
    _glCopyBufferSubData = (proc_glCopyBufferSubData)getProcAddress("glCopyBufferSubData");
    _glCopyImageSubData = (proc_glCopyImageSubData)getProcAddress("glCopyImageSubData");
    _glCopyTexImage1D = (proc_glCopyTexImage1D)getProcAddress("glCopyTexImage1D");
    _glCopyTexImage2D = (proc_glCopyTexImage2D)getProcAddress("glCopyTexImage2D");
    _glCopyTexSubImage1D = (proc_glCopyTexSubImage1D)getProcAddress("glCopyTexSubImage1D");
    _glCopyTexSubImage2D = (proc_glCopyTexSubImage2D)getProcAddress("glCopyTexSubImage2D");
    _glCopyTexSubImage3D = (proc_glCopyTexSubImage3D)getProcAddress("glCopyTexSubImage3D");
    _glCreateProgram = (proc_glCreateProgram)getProcAddress("glCreateProgram");
    _glCreateShader = (proc_glCreateShader)getProcAddress("glCreateShader");
    _glCreateShaderProgramv = (proc_glCreateShaderProgramv)getProcAddress("glCreateShaderProgramv");
    _glCullFace = (proc_glCullFace)getProcAddress("glCullFace");
    _glDebugMessageCallback = (proc_glDebugMessageCallback)getProcAddress("glDebugMessageCallback");
    _glDebugMessageControl = (proc_glDebugMessageControl)getProcAddress("glDebugMessageControl");
    _glDebugMessageInsert = (proc_glDebugMessageInsert)getProcAddress("glDebugMessageInsert");
    _glDeleteBuffers = (proc_glDeleteBuffers)getProcAddress("glDeleteBuffers");
    _glDeleteFramebuffers = (proc_glDeleteFramebuffers)getProcAddress("glDeleteFramebuffers");
    _glDeleteProgram = (proc_glDeleteProgram)getProcAddress("glDeleteProgram");
    _glDeleteProgramPipelines = (proc_glDeleteProgramPipelines)getProcAddress("glDeleteProgramPipelines");
    _glDeleteQueries = (proc_glDeleteQueries)getProcAddress("glDeleteQueries");
    _glDeleteRenderbuffers = (proc_glDeleteRenderbuffers)getProcAddress("glDeleteRenderbuffers");
    _glDeleteSamplers = (proc_glDeleteSamplers)getProcAddress("glDeleteSamplers");
    _glDeleteShader = (proc_glDeleteShader)getProcAddress("glDeleteShader");
    _glDeleteSync = (proc_glDeleteSync)getProcAddress("glDeleteSync");
    _glDeleteTextures = (proc_glDeleteTextures)getProcAddress("glDeleteTextures");
    _glDeleteTransformFeedbacks = (proc_glDeleteTransformFeedbacks)getProcAddress("glDeleteTransformFeedbacks");
    _glDeleteVertexArrays = (proc_glDeleteVertexArrays)getProcAddress("glDeleteVertexArrays");
    _glDepthFunc = (proc_glDepthFunc)getProcAddress("glDepthFunc");
    _glDepthMask = (proc_glDepthMask)getProcAddress("glDepthMask");
    _glDepthRange = (proc_glDepthRange)getProcAddress("glDepthRange");
    _glDepthRangeArrayv = (proc_glDepthRangeArrayv)getProcAddress("glDepthRangeArrayv");
    _glDepthRangeIndexed = (proc_glDepthRangeIndexed)getProcAddress("glDepthRangeIndexed");
    _glDepthRangef = (proc_glDepthRangef)getProcAddress("glDepthRangef");
    _glDetachShader = (proc_glDetachShader)getProcAddress("glDetachShader");
    _glDisable = (proc_glDisable)getProcAddress("glDisable");
    _glDisableVertexAttribArray = (proc_glDisableVertexAttribArray)getProcAddress("glDisableVertexAttribArray");
    _glDisablei = (proc_glDisablei)getProcAddress("glDisablei");
    _glDispatchCompute = (proc_glDispatchCompute)getProcAddress("glDispatchCompute");
    _glDispatchComputeIndirect = (proc_glDispatchComputeIndirect)getProcAddress("glDispatchComputeIndirect");
    _glDrawArrays = (proc_glDrawArrays)getProcAddress("glDrawArrays");
    _glDrawArraysIndirect = (proc_glDrawArraysIndirect)getProcAddress("glDrawArraysIndirect");
    _glDrawArraysInstanced = (proc_glDrawArraysInstanced)getProcAddress("glDrawArraysInstanced");
    _glDrawArraysInstancedBaseInstance = (proc_glDrawArraysInstancedBaseInstance)getProcAddress("glDrawArraysInstancedBaseInstance");
    _glDrawBuffer = (proc_glDrawBuffer)getProcAddress("glDrawBuffer");
    _glDrawBuffers = (proc_glDrawBuffers)getProcAddress("glDrawBuffers");
    _glDrawElements = (proc_glDrawElements)getProcAddress("glDrawElements");
    _glDrawElementsBaseVertex = (proc_glDrawElementsBaseVertex)getProcAddress("glDrawElementsBaseVertex");
    _glDrawElementsIndirect = (proc_glDrawElementsIndirect)getProcAddress("glDrawElementsIndirect");
    _glDrawElementsInstanced = (proc_glDrawElementsInstanced)getProcAddress("glDrawElementsInstanced");
    _glDrawElementsInstancedBaseInstance = (proc_glDrawElementsInstancedBaseInstance)getProcAddress("glDrawElementsInstancedBaseInstance");
    _glDrawElementsInstancedBaseVertex = (proc_glDrawElementsInstancedBaseVertex)getProcAddress("glDrawElementsInstancedBaseVertex");
    _glDrawElementsInstancedBaseVertexBaseInstance = (proc_glDrawElementsInstancedBaseVertexBaseInstance)getProcAddress("glDrawElementsInstancedBaseVertexBaseInstance");
    _glDrawRangeElements = (proc_glDrawRangeElements)getProcAddress("glDrawRangeElements");
    _glDrawRangeElementsBaseVertex = (proc_glDrawRangeElementsBaseVertex)getProcAddress("glDrawRangeElementsBaseVertex");
    _glDrawTransformFeedback = (proc_glDrawTransformFeedback)getProcAddress("glDrawTransformFeedback");
    _glDrawTransformFeedbackInstanced = (proc_glDrawTransformFeedbackInstanced)getProcAddress("glDrawTransformFeedbackInstanced");
    _glDrawTransformFeedbackStream = (proc_glDrawTransformFeedbackStream)getProcAddress("glDrawTransformFeedbackStream");
    _glDrawTransformFeedbackStreamInstanced = (proc_glDrawTransformFeedbackStreamInstanced)getProcAddress("glDrawTransformFeedbackStreamInstanced");
    _glEnable = (proc_glEnable)getProcAddress("glEnable");
    _glEnableVertexAttribArray = (proc_glEnableVertexAttribArray)getProcAddress("glEnableVertexAttribArray");
    _glEnablei = (proc_glEnablei)getProcAddress("glEnablei");
    _glEndConditionalRender = (proc_glEndConditionalRender)getProcAddress("glEndConditionalRender");
    _glEndQuery = (proc_glEndQuery)getProcAddress("glEndQuery");
    _glEndQueryIndexed = (proc_glEndQueryIndexed)getProcAddress("glEndQueryIndexed");
    _glEndTransformFeedback = (proc_glEndTransformFeedback)getProcAddress("glEndTransformFeedback");
    _glFenceSync = (proc_glFenceSync)getProcAddress("glFenceSync");
    _glFinish = (proc_glFinish)getProcAddress("glFinish");
    _glFlush = (proc_glFlush)getProcAddress("glFlush");
    _glFlushMappedBufferRange = (proc_glFlushMappedBufferRange)getProcAddress("glFlushMappedBufferRange");
    _glFramebufferParameteri = (proc_glFramebufferParameteri)getProcAddress("glFramebufferParameteri");
    _glFramebufferRenderbuffer = (proc_glFramebufferRenderbuffer)getProcAddress("glFramebufferRenderbuffer");
    _glFramebufferTexture = (proc_glFramebufferTexture)getProcAddress("glFramebufferTexture");
    _glFramebufferTexture1D = (proc_glFramebufferTexture1D)getProcAddress("glFramebufferTexture1D");
    _glFramebufferTexture2D = (proc_glFramebufferTexture2D)getProcAddress("glFramebufferTexture2D");
    _glFramebufferTexture3D = (proc_glFramebufferTexture3D)getProcAddress("glFramebufferTexture3D");
    _glFramebufferTextureLayer = (proc_glFramebufferTextureLayer)getProcAddress("glFramebufferTextureLayer");
    _glFrontFace = (proc_glFrontFace)getProcAddress("glFrontFace");
    _glGenBuffers = (proc_glGenBuffers)getProcAddress("glGenBuffers");
    _glGenFramebuffers = (proc_glGenFramebuffers)getProcAddress("glGenFramebuffers");
    _glGenProgramPipelines = (proc_glGenProgramPipelines)getProcAddress("glGenProgramPipelines");
    _glGenQueries = (proc_glGenQueries)getProcAddress("glGenQueries");
    _glGenRenderbuffers = (proc_glGenRenderbuffers)getProcAddress("glGenRenderbuffers");
    _glGenSamplers = (proc_glGenSamplers)getProcAddress("glGenSamplers");
    _glGenTextures = (proc_glGenTextures)getProcAddress("glGenTextures");
    _glGenTransformFeedbacks = (proc_glGenTransformFeedbacks)getProcAddress("glGenTransformFeedbacks");
    _glGenVertexArrays = (proc_glGenVertexArrays)getProcAddress("glGenVertexArrays");
    _glGenerateMipmap = (proc_glGenerateMipmap)getProcAddress("glGenerateMipmap");
    _glGetActiveAtomicCounterBufferiv = (proc_glGetActiveAtomicCounterBufferiv)getProcAddress("glGetActiveAtomicCounterBufferiv");
    _glGetActiveAttrib = (proc_glGetActiveAttrib)getProcAddress("glGetActiveAttrib");
    _glGetActiveSubroutineName = (proc_glGetActiveSubroutineName)getProcAddress("glGetActiveSubroutineName");
    _glGetActiveSubroutineUniformName = (proc_glGetActiveSubroutineUniformName)getProcAddress("glGetActiveSubroutineUniformName");
    _glGetActiveSubroutineUniformiv = (proc_glGetActiveSubroutineUniformiv)getProcAddress("glGetActiveSubroutineUniformiv");
    _glGetActiveUniform = (proc_glGetActiveUniform)getProcAddress("glGetActiveUniform");
    _glGetActiveUniformBlockName = (proc_glGetActiveUniformBlockName)getProcAddress("glGetActiveUniformBlockName");
    _glGetActiveUniformBlockiv = (proc_glGetActiveUniformBlockiv)getProcAddress("glGetActiveUniformBlockiv");
    _glGetActiveUniformName = (proc_glGetActiveUniformName)getProcAddress("glGetActiveUniformName");
    _glGetActiveUniformsiv = (proc_glGetActiveUniformsiv)getProcAddress("glGetActiveUniformsiv");
    _glGetAttachedShaders = (proc_glGetAttachedShaders)getProcAddress("glGetAttachedShaders");
    _glGetAttribLocation = (proc_glGetAttribLocation)getProcAddress("glGetAttribLocation");
    _glGetBooleani_v = (proc_glGetBooleani_v)getProcAddress("glGetBooleani_v");
    _glGetBooleanv = (proc_glGetBooleanv)getProcAddress("glGetBooleanv");
    _glGetBufferParameteri64v = (proc_glGetBufferParameteri64v)getProcAddress("glGetBufferParameteri64v");
    _glGetBufferParameteriv = (proc_glGetBufferParameteriv)getProcAddress("glGetBufferParameteriv");
    _glGetBufferPointerv = (proc_glGetBufferPointerv)getProcAddress("glGetBufferPointerv");
    _glGetBufferSubData = (proc_glGetBufferSubData)getProcAddress("glGetBufferSubData");
    _glGetCompressedTexImage = (proc_glGetCompressedTexImage)getProcAddress("glGetCompressedTexImage");
    _glGetDebugMessageLog = (proc_glGetDebugMessageLog)getProcAddress("glGetDebugMessageLog");
    _glGetDoublei_v = (proc_glGetDoublei_v)getProcAddress("glGetDoublei_v");
    _glGetDoublev = (proc_glGetDoublev)getProcAddress("glGetDoublev");
    _glGetError = (proc_glGetError)getProcAddress("glGetError");
    _glGetFloati_v = (proc_glGetFloati_v)getProcAddress("glGetFloati_v");
    _glGetFloatv = (proc_glGetFloatv)getProcAddress("glGetFloatv");
    _glGetFragDataIndex = (proc_glGetFragDataIndex)getProcAddress("glGetFragDataIndex");
    _glGetFragDataLocation = (proc_glGetFragDataLocation)getProcAddress("glGetFragDataLocation");
    _glGetFramebufferAttachmentParameteriv = (proc_glGetFramebufferAttachmentParameteriv)getProcAddress("glGetFramebufferAttachmentParameteriv");
    _glGetFramebufferParameteriv = (proc_glGetFramebufferParameteriv)getProcAddress("glGetFramebufferParameteriv");
    _glGetInteger64i_v = (proc_glGetInteger64i_v)getProcAddress("glGetInteger64i_v");
    _glGetInteger64v = (proc_glGetInteger64v)getProcAddress("glGetInteger64v");
    _glGetIntegeri_v = (proc_glGetIntegeri_v)getProcAddress("glGetIntegeri_v");
    _glGetIntegerv = (proc_glGetIntegerv)getProcAddress("glGetIntegerv");
    _glGetInternalformati64v = (proc_glGetInternalformati64v)getProcAddress("glGetInternalformati64v");
    _glGetInternalformativ = (proc_glGetInternalformativ)getProcAddress("glGetInternalformativ");
    _glGetMultisamplefv = (proc_glGetMultisamplefv)getProcAddress("glGetMultisamplefv");
    _glGetObjectLabel = (proc_glGetObjectLabel)getProcAddress("glGetObjectLabel");
    _glGetObjectPtrLabel = (proc_glGetObjectPtrLabel)getProcAddress("glGetObjectPtrLabel");
    _glGetPointerv = (proc_glGetPointerv)getProcAddress("glGetPointerv");
    _glGetProgramBinary = (proc_glGetProgramBinary)getProcAddress("glGetProgramBinary");
    _glGetProgramInfoLog = (proc_glGetProgramInfoLog)getProcAddress("glGetProgramInfoLog");
    _glGetProgramInterfaceiv = (proc_glGetProgramInterfaceiv)getProcAddress("glGetProgramInterfaceiv");
    _glGetProgramPipelineInfoLog = (proc_glGetProgramPipelineInfoLog)getProcAddress("glGetProgramPipelineInfoLog");
    _glGetProgramPipelineiv = (proc_glGetProgramPipelineiv)getProcAddress("glGetProgramPipelineiv");
    _glGetProgramResourceIndex = (proc_glGetProgramResourceIndex)getProcAddress("glGetProgramResourceIndex");
    _glGetProgramResourceLocation = (proc_glGetProgramResourceLocation)getProcAddress("glGetProgramResourceLocation");
    _glGetProgramResourceLocationIndex = (proc_glGetProgramResourceLocationIndex)getProcAddress("glGetProgramResourceLocationIndex");
    _glGetProgramResourceName = (proc_glGetProgramResourceName)getProcAddress("glGetProgramResourceName");
    _glGetProgramResourceiv = (proc_glGetProgramResourceiv)getProcAddress("glGetProgramResourceiv");
    _glGetProgramStageiv = (proc_glGetProgramStageiv)getProcAddress("glGetProgramStageiv");
    _glGetProgramiv = (proc_glGetProgramiv)getProcAddress("glGetProgramiv");
    _glGetQueryIndexediv = (proc_glGetQueryIndexediv)getProcAddress("glGetQueryIndexediv");
    _glGetQueryObjecti64v = (proc_glGetQueryObjecti64v)getProcAddress("glGetQueryObjecti64v");
    _glGetQueryObjectiv = (proc_glGetQueryObjectiv)getProcAddress("glGetQueryObjectiv");
    _glGetQueryObjectui64v = (proc_glGetQueryObjectui64v)getProcAddress("glGetQueryObjectui64v");
    _glGetQueryObjectuiv = (proc_glGetQueryObjectuiv)getProcAddress("glGetQueryObjectuiv");
    _glGetQueryiv = (proc_glGetQueryiv)getProcAddress("glGetQueryiv");
    _glGetRenderbufferParameteriv = (proc_glGetRenderbufferParameteriv)getProcAddress("glGetRenderbufferParameteriv");
    _glGetSamplerParameterIiv = (proc_glGetSamplerParameterIiv)getProcAddress("glGetSamplerParameterIiv");
    _glGetSamplerParameterIuiv = (proc_glGetSamplerParameterIuiv)getProcAddress("glGetSamplerParameterIuiv");
    _glGetSamplerParameterfv = (proc_glGetSamplerParameterfv)getProcAddress("glGetSamplerParameterfv");
    _glGetSamplerParameteriv = (proc_glGetSamplerParameteriv)getProcAddress("glGetSamplerParameteriv");
    _glGetShaderInfoLog = (proc_glGetShaderInfoLog)getProcAddress("glGetShaderInfoLog");
    _glGetShaderPrecisionFormat = (proc_glGetShaderPrecisionFormat)getProcAddress("glGetShaderPrecisionFormat");
    _glGetShaderSource = (proc_glGetShaderSource)getProcAddress("glGetShaderSource");
    _glGetShaderiv = (proc_glGetShaderiv)getProcAddress("glGetShaderiv");
    _glGetString = (proc_glGetString)getProcAddress("glGetString");
    _glGetStringi = (proc_glGetStringi)getProcAddress("glGetStringi");
    _glGetSubroutineIndex = (proc_glGetSubroutineIndex)getProcAddress("glGetSubroutineIndex");
    _glGetSubroutineUniformLocation = (proc_glGetSubroutineUniformLocation)getProcAddress("glGetSubroutineUniformLocation");
    _glGetSynciv = (proc_glGetSynciv)getProcAddress("glGetSynciv");
    _glGetTexImage = (proc_glGetTexImage)getProcAddress("glGetTexImage");
    _glGetTexLevelParameterfv = (proc_glGetTexLevelParameterfv)getProcAddress("glGetTexLevelParameterfv");
    _glGetTexLevelParameteriv = (proc_glGetTexLevelParameteriv)getProcAddress("glGetTexLevelParameteriv");
    _glGetTexParameterIiv = (proc_glGetTexParameterIiv)getProcAddress("glGetTexParameterIiv");
    _glGetTexParameterIuiv = (proc_glGetTexParameterIuiv)getProcAddress("glGetTexParameterIuiv");
    _glGetTexParameterfv = (proc_glGetTexParameterfv)getProcAddress("glGetTexParameterfv");
    _glGetTexParameteriv = (proc_glGetTexParameteriv)getProcAddress("glGetTexParameteriv");
    _glGetTransformFeedbackVarying = (proc_glGetTransformFeedbackVarying)getProcAddress("glGetTransformFeedbackVarying");
    _glGetUniformBlockIndex = (proc_glGetUniformBlockIndex)getProcAddress("glGetUniformBlockIndex");
    _glGetUniformIndices = (proc_glGetUniformIndices)getProcAddress("glGetUniformIndices");
    _glGetUniformLocation = (proc_glGetUniformLocation)getProcAddress("glGetUniformLocation");
    _glGetUniformSubroutineuiv = (proc_glGetUniformSubroutineuiv)getProcAddress("glGetUniformSubroutineuiv");
    _glGetUniformdv = (proc_glGetUniformdv)getProcAddress("glGetUniformdv");
    _glGetUniformfv = (proc_glGetUniformfv)getProcAddress("glGetUniformfv");
    _glGetUniformiv = (proc_glGetUniformiv)getProcAddress("glGetUniformiv");
    _glGetUniformuiv = (proc_glGetUniformuiv)getProcAddress("glGetUniformuiv");
    _glGetVertexAttribIiv = (proc_glGetVertexAttribIiv)getProcAddress("glGetVertexAttribIiv");
    _glGetVertexAttribIuiv = (proc_glGetVertexAttribIuiv)getProcAddress("glGetVertexAttribIuiv");
    _glGetVertexAttribLdv = (proc_glGetVertexAttribLdv)getProcAddress("glGetVertexAttribLdv");
    _glGetVertexAttribPointerv = (proc_glGetVertexAttribPointerv)getProcAddress("glGetVertexAttribPointerv");
    _glGetVertexAttribdv = (proc_glGetVertexAttribdv)getProcAddress("glGetVertexAttribdv");
    _glGetVertexAttribfv = (proc_glGetVertexAttribfv)getProcAddress("glGetVertexAttribfv");
    _glGetVertexAttribiv = (proc_glGetVertexAttribiv)getProcAddress("glGetVertexAttribiv");
    _glHint = (proc_glHint)getProcAddress("glHint");
    _glInvalidateBufferData = (proc_glInvalidateBufferData)getProcAddress("glInvalidateBufferData");
    _glInvalidateBufferSubData = (proc_glInvalidateBufferSubData)getProcAddress("glInvalidateBufferSubData");
    _glInvalidateFramebuffer = (proc_glInvalidateFramebuffer)getProcAddress("glInvalidateFramebuffer");
    _glInvalidateSubFramebuffer = (proc_glInvalidateSubFramebuffer)getProcAddress("glInvalidateSubFramebuffer");
    _glInvalidateTexImage = (proc_glInvalidateTexImage)getProcAddress("glInvalidateTexImage");
    _glInvalidateTexSubImage = (proc_glInvalidateTexSubImage)getProcAddress("glInvalidateTexSubImage");
    _glIsBuffer = (proc_glIsBuffer)getProcAddress("glIsBuffer");
    _glIsEnabled = (proc_glIsEnabled)getProcAddress("glIsEnabled");
    _glIsEnabledi = (proc_glIsEnabledi)getProcAddress("glIsEnabledi");
    _glIsFramebuffer = (proc_glIsFramebuffer)getProcAddress("glIsFramebuffer");
    _glIsProgram = (proc_glIsProgram)getProcAddress("glIsProgram");
    _glIsProgramPipeline = (proc_glIsProgramPipeline)getProcAddress("glIsProgramPipeline");
    _glIsQuery = (proc_glIsQuery)getProcAddress("glIsQuery");
    _glIsRenderbuffer = (proc_glIsRenderbuffer)getProcAddress("glIsRenderbuffer");
    _glIsSampler = (proc_glIsSampler)getProcAddress("glIsSampler");
    _glIsShader = (proc_glIsShader)getProcAddress("glIsShader");
    _glIsSync = (proc_glIsSync)getProcAddress("glIsSync");
    _glIsTexture = (proc_glIsTexture)getProcAddress("glIsTexture");
    _glIsTransformFeedback = (proc_glIsTransformFeedback)getProcAddress("glIsTransformFeedback");
    _glIsVertexArray = (proc_glIsVertexArray)getProcAddress("glIsVertexArray");
    _glLineWidth = (proc_glLineWidth)getProcAddress("glLineWidth");
    _glLinkProgram = (proc_glLinkProgram)getProcAddress("glLinkProgram");
    _glLogicOp = (proc_glLogicOp)getProcAddress("glLogicOp");
    _glMapBuffer = (proc_glMapBuffer)getProcAddress("glMapBuffer");
    _glMapBufferRange = (proc_glMapBufferRange)getProcAddress("glMapBufferRange");
    _glMemoryBarrier = (proc_glMemoryBarrier)getProcAddress("glMemoryBarrier");
    _glMinSampleShading = (proc_glMinSampleShading)getProcAddress("glMinSampleShading");
    _glMultiDrawArrays = (proc_glMultiDrawArrays)getProcAddress("glMultiDrawArrays");
    _glMultiDrawArraysIndirect = (proc_glMultiDrawArraysIndirect)getProcAddress("glMultiDrawArraysIndirect");
    _glMultiDrawElements = (proc_glMultiDrawElements)getProcAddress("glMultiDrawElements");
    _glMultiDrawElementsBaseVertex = (proc_glMultiDrawElementsBaseVertex)getProcAddress("glMultiDrawElementsBaseVertex");
    _glMultiDrawElementsIndirect = (proc_glMultiDrawElementsIndirect)getProcAddress("glMultiDrawElementsIndirect");
    _glObjectLabel = (proc_glObjectLabel)getProcAddress("glObjectLabel");
    _glObjectPtrLabel = (proc_glObjectPtrLabel)getProcAddress("glObjectPtrLabel");
    _glPatchParameterfv = (proc_glPatchParameterfv)getProcAddress("glPatchParameterfv");
    _glPatchParameteri = (proc_glPatchParameteri)getProcAddress("glPatchParameteri");
    _glPauseTransformFeedback = (proc_glPauseTransformFeedback)getProcAddress("glPauseTransformFeedback");
    _glPixelStoref = (proc_glPixelStoref)getProcAddress("glPixelStoref");
    _glPixelStorei = (proc_glPixelStorei)getProcAddress("glPixelStorei");
    _glPointParameterf = (proc_glPointParameterf)getProcAddress("glPointParameterf");
    _glPointParameterfv = (proc_glPointParameterfv)getProcAddress("glPointParameterfv");
    _glPointParameteri = (proc_glPointParameteri)getProcAddress("glPointParameteri");
    _glPointParameteriv = (proc_glPointParameteriv)getProcAddress("glPointParameteriv");
    _glPointSize = (proc_glPointSize)getProcAddress("glPointSize");
    _glPolygonMode = (proc_glPolygonMode)getProcAddress("glPolygonMode");
    _glPolygonOffset = (proc_glPolygonOffset)getProcAddress("glPolygonOffset");
    _glPopDebugGroup = (proc_glPopDebugGroup)getProcAddress("glPopDebugGroup");
    _glPrimitiveRestartIndex = (proc_glPrimitiveRestartIndex)getProcAddress("glPrimitiveRestartIndex");
    _glProgramBinary = (proc_glProgramBinary)getProcAddress("glProgramBinary");
    _glProgramParameteri = (proc_glProgramParameteri)getProcAddress("glProgramParameteri");
    _glProgramUniform1d = (proc_glProgramUniform1d)getProcAddress("glProgramUniform1d");
    _glProgramUniform1dv = (proc_glProgramUniform1dv)getProcAddress("glProgramUniform1dv");
    _glProgramUniform1f = (proc_glProgramUniform1f)getProcAddress("glProgramUniform1f");
    _glProgramUniform1fv = (proc_glProgramUniform1fv)getProcAddress("glProgramUniform1fv");
    _glProgramUniform1i = (proc_glProgramUniform1i)getProcAddress("glProgramUniform1i");
    _glProgramUniform1iv = (proc_glProgramUniform1iv)getProcAddress("glProgramUniform1iv");
    _glProgramUniform1ui = (proc_glProgramUniform1ui)getProcAddress("glProgramUniform1ui");
    _glProgramUniform1uiv = (proc_glProgramUniform1uiv)getProcAddress("glProgramUniform1uiv");
    _glProgramUniform2d = (proc_glProgramUniform2d)getProcAddress("glProgramUniform2d");
    _glProgramUniform2dv = (proc_glProgramUniform2dv)getProcAddress("glProgramUniform2dv");
    _glProgramUniform2f = (proc_glProgramUniform2f)getProcAddress("glProgramUniform2f");
    _glProgramUniform2fv = (proc_glProgramUniform2fv)getProcAddress("glProgramUniform2fv");
    _glProgramUniform2i = (proc_glProgramUniform2i)getProcAddress("glProgramUniform2i");
    _glProgramUniform2iv = (proc_glProgramUniform2iv)getProcAddress("glProgramUniform2iv");
    _glProgramUniform2ui = (proc_glProgramUniform2ui)getProcAddress("glProgramUniform2ui");
    _glProgramUniform2uiv = (proc_glProgramUniform2uiv)getProcAddress("glProgramUniform2uiv");
    _glProgramUniform3d = (proc_glProgramUniform3d)getProcAddress("glProgramUniform3d");
    _glProgramUniform3dv = (proc_glProgramUniform3dv)getProcAddress("glProgramUniform3dv");
    _glProgramUniform3f = (proc_glProgramUniform3f)getProcAddress("glProgramUniform3f");
    _glProgramUniform3fv = (proc_glProgramUniform3fv)getProcAddress("glProgramUniform3fv");
    _glProgramUniform3i = (proc_glProgramUniform3i)getProcAddress("glProgramUniform3i");
    _glProgramUniform3iv = (proc_glProgramUniform3iv)getProcAddress("glProgramUniform3iv");
    _glProgramUniform3ui = (proc_glProgramUniform3ui)getProcAddress("glProgramUniform3ui");
    _glProgramUniform3uiv = (proc_glProgramUniform3uiv)getProcAddress("glProgramUniform3uiv");
    _glProgramUniform4d = (proc_glProgramUniform4d)getProcAddress("glProgramUniform4d");
    _glProgramUniform4dv = (proc_glProgramUniform4dv)getProcAddress("glProgramUniform4dv");
    _glProgramUniform4f = (proc_glProgramUniform4f)getProcAddress("glProgramUniform4f");
    _glProgramUniform4fv = (proc_glProgramUniform4fv)getProcAddress("glProgramUniform4fv");
    _glProgramUniform4i = (proc_glProgramUniform4i)getProcAddress("glProgramUniform4i");
    _glProgramUniform4iv = (proc_glProgramUniform4iv)getProcAddress("glProgramUniform4iv");
    _glProgramUniform4ui = (proc_glProgramUniform4ui)getProcAddress("glProgramUniform4ui");
    _glProgramUniform4uiv = (proc_glProgramUniform4uiv)getProcAddress("glProgramUniform4uiv");
    _glProgramUniformMatrix2dv = (proc_glProgramUniformMatrix2dv)getProcAddress("glProgramUniformMatrix2dv");
    _glProgramUniformMatrix2fv = (proc_glProgramUniformMatrix2fv)getProcAddress("glProgramUniformMatrix2fv");
    _glProgramUniformMatrix2x3dv = (proc_glProgramUniformMatrix2x3dv)getProcAddress("glProgramUniformMatrix2x3dv");
    _glProgramUniformMatrix2x3fv = (proc_glProgramUniformMatrix2x3fv)getProcAddress("glProgramUniformMatrix2x3fv");
    _glProgramUniformMatrix2x4dv = (proc_glProgramUniformMatrix2x4dv)getProcAddress("glProgramUniformMatrix2x4dv");
    _glProgramUniformMatrix2x4fv = (proc_glProgramUniformMatrix2x4fv)getProcAddress("glProgramUniformMatrix2x4fv");
    _glProgramUniformMatrix3dv = (proc_glProgramUniformMatrix3dv)getProcAddress("glProgramUniformMatrix3dv");
    _glProgramUniformMatrix3fv = (proc_glProgramUniformMatrix3fv)getProcAddress("glProgramUniformMatrix3fv");
    _glProgramUniformMatrix3x2dv = (proc_glProgramUniformMatrix3x2dv)getProcAddress("glProgramUniformMatrix3x2dv");
    _glProgramUniformMatrix3x2fv = (proc_glProgramUniformMatrix3x2fv)getProcAddress("glProgramUniformMatrix3x2fv");
    _glProgramUniformMatrix3x4dv = (proc_glProgramUniformMatrix3x4dv)getProcAddress("glProgramUniformMatrix3x4dv");
    _glProgramUniformMatrix3x4fv = (proc_glProgramUniformMatrix3x4fv)getProcAddress("glProgramUniformMatrix3x4fv");
    _glProgramUniformMatrix4dv = (proc_glProgramUniformMatrix4dv)getProcAddress("glProgramUniformMatrix4dv");
    _glProgramUniformMatrix4fv = (proc_glProgramUniformMatrix4fv)getProcAddress("glProgramUniformMatrix4fv");
    _glProgramUniformMatrix4x2dv = (proc_glProgramUniformMatrix4x2dv)getProcAddress("glProgramUniformMatrix4x2dv");
    _glProgramUniformMatrix4x2fv = (proc_glProgramUniformMatrix4x2fv)getProcAddress("glProgramUniformMatrix4x2fv");
    _glProgramUniformMatrix4x3dv = (proc_glProgramUniformMatrix4x3dv)getProcAddress("glProgramUniformMatrix4x3dv");
    _glProgramUniformMatrix4x3fv = (proc_glProgramUniformMatrix4x3fv)getProcAddress("glProgramUniformMatrix4x3fv");
    _glProvokingVertex = (proc_glProvokingVertex)getProcAddress("glProvokingVertex");
    _glPushDebugGroup = (proc_glPushDebugGroup)getProcAddress("glPushDebugGroup");
    _glQueryCounter = (proc_glQueryCounter)getProcAddress("glQueryCounter");
    _glReadBuffer = (proc_glReadBuffer)getProcAddress("glReadBuffer");
    _glReadPixels = (proc_glReadPixels)getProcAddress("glReadPixels");
    _glReleaseShaderCompiler = (proc_glReleaseShaderCompiler)getProcAddress("glReleaseShaderCompiler");
    _glRenderbufferStorage = (proc_glRenderbufferStorage)getProcAddress("glRenderbufferStorage");
    _glRenderbufferStorageMultisample = (proc_glRenderbufferStorageMultisample)getProcAddress("glRenderbufferStorageMultisample");
    _glResumeTransformFeedback = (proc_glResumeTransformFeedback)getProcAddress("glResumeTransformFeedback");
    _glSampleCoverage = (proc_glSampleCoverage)getProcAddress("glSampleCoverage");
    _glSampleMaski = (proc_glSampleMaski)getProcAddress("glSampleMaski");
    _glSamplerParameterIiv = (proc_glSamplerParameterIiv)getProcAddress("glSamplerParameterIiv");
    _glSamplerParameterIuiv = (proc_glSamplerParameterIuiv)getProcAddress("glSamplerParameterIuiv");
    _glSamplerParameterf = (proc_glSamplerParameterf)getProcAddress("glSamplerParameterf");
    _glSamplerParameterfv = (proc_glSamplerParameterfv)getProcAddress("glSamplerParameterfv");
    _glSamplerParameteri = (proc_glSamplerParameteri)getProcAddress("glSamplerParameteri");
    _glSamplerParameteriv = (proc_glSamplerParameteriv)getProcAddress("glSamplerParameteriv");
    _glScissor = (proc_glScissor)getProcAddress("glScissor");
    _glScissorArrayv = (proc_glScissorArrayv)getProcAddress("glScissorArrayv");
    _glScissorIndexed = (proc_glScissorIndexed)getProcAddress("glScissorIndexed");
    _glScissorIndexedv = (proc_glScissorIndexedv)getProcAddress("glScissorIndexedv");
    _glShaderBinary = (proc_glShaderBinary)getProcAddress("glShaderBinary");
    _glShaderSource = (proc_glShaderSource)getProcAddress("glShaderSource");
    _glShaderStorageBlockBinding = (proc_glShaderStorageBlockBinding)getProcAddress("glShaderStorageBlockBinding");
    _glStencilFunc = (proc_glStencilFunc)getProcAddress("glStencilFunc");
    _glStencilFuncSeparate = (proc_glStencilFuncSeparate)getProcAddress("glStencilFuncSeparate");
    _glStencilMask = (proc_glStencilMask)getProcAddress("glStencilMask");
    _glStencilMaskSeparate = (proc_glStencilMaskSeparate)getProcAddress("glStencilMaskSeparate");
    _glStencilOp = (proc_glStencilOp)getProcAddress("glStencilOp");
    _glStencilOpSeparate = (proc_glStencilOpSeparate)getProcAddress("glStencilOpSeparate");
    _glTexBuffer = (proc_glTexBuffer)getProcAddress("glTexBuffer");
    _glTexBufferRange = (proc_glTexBufferRange)getProcAddress("glTexBufferRange");
    _glTexImage1D = (proc_glTexImage1D)getProcAddress("glTexImage1D");
    _glTexImage2D = (proc_glTexImage2D)getProcAddress("glTexImage2D");
    _glTexImage2DMultisample = (proc_glTexImage2DMultisample)getProcAddress("glTexImage2DMultisample");
    _glTexImage3D = (proc_glTexImage3D)getProcAddress("glTexImage3D");
    _glTexImage3DMultisample = (proc_glTexImage3DMultisample)getProcAddress("glTexImage3DMultisample");
    _glTexParameterIiv = (proc_glTexParameterIiv)getProcAddress("glTexParameterIiv");
    _glTexParameterIuiv = (proc_glTexParameterIuiv)getProcAddress("glTexParameterIuiv");
    _glTexParameterf = (proc_glTexParameterf)getProcAddress("glTexParameterf");
    _glTexParameterfv = (proc_glTexParameterfv)getProcAddress("glTexParameterfv");
    _glTexParameteri = (proc_glTexParameteri)getProcAddress("glTexParameteri");
    _glTexParameteriv = (proc_glTexParameteriv)getProcAddress("glTexParameteriv");
    _glTexStorage1D = (proc_glTexStorage1D)getProcAddress("glTexStorage1D");
    _glTexStorage2D = (proc_glTexStorage2D)getProcAddress("glTexStorage2D");
    _glTexStorage2DMultisample = (proc_glTexStorage2DMultisample)getProcAddress("glTexStorage2DMultisample");
    _glTexStorage3D = (proc_glTexStorage3D)getProcAddress("glTexStorage3D");
    _glTexStorage3DMultisample = (proc_glTexStorage3DMultisample)getProcAddress("glTexStorage3DMultisample");
    _glTexSubImage1D = (proc_glTexSubImage1D)getProcAddress("glTexSubImage1D");
    _glTexSubImage2D = (proc_glTexSubImage2D)getProcAddress("glTexSubImage2D");
    _glTexSubImage3D = (proc_glTexSubImage3D)getProcAddress("glTexSubImage3D");
    _glTextureView = (proc_glTextureView)getProcAddress("glTextureView");
    _glTransformFeedbackVaryings = (proc_glTransformFeedbackVaryings)getProcAddress("glTransformFeedbackVaryings");
    _glUniform1d = (proc_glUniform1d)getProcAddress("glUniform1d");
    _glUniform1dv = (proc_glUniform1dv)getProcAddress("glUniform1dv");
    _glUniform1f = (proc_glUniform1f)getProcAddress("glUniform1f");
    _glUniform1fv = (proc_glUniform1fv)getProcAddress("glUniform1fv");
    _glUniform1i = (proc_glUniform1i)getProcAddress("glUniform1i");
    _glUniform1iv = (proc_glUniform1iv)getProcAddress("glUniform1iv");
    _glUniform1ui = (proc_glUniform1ui)getProcAddress("glUniform1ui");
    _glUniform1uiv = (proc_glUniform1uiv)getProcAddress("glUniform1uiv");
    _glUniform2d = (proc_glUniform2d)getProcAddress("glUniform2d");
    _glUniform2dv = (proc_glUniform2dv)getProcAddress("glUniform2dv");
    _glUniform2f = (proc_glUniform2f)getProcAddress("glUniform2f");
    _glUniform2fv = (proc_glUniform2fv)getProcAddress("glUniform2fv");
    _glUniform2i = (proc_glUniform2i)getProcAddress("glUniform2i");
    _glUniform2iv = (proc_glUniform2iv)getProcAddress("glUniform2iv");
    _glUniform2ui = (proc_glUniform2ui)getProcAddress("glUniform2ui");
    _glUniform2uiv = (proc_glUniform2uiv)getProcAddress("glUniform2uiv");
    _glUniform3d = (proc_glUniform3d)getProcAddress("glUniform3d");
    _glUniform3dv = (proc_glUniform3dv)getProcAddress("glUniform3dv");
    _glUniform3f = (proc_glUniform3f)getProcAddress("glUniform3f");
    _glUniform3fv = (proc_glUniform3fv)getProcAddress("glUniform3fv");
    _glUniform3i = (proc_glUniform3i)getProcAddress("glUniform3i");
    _glUniform3iv = (proc_glUniform3iv)getProcAddress("glUniform3iv");
    _glUniform3ui = (proc_glUniform3ui)getProcAddress("glUniform3ui");
    _glUniform3uiv = (proc_glUniform3uiv)getProcAddress("glUniform3uiv");
    _glUniform4d = (proc_glUniform4d)getProcAddress("glUniform4d");
    _glUniform4dv = (proc_glUniform4dv)getProcAddress("glUniform4dv");
    _glUniform4f = (proc_glUniform4f)getProcAddress("glUniform4f");
    _glUniform4fv = (proc_glUniform4fv)getProcAddress("glUniform4fv");
    _glUniform4i = (proc_glUniform4i)getProcAddress("glUniform4i");
    _glUniform4iv = (proc_glUniform4iv)getProcAddress("glUniform4iv");
    _glUniform4ui = (proc_glUniform4ui)getProcAddress("glUniform4ui");
    _glUniform4uiv = (proc_glUniform4uiv)getProcAddress("glUniform4uiv");
    _glUniformBlockBinding = (proc_glUniformBlockBinding)getProcAddress("glUniformBlockBinding");
    _glUniformMatrix2dv = (proc_glUniformMatrix2dv)getProcAddress("glUniformMatrix2dv");
    _glUniformMatrix2fv = (proc_glUniformMatrix2fv)getProcAddress("glUniformMatrix2fv");
    _glUniformMatrix2x3dv = (proc_glUniformMatrix2x3dv)getProcAddress("glUniformMatrix2x3dv");
    _glUniformMatrix2x3fv = (proc_glUniformMatrix2x3fv)getProcAddress("glUniformMatrix2x3fv");
    _glUniformMatrix2x4dv = (proc_glUniformMatrix2x4dv)getProcAddress("glUniformMatrix2x4dv");
    _glUniformMatrix2x4fv = (proc_glUniformMatrix2x4fv)getProcAddress("glUniformMatrix2x4fv");
    _glUniformMatrix3dv = (proc_glUniformMatrix3dv)getProcAddress("glUniformMatrix3dv");
    _glUniformMatrix3fv = (proc_glUniformMatrix3fv)getProcAddress("glUniformMatrix3fv");
    _glUniformMatrix3x2dv = (proc_glUniformMatrix3x2dv)getProcAddress("glUniformMatrix3x2dv");
    _glUniformMatrix3x2fv = (proc_glUniformMatrix3x2fv)getProcAddress("glUniformMatrix3x2fv");
    _glUniformMatrix3x4dv = (proc_glUniformMatrix3x4dv)getProcAddress("glUniformMatrix3x4dv");
    _glUniformMatrix3x4fv = (proc_glUniformMatrix3x4fv)getProcAddress("glUniformMatrix3x4fv");
    _glUniformMatrix4dv = (proc_glUniformMatrix4dv)getProcAddress("glUniformMatrix4dv");
    _glUniformMatrix4fv = (proc_glUniformMatrix4fv)getProcAddress("glUniformMatrix4fv");
    _glUniformMatrix4x2dv = (proc_glUniformMatrix4x2dv)getProcAddress("glUniformMatrix4x2dv");
    _glUniformMatrix4x2fv = (proc_glUniformMatrix4x2fv)getProcAddress("glUniformMatrix4x2fv");
    _glUniformMatrix4x3dv = (proc_glUniformMatrix4x3dv)getProcAddress("glUniformMatrix4x3dv");
    _glUniformMatrix4x3fv = (proc_glUniformMatrix4x3fv)getProcAddress("glUniformMatrix4x3fv");
    _glUniformSubroutinesuiv = (proc_glUniformSubroutinesuiv)getProcAddress("glUniformSubroutinesuiv");
    _glUnmapBuffer = (proc_glUnmapBuffer)getProcAddress("glUnmapBuffer");
    _glUseProgram = (proc_glUseProgram)getProcAddress("glUseProgram");
    _glUseProgramStages = (proc_glUseProgramStages)getProcAddress("glUseProgramStages");
    _glValidateProgram = (proc_glValidateProgram)getProcAddress("glValidateProgram");
    _glValidateProgramPipeline = (proc_glValidateProgramPipeline)getProcAddress("glValidateProgramPipeline");
    _glVertexAttrib1d = (proc_glVertexAttrib1d)getProcAddress("glVertexAttrib1d");
    _glVertexAttrib1dv = (proc_glVertexAttrib1dv)getProcAddress("glVertexAttrib1dv");
    _glVertexAttrib1f = (proc_glVertexAttrib1f)getProcAddress("glVertexAttrib1f");
    _glVertexAttrib1fv = (proc_glVertexAttrib1fv)getProcAddress("glVertexAttrib1fv");
    _glVertexAttrib1s = (proc_glVertexAttrib1s)getProcAddress("glVertexAttrib1s");
    _glVertexAttrib1sv = (proc_glVertexAttrib1sv)getProcAddress("glVertexAttrib1sv");
    _glVertexAttrib2d = (proc_glVertexAttrib2d)getProcAddress("glVertexAttrib2d");
    _glVertexAttrib2dv = (proc_glVertexAttrib2dv)getProcAddress("glVertexAttrib2dv");
    _glVertexAttrib2f = (proc_glVertexAttrib2f)getProcAddress("glVertexAttrib2f");
    _glVertexAttrib2fv = (proc_glVertexAttrib2fv)getProcAddress("glVertexAttrib2fv");
    _glVertexAttrib2s = (proc_glVertexAttrib2s)getProcAddress("glVertexAttrib2s");
    _glVertexAttrib2sv = (proc_glVertexAttrib2sv)getProcAddress("glVertexAttrib2sv");
    _glVertexAttrib3d = (proc_glVertexAttrib3d)getProcAddress("glVertexAttrib3d");
    _glVertexAttrib3dv = (proc_glVertexAttrib3dv)getProcAddress("glVertexAttrib3dv");
    _glVertexAttrib3f = (proc_glVertexAttrib3f)getProcAddress("glVertexAttrib3f");
    _glVertexAttrib3fv = (proc_glVertexAttrib3fv)getProcAddress("glVertexAttrib3fv");
    _glVertexAttrib3s = (proc_glVertexAttrib3s)getProcAddress("glVertexAttrib3s");
    _glVertexAttrib3sv = (proc_glVertexAttrib3sv)getProcAddress("glVertexAttrib3sv");
    _glVertexAttrib4Nbv = (proc_glVertexAttrib4Nbv)getProcAddress("glVertexAttrib4Nbv");
    _glVertexAttrib4Niv = (proc_glVertexAttrib4Niv)getProcAddress("glVertexAttrib4Niv");
    _glVertexAttrib4Nsv = (proc_glVertexAttrib4Nsv)getProcAddress("glVertexAttrib4Nsv");
    _glVertexAttrib4Nub = (proc_glVertexAttrib4Nub)getProcAddress("glVertexAttrib4Nub");
    _glVertexAttrib4Nubv = (proc_glVertexAttrib4Nubv)getProcAddress("glVertexAttrib4Nubv");
    _glVertexAttrib4Nuiv = (proc_glVertexAttrib4Nuiv)getProcAddress("glVertexAttrib4Nuiv");
    _glVertexAttrib4Nusv = (proc_glVertexAttrib4Nusv)getProcAddress("glVertexAttrib4Nusv");
    _glVertexAttrib4bv = (proc_glVertexAttrib4bv)getProcAddress("glVertexAttrib4bv");
    _glVertexAttrib4d = (proc_glVertexAttrib4d)getProcAddress("glVertexAttrib4d");
    _glVertexAttrib4dv = (proc_glVertexAttrib4dv)getProcAddress("glVertexAttrib4dv");
    _glVertexAttrib4f = (proc_glVertexAttrib4f)getProcAddress("glVertexAttrib4f");
    _glVertexAttrib4fv = (proc_glVertexAttrib4fv)getProcAddress("glVertexAttrib4fv");
    _glVertexAttrib4iv = (proc_glVertexAttrib4iv)getProcAddress("glVertexAttrib4iv");
    _glVertexAttrib4s = (proc_glVertexAttrib4s)getProcAddress("glVertexAttrib4s");
    _glVertexAttrib4sv = (proc_glVertexAttrib4sv)getProcAddress("glVertexAttrib4sv");
    _glVertexAttrib4ubv = (proc_glVertexAttrib4ubv)getProcAddress("glVertexAttrib4ubv");
    _glVertexAttrib4uiv = (proc_glVertexAttrib4uiv)getProcAddress("glVertexAttrib4uiv");
    _glVertexAttrib4usv = (proc_glVertexAttrib4usv)getProcAddress("glVertexAttrib4usv");
    _glVertexAttribBinding = (proc_glVertexAttribBinding)getProcAddress("glVertexAttribBinding");
    _glVertexAttribDivisor = (proc_glVertexAttribDivisor)getProcAddress("glVertexAttribDivisor");
    _glVertexAttribFormat = (proc_glVertexAttribFormat)getProcAddress("glVertexAttribFormat");
    _glVertexAttribI1i = (proc_glVertexAttribI1i)getProcAddress("glVertexAttribI1i");
    _glVertexAttribI1iv = (proc_glVertexAttribI1iv)getProcAddress("glVertexAttribI1iv");
    _glVertexAttribI1ui = (proc_glVertexAttribI1ui)getProcAddress("glVertexAttribI1ui");
    _glVertexAttribI1uiv = (proc_glVertexAttribI1uiv)getProcAddress("glVertexAttribI1uiv");
    _glVertexAttribI2i = (proc_glVertexAttribI2i)getProcAddress("glVertexAttribI2i");
    _glVertexAttribI2iv = (proc_glVertexAttribI2iv)getProcAddress("glVertexAttribI2iv");
    _glVertexAttribI2ui = (proc_glVertexAttribI2ui)getProcAddress("glVertexAttribI2ui");
    _glVertexAttribI2uiv = (proc_glVertexAttribI2uiv)getProcAddress("glVertexAttribI2uiv");
    _glVertexAttribI3i = (proc_glVertexAttribI3i)getProcAddress("glVertexAttribI3i");
    _glVertexAttribI3iv = (proc_glVertexAttribI3iv)getProcAddress("glVertexAttribI3iv");
    _glVertexAttribI3ui = (proc_glVertexAttribI3ui)getProcAddress("glVertexAttribI3ui");
    _glVertexAttribI3uiv = (proc_glVertexAttribI3uiv)getProcAddress("glVertexAttribI3uiv");
    _glVertexAttribI4bv = (proc_glVertexAttribI4bv)getProcAddress("glVertexAttribI4bv");
    _glVertexAttribI4i = (proc_glVertexAttribI4i)getProcAddress("glVertexAttribI4i");
    _glVertexAttribI4iv = (proc_glVertexAttribI4iv)getProcAddress("glVertexAttribI4iv");
    _glVertexAttribI4sv = (proc_glVertexAttribI4sv)getProcAddress("glVertexAttribI4sv");
    _glVertexAttribI4ubv = (proc_glVertexAttribI4ubv)getProcAddress("glVertexAttribI4ubv");
    _glVertexAttribI4ui = (proc_glVertexAttribI4ui)getProcAddress("glVertexAttribI4ui");
    _glVertexAttribI4uiv = (proc_glVertexAttribI4uiv)getProcAddress("glVertexAttribI4uiv");
    _glVertexAttribI4usv = (proc_glVertexAttribI4usv)getProcAddress("glVertexAttribI4usv");
    _glVertexAttribIFormat = (proc_glVertexAttribIFormat)getProcAddress("glVertexAttribIFormat");
    _glVertexAttribIPointer = (proc_glVertexAttribIPointer)getProcAddress("glVertexAttribIPointer");
    _glVertexAttribL1d = (proc_glVertexAttribL1d)getProcAddress("glVertexAttribL1d");
    _glVertexAttribL1dv = (proc_glVertexAttribL1dv)getProcAddress("glVertexAttribL1dv");
    _glVertexAttribL2d = (proc_glVertexAttribL2d)getProcAddress("glVertexAttribL2d");
    _glVertexAttribL2dv = (proc_glVertexAttribL2dv)getProcAddress("glVertexAttribL2dv");
    _glVertexAttribL3d = (proc_glVertexAttribL3d)getProcAddress("glVertexAttribL3d");
    _glVertexAttribL3dv = (proc_glVertexAttribL3dv)getProcAddress("glVertexAttribL3dv");
    _glVertexAttribL4d = (proc_glVertexAttribL4d)getProcAddress("glVertexAttribL4d");
    _glVertexAttribL4dv = (proc_glVertexAttribL4dv)getProcAddress("glVertexAttribL4dv");
    _glVertexAttribLFormat = (proc_glVertexAttribLFormat)getProcAddress("glVertexAttribLFormat");
    _glVertexAttribLPointer = (proc_glVertexAttribLPointer)getProcAddress("glVertexAttribLPointer");
    _glVertexAttribP1ui = (proc_glVertexAttribP1ui)getProcAddress("glVertexAttribP1ui");
    _glVertexAttribP1uiv = (proc_glVertexAttribP1uiv)getProcAddress("glVertexAttribP1uiv");
    _glVertexAttribP2ui = (proc_glVertexAttribP2ui)getProcAddress("glVertexAttribP2ui");
    _glVertexAttribP2uiv = (proc_glVertexAttribP2uiv)getProcAddress("glVertexAttribP2uiv");
    _glVertexAttribP3ui = (proc_glVertexAttribP3ui)getProcAddress("glVertexAttribP3ui");
    _glVertexAttribP3uiv = (proc_glVertexAttribP3uiv)getProcAddress("glVertexAttribP3uiv");
    _glVertexAttribP4ui = (proc_glVertexAttribP4ui)getProcAddress("glVertexAttribP4ui");
    _glVertexAttribP4uiv = (proc_glVertexAttribP4uiv)getProcAddress("glVertexAttribP4uiv");
    _glVertexAttribPointer = (proc_glVertexAttribPointer)getProcAddress("glVertexAttribPointer");
    _glVertexBindingDivisor = (proc_glVertexBindingDivisor)getProcAddress("glVertexBindingDivisor");
    _glViewport = (proc_glViewport)getProcAddress("glViewport");
    _glViewportArrayv = (proc_glViewportArrayv)getProcAddress("glViewportArrayv");
    _glViewportIndexedf = (proc_glViewportIndexedf)getProcAddress("glViewportIndexedf");
    _glViewportIndexedfv = (proc_glViewportIndexedfv)getProcAddress("glViewportIndexedfv");
    _glWaitSync = (proc_glWaitSync)getProcAddress("glWaitSync");
}
void gizmo_initGizmos() {
}
