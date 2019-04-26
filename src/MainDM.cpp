//---------------------------------------------------------------------------
#pragma hdrstop
#include "MainDM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "FMX.Controls.TControl"
#pragma resource "*.dfm"
TdmMain *dmMain;
//---------------------------------------------------------------------------
__fastcall TdmMain::TdmMain(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TdmMain::DataModuleCreate(TObject *Sender)
{
  FServer = new TIdHTTPWebBrokerBridge(this);
  if (!FServer->Active)
  {
	FServer->Bindings->Clear();
	FServer->DefaultPort = StrToInt(8000);
	FServer->Active = true;
  }
}
//---------------------------------------------------------------------------
