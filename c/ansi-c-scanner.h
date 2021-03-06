#ifndef FLEX_HEADER_ansi_c_scanner_h
#define FLEX_HEADER_ansi_c_scanner_h
#define YY_AnsiCScanner_CHAR char

/* A lexical scanner header generated by flex */
/* MODIFIED FOR C++ CLASS BY Alain Coetmeur: coetmeur(at)icdc.fr */
/* Note that (at) mean the 'at' symbol that I cannot write */
/* because it is expanded to the class name */
/* made at Informatique-CDC, Research&development department */
/* company from the Caisse Des Depots et Consignations */

/*********************************************/
/* SYSTEM dependent declaration, includes... */
/*********************************************/
/* cfront 1.2 defines "c_plusplus" instead of "__cplusplus" */
#ifdef c_plusplus
#ifndef __cplusplus
#define __cplusplus
#endif
#endif
#ifdef __cplusplus
#ifndef YY_USE_PROTOS
#define YY_USE_PROTOS
#endif
#ifndef YY_USE_CLASS
#define YY_USE_CLASS
#endif
#else /* ! __cplusplus */
#ifdef __STDC__
#ifdef __GNUC__
#else
#endif /* __GNUC__ */
#ifndef YY_USE_PROTOS
#define YY_USE_PROTOS
#endif
#endif /* __STDC__ */
#endif /* ! __cplusplus */
/*********************************************/
/* COMPILER DEPENDENT   MACROS               */
/*********************************************/
/* use prototypes in function declarations */
#ifndef YY_PROTO
#ifdef YY_USE_PROTOS
#define YY_PROTO(proto) proto
#else
#define YY_PROTO(proto) ()
#endif
#endif
#include <cstdio>

/* % here is the declaration from section1 %header{  */

#include <cstdio>
#include "ansi-c-parser.h"

#define MAX_LINE 1024 // the longest line

#define YY_AnsiCScanner_CONSTRUCTOR_PARAM std::istream &ins, bool trace

#define YY_AnsiCScanner_CONSTRUCTOR_INIT  : theLine(1), traceLines(trace), in(ins), column(0)

#define YY_AnsiCScanner_CONSTRUCTOR_CODE                                                                               \
    { *lineBuf = 0; }

#define YY_AnsiCScanner_MEMBERS                                                                                        \
  public:                                                                                                              \
    int theLine;            /* the current line number */                                                              \
    char lineBuf[MAX_LINE]; /* the current line */                                                                     \
    bool traceLines;        /* echo each lines as it is scanned */                                                     \
    std::istream &in;                                                                                                  \
    int column;                                                                                                        \
                                                                                                                       \
  private:                                                                                                             \
    void count();                                                                                                      \
    void comment();                                                                                                    \
    void commentEOL();                                                                                                 \
    int check_type();

#ifdef YY_USE_CLASS
#ifdef YY_AnsiCScanner_IOSTREAM
#include <iostream.h>
#define YY_AnsiCScanner_IFILE istream
#define YY_AnsiCScanner_OFILE ostream
#define YY_AnsiCScanner_ERRFILE cerr

#ifndef YY_AnsiCScanner_IFILE_DEFAULT
#define YY_AnsiCScanner_IFILE_DEFAULT &cin
#endif

#ifndef YY_AnsiCScanner_OFILE_DEFAULT
#define YY_AnsiCScanner_OFILE_DEFAULT &cout
#endif

#endif
#endif

#ifndef YY_AnsiCScanner_IFILE
#define YY_AnsiCScanner_IFILE FILE
#endif

#ifndef YY_AnsiCScanner_OFILE
#define YY_AnsiCScanner_OFILE FILE
#endif

#ifndef YY_AnsiCScanner_ERRFILE
#define YY_AnsiCScanner_ERRFILE stderr
#endif

#ifndef YY_AnsiCScanner_IFILE_DEFAULT
#define YY_AnsiCScanner_IFILE_DEFAULT stdin
#endif

#ifndef YY_AnsiCScanner_OFILE_DEFAULT
#define YY_AnsiCScanner_OFILE_DEFAULT stdout
#endif

#ifndef YY_AnsiCScanner_TEXT
#define YY_AnsiCScanner_TEXT yytext
#endif
#ifndef YY_AnsiCScanner_LENG
#define YY_AnsiCScanner_LENG yyleng
#endif
#ifndef YY_AnsiCScanner_IN
#define YY_AnsiCScanner_IN yyin
#endif
#ifndef YY_AnsiCScanner_OUT
#define YY_AnsiCScanner_OUT yyout
#endif

#ifndef YY_AnsiCScanner_LEX_RETURN
#define YY_AnsiCScanner_LEX_RETURN int
#else
#ifndef YY_AnsiCScanner_LEX_DEFINED
#define YY_AnsiCScanner_LEX_DEFINED
#endif
#endif

#ifndef YY_AnsiCScanner_LEX
#define YY_AnsiCScanner_LEX yylex
#else
#ifndef YY_AnsiCScanner_LEX_DEFINED
#define YY_AnsiCScanner_LEX_DEFINED
#endif
#endif

#ifndef YY_AnsiCScanner_LEX_DEFINED
#define YY_AnsiCScanner_LEX_DEFINED
#endif

#ifndef YY_AnsiCScanner_LEX_PARAM_DEF
#define YY_AnsiCScanner_LEX_PARAM_DEF
#else
#ifndef YY_AnsiCScanner_LEX_DEFINED
#define YY_AnsiCScanner_LEX_DEFINED
#endif
#endif

#ifndef YY_AnsiCScanner_RESTART
#define YY_AnsiCScanner_RESTART yyrestart
#endif
#ifndef YY_AnsiCScanner_SWITCH_TO_BUFFER
#define YY_AnsiCScanner_SWITCH_TO_BUFFER yy_switch_to_buffer
#endif
#ifndef YY_AnsiCScanner_LOAD_BUFFER_STATE
#define YY_AnsiCScanner_LOAD_BUFFER_STATE yy_load_buffer_state
#endif

#ifndef YY_AnsiCScanner_CREATE_BUFFER
#define YY_AnsiCScanner_CREATE_BUFFER yy_create_buffer
#ifndef YY_USE_CLASS
#ifndef yy_new_buffer
#define yy_new_buffer yy_create_buffer
#endif
#endif
#endif
#ifndef YY_AnsiCScanner_DELETE_BUFFER
#define YY_AnsiCScanner_DELETE_BUFFER yy_delete_buffer
#endif
#ifndef YY_AnsiCScanner_INIT_BUFFER
#define YY_AnsiCScanner_INIT_BUFFER yy_init_buffer
#endif

#ifdef YY_AnsiCScanner_FLEX_DEBUG
#ifndef YY_AnsiCScanner_DEBUG
#define YY_AnsiCScanner_DEBUG 1
#endif
#else
#ifndef YY_AnsiCScanner_DEBUG
#define YY_AnsiCScanner_DEBUG 0
#endif
#endif

#if YY_AnsiCScanner_DEBUG != 0
#ifndef YY_AnsiCScanner_DEBUG_FLAG
#define YY_AnsiCScanner_DEBUG_FLAG yy_flex_debug
#endif
#ifndef YY_AnsiCScanner_DEBUG_INIT
#define YY_AnsiCScanner_DEBUG_INIT 1
#endif
#endif

#ifndef YY_USE_CLASS
#ifndef YY_AnsiCScanner_CURRENT_BUFFER
#define YY_AnsiCScanner_CURRENT_BUFFER yy_current_buffer
#endif
typedef struct yy_buffer_state *YY_BUFFER_STATE;

extern void YY_AnsiCScanner_RESTART YY_PROTO((YY_AnsiCScanner_IFILE * input_file));
extern void YY_AnsiCScanner_SWITCH_TO_BUFFER YY_PROTO((YY_BUFFER_STATE new_buffer));
extern void YY_AnsiCScanner_LOAD_BUFFER_STATE YY_PROTO((void));
extern YY_BUFFER_STATE YY_AnsiCScanner_CREATE_BUFFER YY_PROTO((YY_AnsiCScanner_IFILE * file, int size));
extern void YY_AnsiCScanner_DELETE_BUFFER YY_PROTO((YY_BUFFER_STATE b));
extern void YY_AnsiCScanner_INIT_BUFFER YY_PROTO((YY_BUFFER_STATE b, YY_AnsiCScanner_IFILE * file));

#if YY_AnsiCScanner_DEBUG != 0
extern int YY_AnsiCScanner_DEBUG_FLAG;
#endif
extern YY_AnsiCScanner_CHAR *YY_AnsiCScanner_TEXT;
extern int YY_AnsiCScanner_LENG;
extern YY_AnsiCScanner_IFILE *YY_AnsiCScanner_IN;
extern YY_AnsiCScanner_OFILE *YY_AnsiCScanner_OUT;
#ifdef YY_AnsiCScanner_LEX_DEFINED
extern YY_AnsiCScanner_LEX_RETURN YY_AnsiCScanner_LEX(yy_AnsiCParser_stype &yylval) YY_AnsiCScanner_LEX_PARAM_DEF
#else
#ifndef YY_DECL
extern YY_AnsiCScanner_LEX_RETURN YY_AnsiCScanner_LEX(yy_AnsiCParser_stype &yylval) YY_AnsiCScanner_LEX_PARAM_DEF
#else
/* no declaration if oldstyle flex */
#endif
#endif
#else

#ifndef YY_AnsiCScanner_CURRENT_BUFFER
#define YY_AnsiCScanner_CURRENT_BUFFER YY_CURRENT_BUFFER
#endif
#ifndef YY_AnsiCScanner_CLASS
#define YY_AnsiCScanner_CLASS AnsiCScanner
#endif
#ifndef YY_AnsiCScanner_ECHO
#define YY_AnsiCScanner_ECHO yy_echo
#endif
#ifdef YY_AnsiCScanner_ECHO_PURE
#define YY_AnsiCScanner_ECHO_NOCODE
#endif

#ifndef YY_AnsiCScanner_ECHO_CODE
#ifndef YY_AnsiCScanner_IOSTREAM
#define YY_AnsiCScanner_ECHO_CODE fwrite((char *)YY_AnsiCScanner_TEXT, YY_AnsiCScanner_LENG, 1, YY_AnsiCScanner_OUT);
#else
#define YY_AnsiCScanner_ECHO_CODE (YY_AnsiCScanner_OUT->write((char *)YY_AnsiCScanner_TEXT, YY_AnsiCScanner_LENG));
#endif
#endif

#ifndef YY_AnsiCScanner_INPUT
#define YY_AnsiCScanner_INPUT yy_input
#endif
#ifdef YY_AnsiCScanner_INPUT_PURE
#define YY_AnsiCScanner_INPUT_NOCODE
#endif

#ifdef YY_AnsiCScanner_FATAL_ERROR_PURE
#define YY_AnsiCScanner_FATAL_ERRO_NOCODE
#endif
#ifndef YY_AnsiCScanner_FATAL_ERROR
#define YY_AnsiCScanner_FATAL_ERROR yy_fatal_error
#endif

#ifndef YY_AnsiCScanner_FATAL_ERROR_CODE
#ifndef YY_AnsiCScanner_IOSTREAM
#define YY_AnsiCScanner_FATAL_ERROR_CODE                                                                               \
    fputs(msg, YY_AnsiCScanner_ERRFILE);                                                                               \
    putc('\n', YY_AnsiCScanner_ERRFILE);                                                                               \
    exit(1);
#else
#define YY_AnsiCScanner_FATAL_ERROR_CODE                                                                               \
    YY_AnsiCScanner_ERRFILE << msg << endl;                                                                            \
    exit(1);
#endif
#endif

#ifndef YY_AnsiCScanner_WRAP
#define YY_AnsiCScanner_WRAP yy_wrap
#endif
#ifdef YY_AnsiCScanner_WRAP_PURE
#define YY_AnsiCScanner_WRAP_NOCODE
#endif
#ifndef YY_AnsiCScanner_WRAP_CODE
#define YY_AnsiCScanner_WRAP_CODE return 1;
#endif

#ifndef YY_AnsiCScanner_INHERIT
#define YY_AnsiCScanner_INHERIT
#endif
#ifndef YY_AnsiCScanner_MEMBERS
#define YY_AnsiCScanner_MEMBERS
#endif
#ifndef YY_AnsiCScanner_CONSTRUCTOR_PARAM
#define YY_AnsiCScanner_CONSTRUCTOR_PARAM
#endif
#ifndef YY_AnsiCScanner_CONSTRUCTOR_CODE
#define YY_AnsiCScanner_CONSTRUCTOR_CODE
#endif
#ifndef YY_AnsiCScanner_CONSTRUCTOR_INIT
#define YY_AnsiCScanner_CONSTRUCTOR_INIT
#endif
#ifndef YY_AnsiCScanner_DESTRUCTOR_CODE
#define YY_AnsiCScanner_DESTRUCTOR_CODE
#endif
typedef struct yy_buffer_state *YY_BUFFER_STATE;

class YY_AnsiCScanner_CLASS YY_AnsiCScanner_INHERIT {
  private: /* data */
    YY_AnsiCScanner_CHAR *yy_c_buf_p;
    YY_AnsiCScanner_CHAR yy_hold_char;
    int yy_n_chars;
    int yy_init;
    int yy_start;
    int yy_did_buffer_switch_on_eof;

  private: /* functions */
    void yy_initialize();
    int input();
    int yyinput() { return input(); }
    int yy_get_next_buffer();
    void yyunput(YY_AnsiCScanner_CHAR c, YY_AnsiCScanner_CHAR *buf_ptr);
    /* use long instead of yy_state_type because it is undef */
    long yy_get_previous_state_(void);
    long yy_try_NUL_trans_(long current_state_);

  protected: /* non virtual */
    YY_BUFFER_STATE YY_AnsiCScanner_CURRENT_BUFFER;
    void YY_AnsiCScanner_RESTART(YY_AnsiCScanner_IFILE *input_file);
    void YY_AnsiCScanner_SWITCH_TO_BUFFER(YY_BUFFER_STATE new_buffer);
    void YY_AnsiCScanner_LOAD_BUFFER_STATE(void);
    YY_BUFFER_STATE YY_AnsiCScanner_CREATE_BUFFER(YY_AnsiCScanner_IFILE *file, int size);
    void YY_AnsiCScanner_DELETE_BUFFER(YY_BUFFER_STATE b);
    void YY_AnsiCScanner_INIT_BUFFER(YY_BUFFER_STATE b, YY_AnsiCScanner_IFILE *file);

  protected: /* virtual */
    virtual void YY_AnsiCScanner_ECHO();
    virtual int YY_AnsiCScanner_INPUT(char *buf, int &result, int max_size);
    virtual void YY_AnsiCScanner_FATAL_ERROR(const char *msg);
    virtual int YY_AnsiCScanner_WRAP();

  public:
    YY_AnsiCScanner_CHAR *YY_AnsiCScanner_TEXT;
    int YY_AnsiCScanner_LENG;
    YY_AnsiCScanner_IFILE *YY_AnsiCScanner_IN;
    YY_AnsiCScanner_OFILE *YY_AnsiCScanner_OUT;
    YY_AnsiCScanner_LEX_RETURN YY_AnsiCScanner_LEX(yy_AnsiCParser_stype &yylval);
    YY_AnsiCScanner_CLASS(YY_AnsiCScanner_CONSTRUCTOR_PARAM);
    virtual ~YY_AnsiCScanner_CLASS();
#if YY_AnsiCScanner_DEBUG != 0
    int YY_AnsiCScanner_DEBUG_FLAG;
#endif
  public: /* added members */
    YY_AnsiCScanner_MEMBERS
};
#endif

/* declaration of externs for public use of yylex scanner */

/* % here is the declaration from section2 %header{ */

#endif

    /* end of generated header */
