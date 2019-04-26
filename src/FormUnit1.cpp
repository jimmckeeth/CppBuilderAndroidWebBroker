 
//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "FormUnit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonStartClick(TObject *Sender)
{
  StartServer();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonStopClick(TObject *Sender)
{
  FServer->Active = false;
  FServer->Bindings->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ApplicationIdle(TObject *Sender, bool &Done)
{
  ButtonStart->Enabled = !FServer->Active;
  ButtonStop->Enabled = FServer->Active;
  EditPort->Enabled = !FServer->Active;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StartServer()
{
  if (!FServer->Active)
  {
    FServer->Bindings->Clear();
    FServer->DefaultPort = StrToInt(EditPort->Text);
    FServer->Active = true;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  FServer = new TIdHTTPWebBrokerBridge(this);
  ::Fmx::Forms::Application->OnIdle = ApplicationIdle;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
    Timer1->Enabled = False;
	StartServer();
}
//---------------------------------------------------------------------------
