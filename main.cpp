#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#include "initializer\client_initializer.h"
#include "http\requester.h"
#include <Windows.h>

//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int cmdShow) {
int main(){
//	AllocConsole();
	//	freopen("CONOUT$", "w+", stdout);

	initializer::client_initializer::get()->run();
	http::requester::get()->run();
	Sleep(2999999999);
    return 0;
}

