#include "frmmenu.h"
#include "frmLogin.h"

using namespace System::Windows::Forms;
using namespace PI2021IIIPROYECTO3;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PI2021IIIPROYECTO3::frmLogin frm;
	Application::Run(%frm );
}

