//---------------------------------------------------------------------------
#ifndef MainDMH
#define MainDMH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <IdException.hpp>
#include <IdHTTPWebBrokerBridge.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TdmMain : public TDataModule
{
__published:	// IDE-managed Components
	void __fastcall DataModuleCreate(TObject *Sender);
private:	// User declarations
	TIdHTTPWebBrokerBridge *FServer;
public:		// User declarations
	__fastcall TdmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdmMain *dmMain;
//---------------------------------------------------------------------------
#endif
