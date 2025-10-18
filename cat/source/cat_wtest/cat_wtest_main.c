////////////////////////////////////////////////////////////////////////////////
/// Copyright 2025 Daniel S. Buckstein
/// 
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
/// 
/// http ://www.apache.org/licenses/LICENSE-2.0
/// 
/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.
////////////////////////////////////////////////////////////////////////////////

/*
* cat_wtest_main.c
* Windowed program entry point.
*/

#include "cat/cat.h"


#ifdef _WIN32
#include <Windows.h>


extern int cat_test_all(int const argc, char const* const argv[]);


int WINAPI WinMain(
    _In_     HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_     LPSTR     lpCmdLine,
    _In_     int       nShowCmd
)
{
    int result = 0;
    unused2(hInstance, hPrevInstance);
    unused(nShowCmd);
    _set_error_mode(_OUT_TO_MSGBOX);
    cat_console_create();
    result |= cat_test_all(1, &lpCmdLine);
    cat_console_destroy();
    return result;
}


#else // #ifdef _WIN32
#error Unsupported platform.
#endif // #else // #ifdef _WIN32