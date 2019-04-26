 
//---------------------------------------------------------------------------

#ifndef FormUnit1H
#define FormUnit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Forms.hpp>
#include <IdHTTPWebBrokerBridge.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *EditPort;
	TButton *ButtonStop;
	TButton *ButtonStart;
	TLabel *Label1;
	TTimer *Timer1;
	void __fastcall ButtonStartClick(TObject *Sender);
	void __fastcall ButtonStopClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
	TIdHTTPWebBrokerBridge *FServer;
    void __fastcall ApplicationIdle(System::TObject* Sender, bool &Done);
    
	void __fastcall StartServer();
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif


