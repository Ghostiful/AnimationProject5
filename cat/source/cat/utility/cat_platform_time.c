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
* cat_platform_time.c
* Platform time implementation.
*/

#include "cat/utility/cat_platform_time.h"
#include "cat/cat_platform.inl"


#define CAT_PLATFORM_TIME_USE_WIN


#if (defined _WIN32 && defined CAT_PLATFORM_TIME_USE_WIN)
#define CAT_PLATFORM_TIME_WIN 1
#endif // #if (defined _WIN32 && defined CAT_PLATFORM_TIME_USE_WIN)

#ifdef CAT_PLATFORM_TIME_WIN
#include <Windows.h>
#else // #ifdef CAT_PLATFORM_TIME_WIN
#include <time.h>
#define NS_PER_S 1000000000
#endif // #else // #ifdef CAT_PLATFORM_TIME_WIN


cat_implementation_begin;



cat_implementation_end;