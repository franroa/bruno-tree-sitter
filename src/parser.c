#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_meta = 1,
  anon_sym_get = 2,
  anon_sym_post = 3,
  anon_sym_put = 4,
  anon_sym_delete = 5,
  anon_sym_patch = 6,
  anon_sym_options = 7,
  anon_sym_head = 8,
  anon_sym_connect = 9,
  anon_sym_trace = 10,
  anon_sym_query = 11,
  anon_sym_headers = 12,
  anon_sym_auth = 13,
  anon_sym_auth_COLONawsv4 = 14,
  anon_sym_auth_COLONbasic = 15,
  anon_sym_auth_COLONbearer = 16,
  anon_sym_auth_COLONdigest = 17,
  anon_sym_auth_COLONoauth2 = 18,
  anon_sym_body = 19,
  anon_sym_body_COLONjson = 20,
  anon_sym_body_COLONtext = 21,
  anon_sym_body_COLONxml = 22,
  anon_sym_body_COLONsparql = 23,
  anon_sym_body_COLONgraphql = 24,
  anon_sym_body_COLONgraphql_COLONvars = 25,
  anon_sym_body_COLONform_DASHurlencoded = 26,
  anon_sym_body_COLONmultipart_DASHform = 27,
  anon_sym_vars = 28,
  anon_sym_vars_COLONsecret = 29,
  anon_sym_vars_COLONpre_DASHrequest = 30,
  anon_sym_vars_COLONpost_DASHresponse = 31,
  anon_sym_assert = 32,
  anon_sym_script_COLONpre_DASHrequest = 33,
  anon_sym_script_COLONpost_DASHresponse = 34,
  anon_sym_tests = 35,
  anon_sym_docs = 36,
  anon_sym_settings = 37,
  anon_sym_LBRACE = 38,
  anon_sym_RBRACE = 39,
  anon_sym_LBRACK = 40,
  anon_sym_COMMA = 41,
  anon_sym_RBRACK = 42,
  sym_array_value = 43,
  anon_sym_COLON = 44,
  sym_assert_key = 45,
  sym_key = 46,
  sym_value = 47,
  sym_rawtext = 48,
  sym_source_file = 49,
  sym_meta = 50,
  sym_http = 51,
  sym_http_verb = 52,
  sym_query = 53,
  sym_headers = 54,
  sym_auths = 55,
  sym_auth = 56,
  sym_authawsv4 = 57,
  sym_authbasic = 58,
  sym_authbearer = 59,
  sym_authdigest = 60,
  sym_authoauth2 = 61,
  sym_bodies = 62,
  sym_bodyforms = 63,
  sym_body = 64,
  sym_bodyjson = 65,
  sym_bodytext = 66,
  sym_bodyxml = 67,
  sym_bodysparql = 68,
  sym_bodygraphql = 69,
  sym_bodygraphqlvars = 70,
  sym_bodyformurlencoded = 71,
  sym_bodyformmultipart = 72,
  sym_varsandassert = 73,
  sym_vars = 74,
  sym_vars_secret = 75,
  sym_varsreq = 76,
  sym_varsres = 77,
  sym_assert = 78,
  sym_script = 79,
  sym_scriptreq = 80,
  sym_scriptres = 81,
  sym_tests = 82,
  sym_docs = 83,
  sym_settings = 84,
  sym_textblock = 85,
  sym_array = 86,
  sym_dictionary = 87,
  sym_dictionary_pair = 88,
  sym_assert_dictionary = 89,
  sym_assert_dictionary_pair = 90,
  aux_sym_source_file_repeat1 = 91,
  aux_sym_array_repeat1 = 92,
  aux_sym_dictionary_repeat1 = 93,
  aux_sym_assert_dictionary_repeat1 = 94,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_meta] = "keyword",
  [anon_sym_get] = "get",
  [anon_sym_post] = "post",
  [anon_sym_put] = "put",
  [anon_sym_delete] = "delete",
  [anon_sym_patch] = "patch",
  [anon_sym_options] = "options",
  [anon_sym_head] = "head",
  [anon_sym_connect] = "connect",
  [anon_sym_trace] = "trace",
  [anon_sym_query] = "keyword",
  [anon_sym_headers] = "keyword",
  [anon_sym_auth] = "keyword",
  [anon_sym_auth_COLONawsv4] = "keyword",
  [anon_sym_auth_COLONbasic] = "keyword",
  [anon_sym_auth_COLONbearer] = "keyword",
  [anon_sym_auth_COLONdigest] = "keyword",
  [anon_sym_auth_COLONoauth2] = "keyword",
  [anon_sym_body] = "keyword",
  [anon_sym_body_COLONjson] = "keyword",
  [anon_sym_body_COLONtext] = "keyword",
  [anon_sym_body_COLONxml] = "keyword",
  [anon_sym_body_COLONsparql] = "keyword",
  [anon_sym_body_COLONgraphql] = "keyword",
  [anon_sym_body_COLONgraphql_COLONvars] = "keyword",
  [anon_sym_body_COLONform_DASHurlencoded] = "keyword",
  [anon_sym_body_COLONmultipart_DASHform] = "keyword",
  [anon_sym_vars] = "keyword",
  [anon_sym_vars_COLONsecret] = "keyword",
  [anon_sym_vars_COLONpre_DASHrequest] = "keyword",
  [anon_sym_vars_COLONpost_DASHresponse] = "keyword",
  [anon_sym_assert] = "keyword",
  [anon_sym_script_COLONpre_DASHrequest] = "keyword",
  [anon_sym_script_COLONpost_DASHresponse] = "keyword",
  [anon_sym_tests] = "keyword",
  [anon_sym_docs] = "keyword",
  [anon_sym_settings] = "keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_array_value] = "array_value",
  [anon_sym_COLON] = ":",
  [sym_assert_key] = "assert_key",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_rawtext] = "rawtext",
  [sym_source_file] = "source_file",
  [sym_meta] = "meta",
  [sym_http] = "http",
  [sym_http_verb] = "keyword",
  [sym_query] = "query",
  [sym_headers] = "headers",
  [sym_auths] = "auths",
  [sym_auth] = "auth",
  [sym_authawsv4] = "authawsv4",
  [sym_authbasic] = "authbasic",
  [sym_authbearer] = "authbearer",
  [sym_authdigest] = "authdigest",
  [sym_authoauth2] = "authoauth2",
  [sym_bodies] = "bodies",
  [sym_bodyforms] = "bodyforms",
  [sym_body] = "body",
  [sym_bodyjson] = "bodyjson",
  [sym_bodytext] = "bodytext",
  [sym_bodyxml] = "bodyxml",
  [sym_bodysparql] = "bodysparql",
  [sym_bodygraphql] = "bodygraphql",
  [sym_bodygraphqlvars] = "bodygraphqlvars",
  [sym_bodyformurlencoded] = "bodyformurlencoded",
  [sym_bodyformmultipart] = "bodyformmultipart",
  [sym_varsandassert] = "varsandassert",
  [sym_vars] = "vars",
  [sym_vars_secret] = "vars_secret",
  [sym_varsreq] = "varsreq",
  [sym_varsres] = "varsres",
  [sym_assert] = "assert",
  [sym_script] = "script",
  [sym_scriptreq] = "scriptreq",
  [sym_scriptres] = "scriptres",
  [sym_tests] = "tests",
  [sym_docs] = "docs",
  [sym_settings] = "settings",
  [sym_textblock] = "textblock",
  [sym_array] = "array",
  [sym_dictionary] = "dictionary",
  [sym_dictionary_pair] = "dictionary_pair",
  [sym_assert_dictionary] = "assert_dictionary",
  [sym_assert_dictionary_pair] = "assert_dictionary_pair",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_assert_dictionary_repeat1] = "assert_dictionary_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_post] = anon_sym_post,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_connect] = anon_sym_connect,
  [anon_sym_trace] = anon_sym_trace,
  [anon_sym_query] = anon_sym_meta,
  [anon_sym_headers] = anon_sym_meta,
  [anon_sym_auth] = anon_sym_meta,
  [anon_sym_auth_COLONawsv4] = anon_sym_meta,
  [anon_sym_auth_COLONbasic] = anon_sym_meta,
  [anon_sym_auth_COLONbearer] = anon_sym_meta,
  [anon_sym_auth_COLONdigest] = anon_sym_meta,
  [anon_sym_auth_COLONoauth2] = anon_sym_meta,
  [anon_sym_body] = anon_sym_meta,
  [anon_sym_body_COLONjson] = anon_sym_meta,
  [anon_sym_body_COLONtext] = anon_sym_meta,
  [anon_sym_body_COLONxml] = anon_sym_meta,
  [anon_sym_body_COLONsparql] = anon_sym_meta,
  [anon_sym_body_COLONgraphql] = anon_sym_meta,
  [anon_sym_body_COLONgraphql_COLONvars] = anon_sym_meta,
  [anon_sym_body_COLONform_DASHurlencoded] = anon_sym_meta,
  [anon_sym_body_COLONmultipart_DASHform] = anon_sym_meta,
  [anon_sym_vars] = anon_sym_meta,
  [anon_sym_vars_COLONsecret] = anon_sym_meta,
  [anon_sym_vars_COLONpre_DASHrequest] = anon_sym_meta,
  [anon_sym_vars_COLONpost_DASHresponse] = anon_sym_meta,
  [anon_sym_assert] = anon_sym_meta,
  [anon_sym_script_COLONpre_DASHrequest] = anon_sym_meta,
  [anon_sym_script_COLONpost_DASHresponse] = anon_sym_meta,
  [anon_sym_tests] = anon_sym_meta,
  [anon_sym_docs] = anon_sym_meta,
  [anon_sym_settings] = anon_sym_meta,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_array_value] = sym_array_value,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_assert_key] = sym_assert_key,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_rawtext] = sym_rawtext,
  [sym_source_file] = sym_source_file,
  [sym_meta] = sym_meta,
  [sym_http] = sym_http,
  [sym_http_verb] = anon_sym_meta,
  [sym_query] = sym_query,
  [sym_headers] = sym_headers,
  [sym_auths] = sym_auths,
  [sym_auth] = sym_auth,
  [sym_authawsv4] = sym_authawsv4,
  [sym_authbasic] = sym_authbasic,
  [sym_authbearer] = sym_authbearer,
  [sym_authdigest] = sym_authdigest,
  [sym_authoauth2] = sym_authoauth2,
  [sym_bodies] = sym_bodies,
  [sym_bodyforms] = sym_bodyforms,
  [sym_body] = sym_body,
  [sym_bodyjson] = sym_bodyjson,
  [sym_bodytext] = sym_bodytext,
  [sym_bodyxml] = sym_bodyxml,
  [sym_bodysparql] = sym_bodysparql,
  [sym_bodygraphql] = sym_bodygraphql,
  [sym_bodygraphqlvars] = sym_bodygraphqlvars,
  [sym_bodyformurlencoded] = sym_bodyformurlencoded,
  [sym_bodyformmultipart] = sym_bodyformmultipart,
  [sym_varsandassert] = sym_varsandassert,
  [sym_vars] = sym_vars,
  [sym_vars_secret] = sym_vars_secret,
  [sym_varsreq] = sym_varsreq,
  [sym_varsres] = sym_varsres,
  [sym_assert] = sym_assert,
  [sym_script] = sym_script,
  [sym_scriptreq] = sym_scriptreq,
  [sym_scriptres] = sym_scriptres,
  [sym_tests] = sym_tests,
  [sym_docs] = sym_docs,
  [sym_settings] = sym_settings,
  [sym_textblock] = sym_textblock,
  [sym_array] = sym_array,
  [sym_dictionary] = sym_dictionary,
  [sym_dictionary_pair] = sym_dictionary_pair,
  [sym_assert_dictionary] = sym_assert_dictionary,
  [sym_assert_dictionary_pair] = sym_assert_dictionary_pair,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
  [aux_sym_assert_dictionary_repeat1] = aux_sym_assert_dictionary_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_headers] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONawsv4] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONbasic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONbearer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONdigest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONoauth2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONjson] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONtext] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONxml] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONsparql] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONgraphql] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONgraphql_COLONvars] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONform_DASHurlencoded] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONmultipart_DASHform] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONsecret] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONpre_DASHrequest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONpost_DASHresponse] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script_COLONpre_DASHrequest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script_COLONpost_DASHresponse] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tests] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_docs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_settings] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_array_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_assert_key] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_rawtext] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_http] = {
    .visible = true,
    .named = true,
  },
  [sym_http_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_headers] = {
    .visible = true,
    .named = true,
  },
  [sym_auths] = {
    .visible = true,
    .named = true,
  },
  [sym_auth] = {
    .visible = true,
    .named = true,
  },
  [sym_authawsv4] = {
    .visible = true,
    .named = true,
  },
  [sym_authbasic] = {
    .visible = true,
    .named = true,
  },
  [sym_authbearer] = {
    .visible = true,
    .named = true,
  },
  [sym_authdigest] = {
    .visible = true,
    .named = true,
  },
  [sym_authoauth2] = {
    .visible = true,
    .named = true,
  },
  [sym_bodies] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyforms] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyjson] = {
    .visible = true,
    .named = true,
  },
  [sym_bodytext] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyxml] = {
    .visible = true,
    .named = true,
  },
  [sym_bodysparql] = {
    .visible = true,
    .named = true,
  },
  [sym_bodygraphql] = {
    .visible = true,
    .named = true,
  },
  [sym_bodygraphqlvars] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyformurlencoded] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyformmultipart] = {
    .visible = true,
    .named = true,
  },
  [sym_varsandassert] = {
    .visible = true,
    .named = true,
  },
  [sym_vars] = {
    .visible = true,
    .named = true,
  },
  [sym_vars_secret] = {
    .visible = true,
    .named = true,
  },
  [sym_varsreq] = {
    .visible = true,
    .named = true,
  },
  [sym_varsres] = {
    .visible = true,
    .named = true,
  },
  [sym_assert] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptreq] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptres] = {
    .visible = true,
    .named = true,
  },
  [sym_tests] = {
    .visible = true,
    .named = true,
  },
  [sym_docs] = {
    .visible = true,
    .named = true,
  },
  [sym_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_textblock] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_dictionary_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assert_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_tag = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_tag] = "tag",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_tag, 0},
  [1] =
    {field_tag, 0, .inherited = true},
  [2] =
    {field_tag, 0, .inherited = true},
    {field_tag, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(199);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == ',') ADVANCE(242);
      if (lookahead == ':') ADVANCE(245);
      if (lookahead == '[') ADVANCE(241);
      if (lookahead == ']') ADVANCE(243);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'q') ADVANCE(188);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '{') ADVANCE(237);
      if (lookahead == '}') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(248);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '}') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(247);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ',') ADVANCE(242);
      if (lookahead == ']') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(244);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(189);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(138);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(217);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(213);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(116);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'g') ADVANCE(128);
      if (lookahead == 'j') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(205);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(5);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 117:
      if (lookahead == 'q') ADVANCE(81);
      END_STATE();
    case 118:
      if (lookahead == 'q') ADVANCE(82);
      END_STATE();
    case 119:
      if (lookahead == 'q') ADVANCE(191);
      END_STATE();
    case 120:
      if (lookahead == 'q') ADVANCE(192);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 193:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 194:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 195:
      if (lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 196:
      if (lookahead == 'x') ADVANCE(171);
      END_STATE();
    case 197:
      if (lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 198:
      if (lookahead == 'y') ADVANCE(210);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_auth);
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_auth_COLONawsv4);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_auth_COLONbasic);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_auth_COLONbearer);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_auth_COLONdigest);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_body);
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_body_COLONjson);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_body_COLONtext);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_body_COLONxml);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_body_COLONsparql);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql);
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql_COLONvars);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_body_COLONform_DASHurlencoded);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_body_COLONmultipart_DASHform);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_vars);
      if (lookahead == ':') ADVANCE(108);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_vars_COLONsecret);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_vars_COLONpre_DASHrequest);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_vars_COLONpost_DASHresponse);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_script_COLONpre_DASHrequest);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_script_COLONpost_DASHresponse);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_tests);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_docs);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_settings);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(248);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(247);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_array_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead == '}') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(250);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 249},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 249},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
};

enum {
  ts_external_token_rawtext = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_rawtext] = sym_rawtext,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_rawtext] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_connect] = ACTIONS(1),
    [anon_sym_trace] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_headers] = ACTIONS(1),
    [anon_sym_auth] = ACTIONS(1),
    [anon_sym_auth_COLONawsv4] = ACTIONS(1),
    [anon_sym_auth_COLONbasic] = ACTIONS(1),
    [anon_sym_auth_COLONbearer] = ACTIONS(1),
    [anon_sym_auth_COLONdigest] = ACTIONS(1),
    [anon_sym_auth_COLONoauth2] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_body_COLONjson] = ACTIONS(1),
    [anon_sym_body_COLONtext] = ACTIONS(1),
    [anon_sym_body_COLONxml] = ACTIONS(1),
    [anon_sym_body_COLONsparql] = ACTIONS(1),
    [anon_sym_body_COLONgraphql] = ACTIONS(1),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(1),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(1),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(1),
    [anon_sym_vars] = ACTIONS(1),
    [anon_sym_vars_COLONsecret] = ACTIONS(1),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(1),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(1),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(1),
    [anon_sym_tests] = ACTIONS(1),
    [anon_sym_docs] = ACTIONS(1),
    [anon_sym_settings] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_rawtext] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(96),
    [sym_meta] = STATE(32),
    [sym_http] = STATE(32),
    [sym_http_verb] = STATE(62),
    [sym_query] = STATE(32),
    [sym_headers] = STATE(32),
    [sym_auths] = STATE(32),
    [sym_auth] = STATE(34),
    [sym_authawsv4] = STATE(34),
    [sym_authbasic] = STATE(34),
    [sym_authbearer] = STATE(34),
    [sym_authdigest] = STATE(34),
    [sym_authoauth2] = STATE(34),
    [sym_bodies] = STATE(32),
    [sym_bodyforms] = STATE(35),
    [sym_body] = STATE(35),
    [sym_bodyjson] = STATE(35),
    [sym_bodytext] = STATE(35),
    [sym_bodyxml] = STATE(35),
    [sym_bodysparql] = STATE(35),
    [sym_bodygraphql] = STATE(35),
    [sym_bodygraphqlvars] = STATE(35),
    [sym_bodyformurlencoded] = STATE(36),
    [sym_bodyformmultipart] = STATE(36),
    [sym_varsandassert] = STATE(32),
    [sym_vars] = STATE(37),
    [sym_vars_secret] = STATE(37),
    [sym_varsreq] = STATE(37),
    [sym_varsres] = STATE(37),
    [sym_assert] = STATE(37),
    [sym_script] = STATE(32),
    [sym_scriptreq] = STATE(38),
    [sym_scriptres] = STATE(38),
    [sym_tests] = STATE(32),
    [sym_docs] = STATE(32),
    [sym_settings] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_meta] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(7),
    [anon_sym_post] = ACTIONS(7),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_delete] = ACTIONS(7),
    [anon_sym_patch] = ACTIONS(7),
    [anon_sym_options] = ACTIONS(7),
    [anon_sym_head] = ACTIONS(9),
    [anon_sym_connect] = ACTIONS(7),
    [anon_sym_trace] = ACTIONS(7),
    [anon_sym_query] = ACTIONS(11),
    [anon_sym_headers] = ACTIONS(13),
    [anon_sym_auth] = ACTIONS(15),
    [anon_sym_auth_COLONawsv4] = ACTIONS(17),
    [anon_sym_auth_COLONbasic] = ACTIONS(19),
    [anon_sym_auth_COLONbearer] = ACTIONS(21),
    [anon_sym_auth_COLONdigest] = ACTIONS(23),
    [anon_sym_auth_COLONoauth2] = ACTIONS(25),
    [anon_sym_body] = ACTIONS(27),
    [anon_sym_body_COLONjson] = ACTIONS(29),
    [anon_sym_body_COLONtext] = ACTIONS(31),
    [anon_sym_body_COLONxml] = ACTIONS(33),
    [anon_sym_body_COLONsparql] = ACTIONS(35),
    [anon_sym_body_COLONgraphql] = ACTIONS(37),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(39),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(41),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(43),
    [anon_sym_vars] = ACTIONS(45),
    [anon_sym_vars_COLONsecret] = ACTIONS(47),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(49),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(51),
    [anon_sym_assert] = ACTIONS(53),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(55),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(57),
    [anon_sym_tests] = ACTIONS(59),
    [anon_sym_docs] = ACTIONS(61),
    [anon_sym_settings] = ACTIONS(63),
  },
  [2] = {
    [sym_meta] = STATE(32),
    [sym_http] = STATE(32),
    [sym_http_verb] = STATE(62),
    [sym_query] = STATE(32),
    [sym_headers] = STATE(32),
    [sym_auths] = STATE(32),
    [sym_auth] = STATE(34),
    [sym_authawsv4] = STATE(34),
    [sym_authbasic] = STATE(34),
    [sym_authbearer] = STATE(34),
    [sym_authdigest] = STATE(34),
    [sym_authoauth2] = STATE(34),
    [sym_bodies] = STATE(32),
    [sym_bodyforms] = STATE(35),
    [sym_body] = STATE(35),
    [sym_bodyjson] = STATE(35),
    [sym_bodytext] = STATE(35),
    [sym_bodyxml] = STATE(35),
    [sym_bodysparql] = STATE(35),
    [sym_bodygraphql] = STATE(35),
    [sym_bodygraphqlvars] = STATE(35),
    [sym_bodyformurlencoded] = STATE(36),
    [sym_bodyformmultipart] = STATE(36),
    [sym_varsandassert] = STATE(32),
    [sym_vars] = STATE(37),
    [sym_vars_secret] = STATE(37),
    [sym_varsreq] = STATE(37),
    [sym_varsres] = STATE(37),
    [sym_assert] = STATE(37),
    [sym_script] = STATE(32),
    [sym_scriptreq] = STATE(38),
    [sym_scriptres] = STATE(38),
    [sym_tests] = STATE(32),
    [sym_docs] = STATE(32),
    [sym_settings] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_meta] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(7),
    [anon_sym_post] = ACTIONS(7),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_delete] = ACTIONS(7),
    [anon_sym_patch] = ACTIONS(7),
    [anon_sym_options] = ACTIONS(7),
    [anon_sym_head] = ACTIONS(9),
    [anon_sym_connect] = ACTIONS(7),
    [anon_sym_trace] = ACTIONS(7),
    [anon_sym_query] = ACTIONS(11),
    [anon_sym_headers] = ACTIONS(13),
    [anon_sym_auth] = ACTIONS(15),
    [anon_sym_auth_COLONawsv4] = ACTIONS(17),
    [anon_sym_auth_COLONbasic] = ACTIONS(19),
    [anon_sym_auth_COLONbearer] = ACTIONS(21),
    [anon_sym_auth_COLONdigest] = ACTIONS(23),
    [anon_sym_auth_COLONoauth2] = ACTIONS(25),
    [anon_sym_body] = ACTIONS(27),
    [anon_sym_body_COLONjson] = ACTIONS(29),
    [anon_sym_body_COLONtext] = ACTIONS(31),
    [anon_sym_body_COLONxml] = ACTIONS(33),
    [anon_sym_body_COLONsparql] = ACTIONS(35),
    [anon_sym_body_COLONgraphql] = ACTIONS(37),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(39),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(41),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(43),
    [anon_sym_vars] = ACTIONS(45),
    [anon_sym_vars_COLONsecret] = ACTIONS(47),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(49),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(51),
    [anon_sym_assert] = ACTIONS(53),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(55),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(57),
    [anon_sym_tests] = ACTIONS(59),
    [anon_sym_docs] = ACTIONS(61),
    [anon_sym_settings] = ACTIONS(63),
  },
  [3] = {
    [sym_meta] = STATE(32),
    [sym_http] = STATE(32),
    [sym_http_verb] = STATE(62),
    [sym_query] = STATE(32),
    [sym_headers] = STATE(32),
    [sym_auths] = STATE(32),
    [sym_auth] = STATE(34),
    [sym_authawsv4] = STATE(34),
    [sym_authbasic] = STATE(34),
    [sym_authbearer] = STATE(34),
    [sym_authdigest] = STATE(34),
    [sym_authoauth2] = STATE(34),
    [sym_bodies] = STATE(32),
    [sym_bodyforms] = STATE(35),
    [sym_body] = STATE(35),
    [sym_bodyjson] = STATE(35),
    [sym_bodytext] = STATE(35),
    [sym_bodyxml] = STATE(35),
    [sym_bodysparql] = STATE(35),
    [sym_bodygraphql] = STATE(35),
    [sym_bodygraphqlvars] = STATE(35),
    [sym_bodyformurlencoded] = STATE(36),
    [sym_bodyformmultipart] = STATE(36),
    [sym_varsandassert] = STATE(32),
    [sym_vars] = STATE(37),
    [sym_vars_secret] = STATE(37),
    [sym_varsreq] = STATE(37),
    [sym_varsres] = STATE(37),
    [sym_assert] = STATE(37),
    [sym_script] = STATE(32),
    [sym_scriptreq] = STATE(38),
    [sym_scriptres] = STATE(38),
    [sym_tests] = STATE(32),
    [sym_docs] = STATE(32),
    [sym_settings] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_meta] = ACTIONS(69),
    [anon_sym_get] = ACTIONS(72),
    [anon_sym_post] = ACTIONS(72),
    [anon_sym_put] = ACTIONS(72),
    [anon_sym_delete] = ACTIONS(72),
    [anon_sym_patch] = ACTIONS(72),
    [anon_sym_options] = ACTIONS(72),
    [anon_sym_head] = ACTIONS(75),
    [anon_sym_connect] = ACTIONS(72),
    [anon_sym_trace] = ACTIONS(72),
    [anon_sym_query] = ACTIONS(78),
    [anon_sym_headers] = ACTIONS(81),
    [anon_sym_auth] = ACTIONS(84),
    [anon_sym_auth_COLONawsv4] = ACTIONS(87),
    [anon_sym_auth_COLONbasic] = ACTIONS(90),
    [anon_sym_auth_COLONbearer] = ACTIONS(93),
    [anon_sym_auth_COLONdigest] = ACTIONS(96),
    [anon_sym_auth_COLONoauth2] = ACTIONS(99),
    [anon_sym_body] = ACTIONS(102),
    [anon_sym_body_COLONjson] = ACTIONS(105),
    [anon_sym_body_COLONtext] = ACTIONS(108),
    [anon_sym_body_COLONxml] = ACTIONS(111),
    [anon_sym_body_COLONsparql] = ACTIONS(114),
    [anon_sym_body_COLONgraphql] = ACTIONS(117),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(120),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(123),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(126),
    [anon_sym_vars] = ACTIONS(129),
    [anon_sym_vars_COLONsecret] = ACTIONS(132),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(135),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(138),
    [anon_sym_assert] = ACTIONS(141),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(144),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(147),
    [anon_sym_tests] = ACTIONS(150),
    [anon_sym_docs] = ACTIONS(153),
    [anon_sym_settings] = ACTIONS(156),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(161), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(159), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [43] = 2,
    ACTIONS(165), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(163), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [86] = 2,
    ACTIONS(169), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(167), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [129] = 2,
    ACTIONS(173), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(171), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [172] = 2,
    ACTIONS(177), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(175), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [215] = 2,
    ACTIONS(181), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(179), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [258] = 2,
    ACTIONS(185), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(183), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [301] = 2,
    ACTIONS(189), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(187), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [344] = 2,
    ACTIONS(193), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(191), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [387] = 2,
    ACTIONS(197), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(195), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [430] = 2,
    ACTIONS(201), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(199), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [473] = 2,
    ACTIONS(205), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(203), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [516] = 2,
    ACTIONS(209), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(207), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [559] = 2,
    ACTIONS(213), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(211), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [602] = 2,
    ACTIONS(217), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(215), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [645] = 2,
    ACTIONS(221), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(219), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [688] = 2,
    ACTIONS(225), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(223), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [731] = 2,
    ACTIONS(229), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(227), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [774] = 2,
    ACTIONS(233), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(231), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [817] = 2,
    ACTIONS(237), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(235), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [860] = 2,
    ACTIONS(241), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(239), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [903] = 2,
    ACTIONS(245), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(243), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [946] = 2,
    ACTIONS(249), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(247), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [989] = 2,
    ACTIONS(253), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(251), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1032] = 2,
    ACTIONS(257), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(255), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1075] = 2,
    ACTIONS(261), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(259), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1118] = 2,
    ACTIONS(265), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(263), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1161] = 2,
    ACTIONS(269), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(267), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1204] = 2,
    ACTIONS(273), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(271), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1247] = 2,
    ACTIONS(277), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(275), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1290] = 2,
    ACTIONS(281), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(279), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1333] = 2,
    ACTIONS(285), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(283), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1376] = 2,
    ACTIONS(289), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(287), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1419] = 2,
    ACTIONS(293), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(291), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1462] = 2,
    ACTIONS(297), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(295), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1505] = 2,
    ACTIONS(301), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(299), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1548] = 2,
    ACTIONS(305), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(303), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1591] = 2,
    ACTIONS(309), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(307), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1634] = 2,
    ACTIONS(313), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(311), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1677] = 2,
    ACTIONS(317), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(315), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1720] = 2,
    ACTIONS(321), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(319), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1763] = 2,
    ACTIONS(325), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(323), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1806] = 2,
    ACTIONS(329), 5,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(327), 33,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_settings,
  [1849] = 3,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 1,
      sym_key,
    STATE(48), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1860] = 3,
    ACTIONS(333), 1,
      sym_key,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1871] = 3,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      sym_assert_key,
    STATE(50), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1882] = 3,
    ACTIONS(339), 1,
      sym_assert_key,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(52), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1893] = 3,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      sym_key,
    STATE(51), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1904] = 3,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 1,
      sym_assert_key,
    STATE(52), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1915] = 3,
    ACTIONS(353), 1,
      anon_sym_RBRACK,
    ACTIONS(355), 1,
      sym_array_value,
    STATE(55), 1,
      aux_sym_array_repeat1,
  [1925] = 2,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(359), 2,
      anon_sym_RBRACK,
      sym_array_value,
  [1933] = 3,
    ACTIONS(355), 1,
      sym_array_value,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_array_repeat1,
  [1943] = 3,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    ACTIONS(365), 1,
      sym_array_value,
    STATE(56), 1,
      aux_sym_array_repeat1,
  [1953] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_dictionary,
  [1960] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_dictionary,
  [1967] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_textblock,
  [1974] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_dictionary,
  [1981] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_dictionary,
  [1988] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_dictionary,
  [1995] = 1,
    ACTIONS(372), 2,
      anon_sym_RBRACE,
      sym_assert_key,
  [2000] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_dictionary,
  [2007] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_textblock,
  [2014] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_textblock,
  [2021] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_textblock,
  [2028] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_assert_dictionary,
  [2035] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_dictionary,
  [2042] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_dictionary,
  [2049] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_dictionary,
  [2056] = 2,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      sym_array,
  [2063] = 1,
    ACTIONS(378), 2,
      anon_sym_RBRACE,
      sym_key,
  [2068] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_dictionary,
  [2075] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_dictionary,
  [2082] = 2,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      sym_rawtext,
  [2089] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_dictionary,
  [2096] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_dictionary,
  [2103] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_textblock,
  [2110] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_textblock,
  [2117] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_textblock,
  [2124] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_textblock,
  [2131] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_dictionary,
  [2138] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_textblock,
  [2145] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_dictionary,
  [2152] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_textblock,
  [2159] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_textblock,
  [2166] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_dictionary,
  [2173] = 1,
    ACTIONS(363), 2,
      anon_sym_RBRACK,
      sym_array_value,
  [2178] = 1,
    ACTIONS(384), 1,
      sym_value,
  [2182] = 1,
    ACTIONS(386), 1,
      anon_sym_COLON,
  [2186] = 1,
    ACTIONS(388), 1,
      sym_value,
  [2190] = 1,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
  [2194] = 1,
    ACTIONS(392), 1,
      anon_sym_COLON,
  [2198] = 1,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
  [2202] = 1,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 43,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 172,
  [SMALL_STATE(9)] = 215,
  [SMALL_STATE(10)] = 258,
  [SMALL_STATE(11)] = 301,
  [SMALL_STATE(12)] = 344,
  [SMALL_STATE(13)] = 387,
  [SMALL_STATE(14)] = 430,
  [SMALL_STATE(15)] = 473,
  [SMALL_STATE(16)] = 516,
  [SMALL_STATE(17)] = 559,
  [SMALL_STATE(18)] = 602,
  [SMALL_STATE(19)] = 645,
  [SMALL_STATE(20)] = 688,
  [SMALL_STATE(21)] = 731,
  [SMALL_STATE(22)] = 774,
  [SMALL_STATE(23)] = 817,
  [SMALL_STATE(24)] = 860,
  [SMALL_STATE(25)] = 903,
  [SMALL_STATE(26)] = 946,
  [SMALL_STATE(27)] = 989,
  [SMALL_STATE(28)] = 1032,
  [SMALL_STATE(29)] = 1075,
  [SMALL_STATE(30)] = 1118,
  [SMALL_STATE(31)] = 1161,
  [SMALL_STATE(32)] = 1204,
  [SMALL_STATE(33)] = 1247,
  [SMALL_STATE(34)] = 1290,
  [SMALL_STATE(35)] = 1333,
  [SMALL_STATE(36)] = 1376,
  [SMALL_STATE(37)] = 1419,
  [SMALL_STATE(38)] = 1462,
  [SMALL_STATE(39)] = 1505,
  [SMALL_STATE(40)] = 1548,
  [SMALL_STATE(41)] = 1591,
  [SMALL_STATE(42)] = 1634,
  [SMALL_STATE(43)] = 1677,
  [SMALL_STATE(44)] = 1720,
  [SMALL_STATE(45)] = 1763,
  [SMALL_STATE(46)] = 1806,
  [SMALL_STATE(47)] = 1849,
  [SMALL_STATE(48)] = 1860,
  [SMALL_STATE(49)] = 1871,
  [SMALL_STATE(50)] = 1882,
  [SMALL_STATE(51)] = 1893,
  [SMALL_STATE(52)] = 1904,
  [SMALL_STATE(53)] = 1915,
  [SMALL_STATE(54)] = 1925,
  [SMALL_STATE(55)] = 1933,
  [SMALL_STATE(56)] = 1943,
  [SMALL_STATE(57)] = 1953,
  [SMALL_STATE(58)] = 1960,
  [SMALL_STATE(59)] = 1967,
  [SMALL_STATE(60)] = 1974,
  [SMALL_STATE(61)] = 1981,
  [SMALL_STATE(62)] = 1988,
  [SMALL_STATE(63)] = 1995,
  [SMALL_STATE(64)] = 2000,
  [SMALL_STATE(65)] = 2007,
  [SMALL_STATE(66)] = 2014,
  [SMALL_STATE(67)] = 2021,
  [SMALL_STATE(68)] = 2028,
  [SMALL_STATE(69)] = 2035,
  [SMALL_STATE(70)] = 2042,
  [SMALL_STATE(71)] = 2049,
  [SMALL_STATE(72)] = 2056,
  [SMALL_STATE(73)] = 2063,
  [SMALL_STATE(74)] = 2068,
  [SMALL_STATE(75)] = 2075,
  [SMALL_STATE(76)] = 2082,
  [SMALL_STATE(77)] = 2089,
  [SMALL_STATE(78)] = 2096,
  [SMALL_STATE(79)] = 2103,
  [SMALL_STATE(80)] = 2110,
  [SMALL_STATE(81)] = 2117,
  [SMALL_STATE(82)] = 2124,
  [SMALL_STATE(83)] = 2131,
  [SMALL_STATE(84)] = 2138,
  [SMALL_STATE(85)] = 2145,
  [SMALL_STATE(86)] = 2152,
  [SMALL_STATE(87)] = 2159,
  [SMALL_STATE(88)] = 2166,
  [SMALL_STATE(89)] = 2173,
  [SMALL_STATE(90)] = 2178,
  [SMALL_STATE(91)] = 2182,
  [SMALL_STATE(92)] = 2186,
  [SMALL_STATE(93)] = 2190,
  [SMALL_STATE(94)] = 2194,
  [SMALL_STATE(95)] = 2198,
  [SMALL_STATE(96)] = 2202,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(61),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(95),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(95),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(71),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(57),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(60),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(75),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(77),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(83),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(85),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(88),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(87),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(86),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(84),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(82),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(81),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(80),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(79),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(78),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(58),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(74),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(72),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(70),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(69),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(68),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(67),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(59),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(66),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(65),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(64),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars_secret, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars_secret, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyformurlencoded, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyformurlencoded, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphqlvars, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphqlvars, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphql, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphql, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodysparql, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodysparql, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyxml, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyxml, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodytext, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodytext, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authoauth2, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authoauth2, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tests, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tests, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptres, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptres, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptreq, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptreq, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyjson, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyjson, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsres, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsres, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsreq, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsreq, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyformmultipart, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyformmultipart, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authdigest, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authdigest, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auths, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auths, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodies, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodies, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyforms, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyforms, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsandassert, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsandassert, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbearer, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbearer, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authawsv4, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authawsv4, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbasic, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbasic, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(94),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2), SHIFT_REPEAT(91),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(54),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary_pair, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_pair, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_verb, 1),
  [396] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_bruno_external_scanner_create(void);
void tree_sitter_bruno_external_scanner_destroy(void *);
bool tree_sitter_bruno_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_bruno_external_scanner_serialize(void *, char *);
void tree_sitter_bruno_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bruno(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_bruno_external_scanner_create,
      tree_sitter_bruno_external_scanner_destroy,
      tree_sitter_bruno_external_scanner_scan,
      tree_sitter_bruno_external_scanner_serialize,
      tree_sitter_bruno_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
