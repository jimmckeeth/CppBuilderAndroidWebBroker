 
//---------------------------------------------------------------------------
#include "WebModuleUnit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "FMX.Controls.TControl"
#pragma resource "*.dfm"

TComponentClass WebModuleClass = __classid(TWebModule1);
//---------------------------------------------------------------------------
__fastcall TWebModule1::TWebModule1(TComponent* Owner)
	: TWebModule(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TWebModule1::WebModule1DefaultHandlerAction(TObject *Sender, TWebRequest *Request,
          TWebResponse *Response, bool &Handled)
{
  Response->Content =
    "<html>"
    "<head><title>Web Server Application</title></head>"
	"<body><h1>Web Server Application</h1><h2>Hello WebBroker on Android!</h2></body>"
	"</html>";
}
//---------------------------------------------------------------------------



