#include <Windows.h>


LRESULT CALLBACK WindowProcedure(HWND hwnd, unsigned int message, WPARAM wParam, LPARAM lParam);

class MyWindow {
	public:
		MyWindow(WNDPROC winProc, char const * className, HINSTANCE hInst);
		void Register() {
			::RegisterClass(&_class);
		}
	private:
		WNDCLASS _class;
};

MyWindow::MyWindow(WNDPROC winProc, char const * className, HINSTANCE hInst) {
	_class.style         = 0;			// Windows Style (future article)
	_class.lpfnWndProc   = winProc;			// The Window Procedure
	_class.cbClsExtra    = 0;			// Extra memory for this class
	_class.cbWndExtra    = 0;			// Extra memory for this window
	_class.hInstance     = hInst;			// The definition of the instance of the application
	_class.hIcon         = 0;			// The icon in the upper left corner
	_class.hCursor       = ::LoadCursor(0, IDC_ARROW);	// The cursor for this window
	_class.hbrBackground = (HBRUSH)(30);	// The background color for this window
	_class.lpszMenuName  = 0;			// The name of the class for the menu for this window
	_class.lpszClassName = className;		// The name of this class
}
class WindowCreator {
	public:
		WindowCreator() : _hwnd(0) {}	// Inline contructor
		WindowCreator(char const * caption, char const * className, HINSTANCE hInstance);
		void SetVisible(int cmdShow) {	// Makes the window visible after it is created
			::ShowWindow(_hwnd, cmdShow);
			::UpdateWindow(_hwnd);
		}
	protected:
		HWND _hwnd;
};

WindowCreator::WindowCreator(char const * caption, char const * className, HINSTANCE hInstance) {
	_hwnd = ::CreateWindow(
		className,		// Name of the registered window class
		caption,		// Window Caption to appear at the top of the frame
		WS_OVERLAPPEDWINDOW,	// The style of window to produce (overlapped is standard window for desktop)
		CW_USEDEFAULT,	// x position of the window
		CW_USEDEFAULT,	// y position of the window
		CW_USEDEFAULT,	// width of the window
		CW_USEDEFAULT,	// height of the window
		0,		// The handle to the parent frame (we will use this later to simulate an owned window)
		0,		// The handle to the menu for this window (we will learn to create menus in a later article)
		hInstance, 	// the application instance
		0);		// window creation data
}
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, char * cmdParam, int cmdShow) {
	char className[] = "Program";
	MSG  msg;
	int  status;
	
	MyWindow myWindow(WindowProcedure, className, hInst);
	myWindow.Register();
	
	WindowCreator window("Programming Is Fun!", className, hInst);
	window.SetVisible(cmdShow);	
	
	while((status = ::GetMessage(&msg, 0, 0, 0)) != 0) {
		if(status == -1) {
			return -1;
		}
		
		::DispatchMessage(&msg);
	}


	
	return  msg.wParam;
}
LRESULT CALLBACK WindowProcedure(HWND hwnd, unsigned int message, WPARAM wParam, LPARAM lParam) {
	switch(message) {
		case WM_DESTROY:
			::PostQuitMessage(0);
			return 0;
	}
	
	return ::DefWindowProc(hwnd, message, wParam, lParam);
}

