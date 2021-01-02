#pragma once

namespace Steslos::AllegroClr
{
	using namespace System;

	template <class T>
	public ref class NativePointerWrapper
	{
	public:
		property Boolean IsNull
		{
			Boolean get()
			{
				return GetNativePointer() == nullptr;
			}
		}

	private:
		IntPtr _nativePointer;

	protected:
		NativePointerWrapper(T nativePointer)
		{
			SetNativePointer(nativePointer);
		}

		virtual ~NativePointerWrapper() {};
		!NativePointerWrapper() {};

	internal:
		T GetNativePointer()
		{
			return static_cast<T>(_nativePointer.ToPointer());
		}

		void SetNativePointer(T newNativePointer)
		{
			_nativePointer = IntPtr(newNativePointer);
		}

		void SetNativePointerNull()
		{
			SetNativePointer(nullptr);
		}
	};
}
