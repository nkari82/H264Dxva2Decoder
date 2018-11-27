//----------------------------------------------------------------------------------------------
// StdAfx.h
//----------------------------------------------------------------------------------------------
#ifndef STDAFX_H
#define STDAFX_H

#pragma once
#define WIN32_LEAN_AND_MEAN
#define STRICT

#pragma comment(lib, "mfplat")
#pragma comment(lib, "shlwapi")
#pragma comment(lib, "mfuuid")
#pragma comment(lib, "strmiids")
#pragma comment(lib, "dxva2")
#pragma comment(lib, "d3d9")

//----------------------------------------------------------------------------------------------
// Microsoft Windows SDK for Windows 7
#include <WinSDKVer.h>
#include <new>
#include <windows.h>
#include <tchar.h>
#include <assert.h>
#include <strsafe.h>
#ifdef _DEBUG
#include <crtdbg.h>
#endif
#include <initguid.h>
#include <Shlwapi.h>
#include <mfapi.h>
#include <mfidl.h>
#include <mferror.h>
#include <evr.h>
#include <uuids.h>
#include <d3d9.h>
#include <Evr9.h>
#include <dxva.h>
#include <dxvahd.h>

//----------------------------------------------------------------------------------------------
// STL
#include <deque>
using std::deque;
#include <string>
using std::wstring;
#include <vector>
using std::vector;

//----------------------------------------------------------------------------------------------
// Common Project Files
#ifdef _DEBUG
#define MF_USE_LOGGING 1
//#define MF_TRACE_BYTESTREAM
#else
#define MF_USE_LOGGING 0
#endif

#include ".\Common\MFMacro.h"
#include ".\Common\MFTrace.h"
#include ".\Common\MFLogging.h"
#include ".\Common\MFTExternTrace.h"
#include ".\Common\MFReadParam.h"
#include ".\Common\MFCriticSection.h"
#include ".\Common\MFBuffer.h"
#include ".\Common\MFLightBuffer.h"

//----------------------------------------------------------------------------------------------
// Project Files
#include "Mp4Definition.h"
#include "H264Definition.h"
#include "BitStream.h"
#include "MFByteStream.h"
#include "H264AtomParser.h"
#include "H264NaluParser.h"
#include "Dxva2Decoder.h"

#define WINDOWAPPLICATION_CLASS L"WindowApplication"

extern BOOL g_bStopApplication;

#endif