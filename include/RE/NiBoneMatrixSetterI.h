#pragma once


namespace RE
{
	class NiBoneMatrixSetterI
	{
	public:
		virtual ~NiBoneMatrixSetterI();	// 00

		// add
		virtual void Unk_01(void);		// 01
	};
	STATIC_ASSERT(sizeof(NiBoneMatrixSetterI) == 0x8);
}
