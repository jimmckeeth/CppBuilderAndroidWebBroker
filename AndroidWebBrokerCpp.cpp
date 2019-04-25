//---------------------------------------------------------------------------
#include <fmx.h>
#pragma hdrstop
#include <Web.WebReq.hpp>
#ifdef USEPACKAGES
#pragma link "IndySystem.bpi"
#pragma link "IndyCore.bpi"
#pragma link "IndyProtocols.bpi"
#else
#pragma comment(lib, "IndySystem")
#pragma comment(lib, "IndyCore")
#pragma comment(lib, "IndyProtocols")
#endif
#include <IdException.hpp>
#pragma link "IdHTTPWebBrokerBridge"
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("WebModuleUnit1.cpp", WebModule1); /* TWebModule: File Type */
USEFORM("MainDM.cpp", dmMain); /* TDataModule: File Type */
//---------------------------------------------------------------------------
extern PACKAGE TComponentClass WebModuleClass;
extern "C" int FMXmain()
{
  try
  {
	if (WebRequestHandler() != NULL)
	{
	  WebRequestHandler()->WebModuleClass = WebModuleClass;
	}
    Application->Initialize();
	Application->CreateForm(__classid(TdmMain), &dmMain);
		Application->Run();
  }
  catch (Exception &exception)
  {
	Sysutils::ShowException(&exception, System::ExceptAddr());
  }
  return 0;
}
//---------------------------------------------------------------------------
