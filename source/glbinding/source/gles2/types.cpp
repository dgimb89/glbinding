
#include <glbinding/gles2/types.h>

#include <glbinding/Meta.h>
#include "../Meta_Maps.h"

#include <bitset>
#include <sstream>

template <typename T>
std::string bitfieldString(T value, const std::unordered_map<T, std::string> & map)
{
	using U = typename std::underlying_type<T>::type;
	
	std::bitset<sizeof(U)*8> bits(static_cast<U>(value));
	
	std::stringstream ss;
	bool first = true;
	
	for (size_t i = 0; i<sizeof(U)*8; ++i)
	{
		if (bits.test(i))
		{
			if (first)
			{
				first = false;
			}
			else
			{
				ss << " | ";
			}
			
			U bit = 1 << i;
			auto it = map.find(static_cast<T>(bit));
			if (it == map.end())
			{
				ss << "1 << " << i;
			}
			else
			{
				ss << it->second;
			}
		}
	}
	
	return ss.str();
};




std::ostream & operator<<(std::ostream & stream, const gl::GLenum & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}


gl::GLenum operator+(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<gl::GLenum>(static_cast<std::underlying_type<gl::GLenum>::type>(a) + b);
}

gl::GLenum operator-(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<gl::GLenum>(static_cast<std::underlying_type<gl::GLenum>::type>(a) - b);
}


bool operator==(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) == b;
}

bool operator!=(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) != b;
}

bool operator<(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) < b;
}

bool operator<=(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) <= b;
}

bool operator>(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) > b;
}

bool operator>=(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) >= b;
}

bool operator==(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a == static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator!=(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a != static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator<(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a < static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator<=(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a <= static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator>(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a > static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator>=(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a >= static_cast<std::underlying_type<gl::GLenum>::type>(b);
}



std::ostream & operator<<(std::ostream & stream, const gl::GLboolean & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}



std::ostream & operator<<(std::ostream & stream, const gl::GLextension & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}



std::ostream & operator<<(std::ostream & stream, const gl::AttribMask & value)
{
    stream << bitfieldString<gl::AttribMask>(value, glbinding::Meta_StringsByAttribMask);
    return stream;
}

namespace glbinding
{

gl::AttribMask operator|(const gl::AttribMask & a, const gl::AttribMask & b)
{
    return static_cast<gl::AttribMask>(static_cast<std::underlying_type<gl::AttribMask>::type>(a) | static_cast<std::underlying_type<gl::AttribMask>::type>(b));
}

gl::AttribMask operator&(const gl::AttribMask & a, const gl::AttribMask & b)
{
    return static_cast<gl::AttribMask>(static_cast<std::underlying_type<gl::AttribMask>::type>(a) & static_cast<std::underlying_type<gl::AttribMask>::type>(b));
}

gl::AttribMask operator^(const gl::AttribMask & a, const gl::AttribMask & b)
{
    return static_cast<gl::AttribMask>(static_cast<std::underlying_type<gl::AttribMask>::type>(a) ^ static_cast<std::underlying_type<gl::AttribMask>::type>(b));
}

}



std::ostream & operator<<(std::ostream & stream, const gl::BufferBitQCOM & value)
{
    stream << bitfieldString<gl::BufferBitQCOM>(value, glbinding::Meta_StringsByBufferBitQCOM);
    return stream;
}

namespace glbinding
{

gl::BufferBitQCOM operator|(const gl::BufferBitQCOM & a, const gl::BufferBitQCOM & b)
{
    return static_cast<gl::BufferBitQCOM>(static_cast<std::underlying_type<gl::BufferBitQCOM>::type>(a) | static_cast<std::underlying_type<gl::BufferBitQCOM>::type>(b));
}

gl::BufferBitQCOM operator&(const gl::BufferBitQCOM & a, const gl::BufferBitQCOM & b)
{
    return static_cast<gl::BufferBitQCOM>(static_cast<std::underlying_type<gl::BufferBitQCOM>::type>(a) & static_cast<std::underlying_type<gl::BufferBitQCOM>::type>(b));
}

gl::BufferBitQCOM operator^(const gl::BufferBitQCOM & a, const gl::BufferBitQCOM & b)
{
    return static_cast<gl::BufferBitQCOM>(static_cast<std::underlying_type<gl::BufferBitQCOM>::type>(a) ^ static_cast<std::underlying_type<gl::BufferBitQCOM>::type>(b));
}

}



std::ostream & operator<<(std::ostream & stream, const gl::ClearBufferMask & value)
{
    stream << bitfieldString<gl::ClearBufferMask>(value, glbinding::Meta_StringsByClearBufferMask);
    return stream;
}

namespace glbinding
{

gl::ClearBufferMask operator|(const gl::ClearBufferMask & a, const gl::ClearBufferMask & b)
{
    return static_cast<gl::ClearBufferMask>(static_cast<std::underlying_type<gl::ClearBufferMask>::type>(a) | static_cast<std::underlying_type<gl::ClearBufferMask>::type>(b));
}

gl::ClearBufferMask operator&(const gl::ClearBufferMask & a, const gl::ClearBufferMask & b)
{
    return static_cast<gl::ClearBufferMask>(static_cast<std::underlying_type<gl::ClearBufferMask>::type>(a) & static_cast<std::underlying_type<gl::ClearBufferMask>::type>(b));
}

gl::ClearBufferMask operator^(const gl::ClearBufferMask & a, const gl::ClearBufferMask & b)
{
    return static_cast<gl::ClearBufferMask>(static_cast<std::underlying_type<gl::ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<gl::ClearBufferMask>::type>(b));
}

}



std::ostream & operator<<(std::ostream & stream, const gl::ContextFlagMask & value)
{
    stream << bitfieldString<gl::ContextFlagMask>(value, glbinding::Meta_StringsByContextFlagMask);
    return stream;
}

namespace glbinding
{

gl::ContextFlagMask operator|(const gl::ContextFlagMask & a, const gl::ContextFlagMask & b)
{
    return static_cast<gl::ContextFlagMask>(static_cast<std::underlying_type<gl::ContextFlagMask>::type>(a) | static_cast<std::underlying_type<gl::ContextFlagMask>::type>(b));
}

gl::ContextFlagMask operator&(const gl::ContextFlagMask & a, const gl::ContextFlagMask & b)
{
    return static_cast<gl::ContextFlagMask>(static_cast<std::underlying_type<gl::ContextFlagMask>::type>(a) & static_cast<std::underlying_type<gl::ContextFlagMask>::type>(b));
}

gl::ContextFlagMask operator^(const gl::ContextFlagMask & a, const gl::ContextFlagMask & b)
{
    return static_cast<gl::ContextFlagMask>(static_cast<std::underlying_type<gl::ContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<gl::ContextFlagMask>::type>(b));
}

}



std::ostream & operator<<(std::ostream & stream, const gl::MapBufferUsageMask & value)
{
    stream << bitfieldString<gl::MapBufferUsageMask>(value, glbinding::Meta_StringsByMapBufferUsageMask);
    return stream;
}

namespace glbinding
{

gl::MapBufferUsageMask operator|(const gl::MapBufferUsageMask & a, const gl::MapBufferUsageMask & b)
{
    return static_cast<gl::MapBufferUsageMask>(static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(a) | static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(b));
}

gl::MapBufferUsageMask operator&(const gl::MapBufferUsageMask & a, const gl::MapBufferUsageMask & b)
{
    return static_cast<gl::MapBufferUsageMask>(static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(a) & static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(b));
}

gl::MapBufferUsageMask operator^(const gl::MapBufferUsageMask & a, const gl::MapBufferUsageMask & b)
{
    return static_cast<gl::MapBufferUsageMask>(static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(a) ^ static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(b));
}

}



std::ostream & operator<<(std::ostream & stream, const gl::MemoryBarrierMask & value)
{
    stream << bitfieldString<gl::MemoryBarrierMask>(value, glbinding::Meta_StringsByMemoryBarrierMask);
    return stream;
}

namespace glbinding
{

gl::MemoryBarrierMask operator|(const gl::MemoryBarrierMask & a, const gl::MemoryBarrierMask & b)
{
    return static_cast<gl::MemoryBarrierMask>(static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(a) | static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(b));
}

gl::MemoryBarrierMask operator&(const gl::MemoryBarrierMask & a, const gl::MemoryBarrierMask & b)
{
    return static_cast<gl::MemoryBarrierMask>(static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(a) & static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(b));
}

gl::MemoryBarrierMask operator^(const gl::MemoryBarrierMask & a, const gl::MemoryBarrierMask & b)
{
    return static_cast<gl::MemoryBarrierMask>(static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(a) ^ static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(b));
}

}



std::ostream & operator<<(std::ostream & stream, const gl::PerformanceQueryCapsMaskINTEL & value)
{
    stream << bitfieldString<gl::PerformanceQueryCapsMaskINTEL>(value, glbinding::Meta_StringsByPerformanceQueryCapsMaskINTEL);
    return stream;
}

namespace glbinding
{

gl::PerformanceQueryCapsMaskINTEL operator|(const gl::PerformanceQueryCapsMaskINTEL & a, const gl::PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<gl::PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(a) | static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(b));
}

gl::PerformanceQueryCapsMaskINTEL operator&(const gl::PerformanceQueryCapsMaskINTEL & a, const gl::PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<gl::PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(a) & static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(b));
}

gl::PerformanceQueryCapsMaskINTEL operator^(const gl::PerformanceQueryCapsMaskINTEL & a, const gl::PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<gl::PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(a) ^ static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(b));
}

}



std::ostream & operator<<(std::ostream & stream, const gl::SyncObjectMask & value)
{
    stream << bitfieldString<gl::SyncObjectMask>(value, glbinding::Meta_StringsBySyncObjectMask);
    return stream;
}

namespace glbinding
{

gl::SyncObjectMask operator|(const gl::SyncObjectMask & a, const gl::SyncObjectMask & b)
{
    return static_cast<gl::SyncObjectMask>(static_cast<std::underlying_type<gl::SyncObjectMask>::type>(a) | static_cast<std::underlying_type<gl::SyncObjectMask>::type>(b));
}

gl::SyncObjectMask operator&(const gl::SyncObjectMask & a, const gl::SyncObjectMask & b)
{
    return static_cast<gl::SyncObjectMask>(static_cast<std::underlying_type<gl::SyncObjectMask>::type>(a) & static_cast<std::underlying_type<gl::SyncObjectMask>::type>(b));
}

gl::SyncObjectMask operator^(const gl::SyncObjectMask & a, const gl::SyncObjectMask & b)
{
    return static_cast<gl::SyncObjectMask>(static_cast<std::underlying_type<gl::SyncObjectMask>::type>(a) ^ static_cast<std::underlying_type<gl::SyncObjectMask>::type>(b));
}

}



std::ostream & operator<<(std::ostream & stream, const gl::UseProgramStageMask & value)
{
    stream << bitfieldString<gl::UseProgramStageMask>(value, glbinding::Meta_StringsByUseProgramStageMask);
    return stream;
}

namespace glbinding
{

gl::UseProgramStageMask operator|(const gl::UseProgramStageMask & a, const gl::UseProgramStageMask & b)
{
    return static_cast<gl::UseProgramStageMask>(static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(a) | static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(b));
}

gl::UseProgramStageMask operator&(const gl::UseProgramStageMask & a, const gl::UseProgramStageMask & b)
{
    return static_cast<gl::UseProgramStageMask>(static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(a) & static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(b));
}

gl::UseProgramStageMask operator^(const gl::UseProgramStageMask & a, const gl::UseProgramStageMask & b)
{
    return static_cast<gl::UseProgramStageMask>(static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(a) ^ static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(b));
}

}



std::ostream & operator<<(std::ostream & stream, const gl::UnusedMask & value)
{
    stream << bitfieldString<gl::UnusedMask>(value, glbinding::Meta_StringsByUnusedMask);
    return stream;
}

namespace glbinding
{

gl::UnusedMask operator|(const gl::UnusedMask & a, const gl::UnusedMask & b)
{
    return static_cast<gl::UnusedMask>(static_cast<std::underlying_type<gl::UnusedMask>::type>(a) | static_cast<std::underlying_type<gl::UnusedMask>::type>(b));
}

gl::UnusedMask operator&(const gl::UnusedMask & a, const gl::UnusedMask & b)
{
    return static_cast<gl::UnusedMask>(static_cast<std::underlying_type<gl::UnusedMask>::type>(a) & static_cast<std::underlying_type<gl::UnusedMask>::type>(b));
}

gl::UnusedMask operator^(const gl::UnusedMask & a, const gl::UnusedMask & b)
{
    return static_cast<gl::UnusedMask>(static_cast<std::underlying_type<gl::UnusedMask>::type>(a) ^ static_cast<std::underlying_type<gl::UnusedMask>::type>(b));
}

}



std::ostream & operator<<(std::ostream & stream, const gl::BufferAccessMask & value)
{
    stream << bitfieldString<gl::BufferAccessMask>(value, glbinding::Meta_StringsByBufferAccessMask);
    return stream;
}

namespace glbinding
{

gl::BufferAccessMask operator|(const gl::BufferAccessMask & a, const gl::BufferAccessMask & b)
{
    return static_cast<gl::BufferAccessMask>(static_cast<std::underlying_type<gl::BufferAccessMask>::type>(a) | static_cast<std::underlying_type<gl::BufferAccessMask>::type>(b));
}

gl::BufferAccessMask operator&(const gl::BufferAccessMask & a, const gl::BufferAccessMask & b)
{
    return static_cast<gl::BufferAccessMask>(static_cast<std::underlying_type<gl::BufferAccessMask>::type>(a) & static_cast<std::underlying_type<gl::BufferAccessMask>::type>(b));
}

gl::BufferAccessMask operator^(const gl::BufferAccessMask & a, const gl::BufferAccessMask & b)
{
    return static_cast<gl::BufferAccessMask>(static_cast<std::underlying_type<gl::BufferAccessMask>::type>(a) ^ static_cast<std::underlying_type<gl::BufferAccessMask>::type>(b));
}

}

