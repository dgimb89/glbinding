#pragma once

#include <glbinding/gles2/nogl.h>
#include <glbinding/gles2/types.h>


namespace gles2
{

enum class GLboolean : unsigned char
{
	GL_FALSE = 0,
    GL_TRUE = 1
};

// import booleans to namespace

static const GLboolean GL_FALSE = GLboolean::GL_FALSE;
static const GLboolean GL_TRUE = GLboolean::GL_TRUE;

} // namespace gles2
