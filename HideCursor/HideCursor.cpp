#include <windows.h>
#include <iostream>

#define OCR_NORMAL 32512

int main()
{
	SetConsoleTitle(L"Hide cursor");
	std::cout << "Cursor is hidden. Press \"Enter\" to return it.\n";
	HCURSOR CurCursor = CopyCursor(LoadCursor(0, IDC_ARROW));
	HCURSOR CursorEmpty = LoadCursorFromFile(L"1.cur");
	SetSystemCursor(CursorEmpty, OCR_NORMAL);
	system("pause");
	SetSystemCursor(CurCursor, OCR_NORMAL);
}