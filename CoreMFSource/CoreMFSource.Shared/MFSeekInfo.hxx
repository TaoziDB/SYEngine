#pragma once

#include "pch.h"

#ifndef __IMFSeekInfo_INTERFACE_DEFINED__
#if (WINVER >= _WIN32_WINNT_WIN8) 

MIDL_INTERFACE("26AFEA53-D9ED-42B5-AB80-E64F9EE34779")
IMFSeekInfo : public IUnknown
{
public:
	virtual HRESULT STDMETHODCALLTYPE GetNearestKeyFrames(const GUID*,const PROPVARIANT*,PROPVARIANT*,PROPVARIANT*);
};

EXTERN_C const GUID MF_SCRUBBING_SERVICE;
#endif
#endif