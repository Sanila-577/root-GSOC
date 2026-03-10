/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// String table

#ifdef OPTTABLE_STR_TABLE_CODE

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
static constexpr char OptionStrTableStorage[] = 
  "\0"
  "-\0"
  "--\0"
  "<input>\0"
  "<unknown>\0"
  "--debug-only=\0"
  "--debug-only\0"
  "--errorout\0"
  "-help\0"
  "-L\0"
  "-l\0"
  "--metastr=\0"
  "--metastr\0"
  "--nologo\0"
  "-noruntime\0"
  "--ptrcheck\0"
  "-version\0"
  "-v\0"
  ;
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

static constexpr llvm::StringTable OptionStrTable =
    OptionStrTableStorage;
#endif // OPTTABLE_STR_TABLE_CODE

/////////
// Prefixes

#ifdef OPTTABLE_PREFIXES_TABLE_CODE
static constexpr llvm::StringTable::Offset OptionPrefixesTable[] = {
  0 /* prefixes */,
  1 /* prefixes */, 1 /* '-' */,
  2 /* prefixes */, 1 /* '-' */, 3 /* '--' */,
  1 /* prefixes */, 3 /* '--' */
};
#endif // OPTTABLE_PREFIXES_TABLE_CODE

/////////
// Prefix Union

#ifdef OPTTABLE_PREFIXES_UNION_CODE
static constexpr llvm::StringTable::Offset OptionPrefixesUnion[] = {
  1 /* '-' */,   3 /* '--' */
};
#endif // OPTTABLE_PREFIXES_UNION_CODE

/////////
// ValuesCode

#ifdef OPTTABLE_VALUES_CODE
#endif
/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(0, 6 /* <input> */, INPUT, Input, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(0, 14 /* <unknown> */, UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(6, 24 /* --debug-only= */, _debugFlags_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(6, 38 /* --debug-only */, _debugFlags, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(6, 51 /* --errorout */, _errorout, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Do not recover from input errors", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(3, 62 /* -help */, help, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Print this help text", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 68 /* -L */, L, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Add directory to library search path", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), "<directory>", nullptr)
OPTION(1, 71 /* -l */, l, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Load a library before prompt", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), "<library>", nullptr)
OPTION(6, 74 /* --metastr= */, _metastr_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Set the meta command tag, default '.'", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(6, 85 /* --metastr */, _metastr, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Set the meta command tag, default '.'", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(6, 95 /* --nologo */, _nologo, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Do not show startup-banner", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(3, 104 /* -noruntime */, noruntime, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Disable runtime support (no null checking, no value printing)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(6, 115 /* --ptrcheck */, _ptrcheck, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Enable injection of pointer validity checks", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(3, 126 /* -version */, version, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the compiler version", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 135 /* -v */, v, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Enable verbose output", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
#endif // OPTION

#ifdef SIMPLE_ENUM_VALUE_TABLE

struct SimpleEnumValue {
  const char *Name;
  unsigned Value;
};

struct SimpleEnumValueTable {
  const SimpleEnumValue *Table;
  unsigned Size;
};
static const SimpleEnumValueTable SimpleEnumValueTables[] = {};
static const unsigned SimpleEnumValueTablesSize = std::size(SimpleEnumValueTables);
#endif // SIMPLE_ENUM_VALUE_TABLE


