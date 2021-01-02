#include "Al.h"
#include "AllegroLibraryHeaders.h"

#include <msclr/marshal.h>

namespace Steslos::AllegroClr
{
	using namespace msclr::interop;

	Boolean Al::MakeDirectory(String^ path)
	{
		marshal_context marshalContext;
		auto nativePath = marshalContext.marshal_as<const char*>(path);
		return al_make_directory(nativePath);
	}
}
