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

/*! \file cat_thread.h
*   \brief Thread management interface.
*/

#ifndef _CAT_THREAD_H_
#define _CAT_THREAD_H_


#include "cat/cat_platform.h"

#include <threads.h>


cat_interface_begin;


//! \typedef cat_thread_func_t
//! \brief Thread entry point function type.
typedef int(*cat_thread_func_t)(int const, void* const[]);


//! \fn cat_thrd_create
//! \brief Create a new thread.
//! \param p_thread_out Pointer to result standard thread.
//! \param thread_func Thread entry point function.
//! \param argc Number of arguments in function argument vector.
//! \param argv Function argument vector.
//! \return Thread handle; zero if failed.
cat_decl int cat_thrd_create(thrd_t* const p_thread_out, cat_thread_func_t const thread_func, uint8_t const argc, void* const argv[]);

//! \fn cat_thread_rename
//! \brief Rename current thread.
//! \param name Name c-string.
//! \return True if success.
cat_decl bool cat_thread_rename(cstr_t const name);


cat_interface_end;


#endif // #ifndef _CAT_THREAD_H_