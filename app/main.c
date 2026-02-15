#include <efi.h>
#include <efilib.h>


EFI_STATUS EFIAPI
efi_main (EFI_HANDLE h_img, EFI_SYSTEM_TABLE* systbl)
{

	const CHAR8 hello[] = "Hello World!";

	const CHAR8 asciiart[] =
	 "  _      _       	\n"
	 " | |_  _(_)_   __	\n"
	 " | \\ \\/ / \\ \\ / /	\n"
	 " | |>  <| |\\ V / 	\n"
	 " |_/_/\\_\\_| \\_/  	\n"
	 "                 	\n";

	InitializeLib(h_img, systbl);
	AsciiPrint(asciiart);
	AsciiPrint(hello);

	while((volatile int)1) {}

	return EFI_SUCCESS;
}
