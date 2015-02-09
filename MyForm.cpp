#include "MyForm.h"

using namespace ProjectMusic2Klavar;
[STAThreadAttribute] // single-threaded apartment for COM
int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles(); // default WindowsXP look and feel
	Application::SetCompatibleTextRenderingDefault(false); // not compatible with NET 1.1, but richer GDI
	Application::Run(gcnew MyForm());
	return 0;
}