/* Generated code for Python source for module 'pygame.sndarray'
 * created by Nuitka version 0.5.32.5
 *
 * This code is in part copyright 2018 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_pygame$sndarray is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pygame$sndarray;
PyDictObject *moduledict_pygame$sndarray;

/* The module constants used, if any. */
extern PyObject *const_str_digest_397a17452f1c53e6ae5af26f0cec775b;
extern PyObject *const_tuple_str_plain_sound_tuple;
extern PyObject *const_str_plain_array;
static PyObject *const_str_digest_e2dd1d924ce59da9a7f4c38f9d940547;
extern PyObject *const_str_plain_get_arraytypes;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_tuple_str_plain_numpy_tuple;
static PyObject *const_str_digest_7db2b8382de83fe733b56b354d85e3fd;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_626a30bcf65b53cc2a95a74413b903c0;
extern PyObject *const_int_0;
static PyObject *const_str_plain_numpysnd;
extern PyObject *const_str_plain_samples;
extern PyObject *const_str_plain_arraytype;
extern PyObject *const_str_plain_sound;
extern PyObject *const_str_plain_use_arraytype;
static PyObject *const_str_digest_5fd001b4f38a018e59336395b02e3c46;
static PyObject *const_str_digest_63213bc21e9f1c6fe3fc174c63fc95b1;
static PyObject *const_str_plain__numpysndarray;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_arraytype_tuple;
extern PyObject *const_str_plain_get_arraytype;
static PyObject *const_str_digest_19b0f75a8befbb2b9fd62da5b127d56e;
extern PyObject *const_tuple_str_plain_array_tuple;
extern PyObject *const_str_plain_make_sound;
static PyObject *const_str_digest_b5d1df9417b72e3d42e04f94d383a9e4;
static PyObject *const_str_digest_cbea8de022b494104ad5159e5ad4e9ee;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_digest_672366ed1fcc7aba1730c8c9e9e92aea;
extern PyObject *const_str_digest_390dcb68817636bbd0641245b5f96e70;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_digest_ddb6de3a568f4a568a2ebb6d7347d530;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_e2dd1d924ce59da9a7f4c38f9d940547 = UNSTREAM_STRING( &constant_bin[ 57068 ], 114, 0 );
    const_str_digest_7db2b8382de83fe733b56b354d85e3fd = UNSTREAM_STRING( &constant_bin[ 57182 ], 303, 0 );
    const_str_digest_626a30bcf65b53cc2a95a74413b903c0 = UNSTREAM_STRING( &constant_bin[ 57485 ], 104, 0 );
    const_str_plain_numpysnd = UNSTREAM_STRING( &constant_bin[ 15629 ], 8, 1 );
    const_str_digest_5fd001b4f38a018e59336395b02e3c46 = UNSTREAM_STRING( &constant_bin[ 57589 ], 869, 0 );
    const_str_digest_63213bc21e9f1c6fe3fc174c63fc95b1 = UNSTREAM_STRING( &constant_bin[ 58458 ], 24, 0 );
    const_str_plain__numpysndarray = UNSTREAM_STRING( &constant_bin[ 15628 ], 14, 1 );
    const_str_digest_19b0f75a8befbb2b9fd62da5b127d56e = UNSTREAM_STRING( &constant_bin[ 58482 ], 240, 0 );
    const_str_digest_b5d1df9417b72e3d42e04f94d383a9e4 = UNSTREAM_STRING( &constant_bin[ 58722 ], 57, 0 );
    const_str_digest_cbea8de022b494104ad5159e5ad4e9ee = UNSTREAM_STRING( &constant_bin[ 58779 ], 107, 0 );
    const_str_digest_ddb6de3a568f4a568a2ebb6d7347d530 = UNSTREAM_STRING( &constant_bin[ 58886 ], 263, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pygame$sndarray( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_49eb4c62810cc25a1e728abefa40dff9;
static PyCodeObject *codeobj_9d43edcb10cd3849bdcd675bbff5d5c1;
static PyCodeObject *codeobj_a1ee3626682a6d3831e00170664e5c25;
static PyCodeObject *codeobj_2d59e747bc964de1aad3676dcad25123;
static PyCodeObject *codeobj_bf7042e322cc4c198e32e63d3951a181;
static PyCodeObject *codeobj_494c6bf9c866e8ddb07042e9ed157577;
static PyCodeObject *codeobj_293b0301da8666fa14b4fe7aa5801b21;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_b5d1df9417b72e3d42e04f94d383a9e4;
    codeobj_49eb4c62810cc25a1e728abefa40dff9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_63213bc21e9f1c6fe3fc174c63fc95b1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_9d43edcb10cd3849bdcd675bbff5d5c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_array, 49, const_tuple_str_plain_sound_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a1ee3626682a6d3831e00170664e5c25 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_arraytype, 91, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2d59e747bc964de1aad3676dcad25123 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_arraytypes, 98, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bf7042e322cc4c198e32e63d3951a181 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_make_sound, 71, const_tuple_str_plain_array_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_494c6bf9c866e8ddb07042e9ed157577 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_samples, 60, const_tuple_str_plain_sound_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_293b0301da8666fa14b4fe7aa5801b21 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_use_arraytype, 82, const_tuple_str_plain_arraytype_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pygame$sndarray$$$function_1_array(  );


static PyObject *MAKE_FUNCTION_pygame$sndarray$$$function_2_samples(  );


static PyObject *MAKE_FUNCTION_pygame$sndarray$$$function_3_make_sound(  );


static PyObject *MAKE_FUNCTION_pygame$sndarray$$$function_4_use_arraytype(  );


static PyObject *MAKE_FUNCTION_pygame$sndarray$$$function_5_get_arraytype(  );


static PyObject *MAKE_FUNCTION_pygame$sndarray$$$function_6_get_arraytypes(  );


// The module function definitions.
static PyObject *impl_pygame$sndarray$$$function_1_array( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sound = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_9d43edcb10cd3849bdcd675bbff5d5c1 = NULL;

    struct Nuitka_FrameObject *frame_9d43edcb10cd3849bdcd675bbff5d5c1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9d43edcb10cd3849bdcd675bbff5d5c1, codeobj_9d43edcb10cd3849bdcd675bbff5d5c1, module_pygame$sndarray, sizeof(void *) );
    frame_9d43edcb10cd3849bdcd675bbff5d5c1 = cache_frame_9d43edcb10cd3849bdcd675bbff5d5c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d43edcb10cd3849bdcd675bbff5d5c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d43edcb10cd3849bdcd675bbff5d5c1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain_numpysnd );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpysnd );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpysnd" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_sound;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_9d43edcb10cd3849bdcd675bbff5d5c1->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d43edcb10cd3849bdcd675bbff5d5c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d43edcb10cd3849bdcd675bbff5d5c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d43edcb10cd3849bdcd675bbff5d5c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d43edcb10cd3849bdcd675bbff5d5c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d43edcb10cd3849bdcd675bbff5d5c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d43edcb10cd3849bdcd675bbff5d5c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d43edcb10cd3849bdcd675bbff5d5c1,
        type_description_1,
        par_sound
    );


    // Release cached frame.
    if ( frame_9d43edcb10cd3849bdcd675bbff5d5c1 == cache_frame_9d43edcb10cd3849bdcd675bbff5d5c1 )
    {
        Py_DECREF( frame_9d43edcb10cd3849bdcd675bbff5d5c1 );
    }
    cache_frame_9d43edcb10cd3849bdcd675bbff5d5c1 = NULL;

    assertFrameObject( frame_9d43edcb10cd3849bdcd675bbff5d5c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pygame$sndarray$$$function_1_array );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_sound );
    par_sound = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_sound );
    par_sound = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pygame$sndarray$$$function_1_array );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pygame$sndarray$$$function_2_samples( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sound = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_494c6bf9c866e8ddb07042e9ed157577 = NULL;

    struct Nuitka_FrameObject *frame_494c6bf9c866e8ddb07042e9ed157577;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_494c6bf9c866e8ddb07042e9ed157577, codeobj_494c6bf9c866e8ddb07042e9ed157577, module_pygame$sndarray, sizeof(void *) );
    frame_494c6bf9c866e8ddb07042e9ed157577 = cache_frame_494c6bf9c866e8ddb07042e9ed157577;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_494c6bf9c866e8ddb07042e9ed157577 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_494c6bf9c866e8ddb07042e9ed157577 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain_numpysnd );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpysnd );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpysnd" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_samples );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_sound;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_494c6bf9c866e8ddb07042e9ed157577->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_494c6bf9c866e8ddb07042e9ed157577 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_494c6bf9c866e8ddb07042e9ed157577 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_494c6bf9c866e8ddb07042e9ed157577 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_494c6bf9c866e8ddb07042e9ed157577, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_494c6bf9c866e8ddb07042e9ed157577->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_494c6bf9c866e8ddb07042e9ed157577, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_494c6bf9c866e8ddb07042e9ed157577,
        type_description_1,
        par_sound
    );


    // Release cached frame.
    if ( frame_494c6bf9c866e8ddb07042e9ed157577 == cache_frame_494c6bf9c866e8ddb07042e9ed157577 )
    {
        Py_DECREF( frame_494c6bf9c866e8ddb07042e9ed157577 );
    }
    cache_frame_494c6bf9c866e8ddb07042e9ed157577 = NULL;

    assertFrameObject( frame_494c6bf9c866e8ddb07042e9ed157577 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pygame$sndarray$$$function_2_samples );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_sound );
    par_sound = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_sound );
    par_sound = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pygame$sndarray$$$function_2_samples );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pygame$sndarray$$$function_3_make_sound( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_array = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_bf7042e322cc4c198e32e63d3951a181 = NULL;

    struct Nuitka_FrameObject *frame_bf7042e322cc4c198e32e63d3951a181;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bf7042e322cc4c198e32e63d3951a181, codeobj_bf7042e322cc4c198e32e63d3951a181, module_pygame$sndarray, sizeof(void *) );
    frame_bf7042e322cc4c198e32e63d3951a181 = cache_frame_bf7042e322cc4c198e32e63d3951a181;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bf7042e322cc4c198e32e63d3951a181 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bf7042e322cc4c198e32e63d3951a181 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain_numpysnd );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpysnd );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpysnd" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_make_sound );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_array;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "array" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_bf7042e322cc4c198e32e63d3951a181->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bf7042e322cc4c198e32e63d3951a181 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bf7042e322cc4c198e32e63d3951a181 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bf7042e322cc4c198e32e63d3951a181 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bf7042e322cc4c198e32e63d3951a181, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bf7042e322cc4c198e32e63d3951a181->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bf7042e322cc4c198e32e63d3951a181, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bf7042e322cc4c198e32e63d3951a181,
        type_description_1,
        par_array
    );


    // Release cached frame.
    if ( frame_bf7042e322cc4c198e32e63d3951a181 == cache_frame_bf7042e322cc4c198e32e63d3951a181 )
    {
        Py_DECREF( frame_bf7042e322cc4c198e32e63d3951a181 );
    }
    cache_frame_bf7042e322cc4c198e32e63d3951a181 = NULL;

    assertFrameObject( frame_bf7042e322cc4c198e32e63d3951a181 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pygame$sndarray$$$function_3_make_sound );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_array );
    par_array = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_array );
    par_array = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pygame$sndarray$$$function_3_make_sound );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pygame$sndarray$$$function_4_use_arraytype( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arraytype = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_293b0301da8666fa14b4fe7aa5801b21 = NULL;

    struct Nuitka_FrameObject *frame_293b0301da8666fa14b4fe7aa5801b21;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_293b0301da8666fa14b4fe7aa5801b21, codeobj_293b0301da8666fa14b4fe7aa5801b21, module_pygame$sndarray, sizeof(void *) );
    frame_293b0301da8666fa14b4fe7aa5801b21 = cache_frame_293b0301da8666fa14b4fe7aa5801b21;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_293b0301da8666fa14b4fe7aa5801b21 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_293b0301da8666fa14b4fe7aa5801b21 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_arraytype;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_293b0301da8666fa14b4fe7aa5801b21->m_frame.f_lineno = 87;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_arraytype;
        par_arraytype = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = par_arraytype;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_str_plain_numpy;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_390dcb68817636bbd0641245b5f96e70;
    frame_293b0301da8666fa14b4fe7aa5801b21->m_frame.f_lineno = 89;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 89;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_293b0301da8666fa14b4fe7aa5801b21 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_293b0301da8666fa14b4fe7aa5801b21 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_293b0301da8666fa14b4fe7aa5801b21, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_293b0301da8666fa14b4fe7aa5801b21->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_293b0301da8666fa14b4fe7aa5801b21, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_293b0301da8666fa14b4fe7aa5801b21,
        type_description_1,
        par_arraytype
    );


    // Release cached frame.
    if ( frame_293b0301da8666fa14b4fe7aa5801b21 == cache_frame_293b0301da8666fa14b4fe7aa5801b21 )
    {
        Py_DECREF( frame_293b0301da8666fa14b4fe7aa5801b21 );
    }
    cache_frame_293b0301da8666fa14b4fe7aa5801b21 = NULL;

    assertFrameObject( frame_293b0301da8666fa14b4fe7aa5801b21 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pygame$sndarray$$$function_4_use_arraytype );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_arraytype );
    par_arraytype = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_arraytype );
    par_arraytype = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pygame$sndarray$$$function_4_use_arraytype );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pygame$sndarray$$$function_5_get_arraytype( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = const_str_plain_numpy;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pygame$sndarray$$$function_5_get_arraytype );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pygame$sndarray$$$function_6_get_arraytypes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = const_tuple_str_plain_numpy_tuple;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pygame$sndarray$$$function_6_get_arraytypes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_pygame$sndarray$$$function_1_array(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$sndarray$$$function_1_array,
        const_str_plain_array,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9d43edcb10cd3849bdcd675bbff5d5c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pygame$sndarray,
        const_str_digest_19b0f75a8befbb2b9fd62da5b127d56e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$sndarray$$$function_2_samples(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$sndarray$$$function_2_samples,
        const_str_plain_samples,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_494c6bf9c866e8ddb07042e9ed157577,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pygame$sndarray,
        const_str_digest_7db2b8382de83fe733b56b354d85e3fd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$sndarray$$$function_3_make_sound(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$sndarray$$$function_3_make_sound,
        const_str_plain_make_sound,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bf7042e322cc4c198e32e63d3951a181,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pygame$sndarray,
        const_str_digest_ddb6de3a568f4a568a2ebb6d7347d530,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$sndarray$$$function_4_use_arraytype(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$sndarray$$$function_4_use_arraytype,
        const_str_plain_use_arraytype,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_293b0301da8666fa14b4fe7aa5801b21,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pygame$sndarray,
        const_str_digest_e2dd1d924ce59da9a7f4c38f9d940547,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$sndarray$$$function_5_get_arraytype(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$sndarray$$$function_5_get_arraytype,
        const_str_plain_get_arraytype,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a1ee3626682a6d3831e00170664e5c25,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pygame$sndarray,
        const_str_digest_626a30bcf65b53cc2a95a74413b903c0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$sndarray$$$function_6_get_arraytypes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$sndarray$$$function_6_get_arraytypes,
        const_str_plain_get_arraytypes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2d59e747bc964de1aad3676dcad25123,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pygame$sndarray,
        const_str_digest_cbea8de022b494104ad5159e5ad4e9ee,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pygame$sndarray =
{
    PyModuleDef_HEAD_INIT,
    "pygame.sndarray",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;

extern PyObject *const_str_plain___loader__;
extern PyObject *metapath_based_loader;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( pygame$sndarray )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pygame$sndarray );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("pygame.sndarray: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pygame.sndarray: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pygame.sndarray: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpygame$sndarray" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pygame$sndarray = Py_InitModule4(
        "pygame.sndarray",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pygame$sndarray = PyModule_Create( &mdef_pygame$sndarray );
#endif

    moduledict_pygame$sndarray = MODULE_DICT( module_pygame$sndarray );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pygame$sndarray,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pygame$sndarray,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pygame$sndarray,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pygame$sndarray );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_397a17452f1c53e6ae5af26f0cec775b, module_pygame$sndarray );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_49eb4c62810cc25a1e728abefa40dff9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_5fd001b4f38a018e59336395b02e3c46;
    UPDATE_STRING_DICT0( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b5d1df9417b72e3d42e04f94d383a9e4;
    UPDATE_STRING_DICT0( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_49eb4c62810cc25a1e728abefa40dff9 = MAKE_MODULE_FRAME( codeobj_49eb4c62810cc25a1e728abefa40dff9, module_pygame$sndarray );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_49eb4c62810cc25a1e728abefa40dff9 );
    assert( Py_REFCNT( frame_49eb4c62810cc25a1e728abefa40dff9 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_672366ed1fcc7aba1730c8c9e9e92aea;
    tmp_globals_name_1 = (PyObject *)moduledict_pygame$sndarray;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_49eb4c62810cc25a1e728abefa40dff9->m_frame.f_lineno = 47;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain__numpysndarray );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain_numpysnd, tmp_assign_source_4 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_49eb4c62810cc25a1e728abefa40dff9 );
#endif
    popFrameStack();

    assertFrameObject( frame_49eb4c62810cc25a1e728abefa40dff9 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_49eb4c62810cc25a1e728abefa40dff9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_49eb4c62810cc25a1e728abefa40dff9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_49eb4c62810cc25a1e728abefa40dff9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_49eb4c62810cc25a1e728abefa40dff9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_5 = MAKE_FUNCTION_pygame$sndarray$$$function_1_array(  );
    UPDATE_STRING_DICT1( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_pygame$sndarray$$$function_2_samples(  );
    UPDATE_STRING_DICT1( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain_samples, tmp_assign_source_6 );
    tmp_assign_source_7 = MAKE_FUNCTION_pygame$sndarray$$$function_3_make_sound(  );
    UPDATE_STRING_DICT1( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain_make_sound, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_pygame$sndarray$$$function_4_use_arraytype(  );
    UPDATE_STRING_DICT1( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain_use_arraytype, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_pygame$sndarray$$$function_5_get_arraytype(  );
    UPDATE_STRING_DICT1( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain_get_arraytype, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_pygame$sndarray$$$function_6_get_arraytypes(  );
    UPDATE_STRING_DICT1( moduledict_pygame$sndarray, (Nuitka_StringObject *)const_str_plain_get_arraytypes, tmp_assign_source_10 );

    return MOD_RETURN_VALUE( module_pygame$sndarray );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
