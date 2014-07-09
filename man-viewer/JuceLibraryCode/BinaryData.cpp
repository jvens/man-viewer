/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

namespace BinaryData
{

//================== settings.json ==================
static const unsigned char temp_binary_data_0[] =
"settings\r\n"
"{\r\n"
"    \r\n"
"}";

const char* settings_json = (const char*) temp_binary_data_0;

//================== gui.json ==================
static const unsigned char temp_binary_data_1[] =
"";

const char* gui_json = (const char*) temp_binary_data_1;


const char* getNamedResource (const char*, int&) throw();
const char* getNamedResource (const char* resourceNameUTF8, int& numBytes) throw()
{
    unsigned int hash = 0;
    if (resourceNameUTF8 != 0)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0xdbf90784:  numBytes = 20; return settings_json;
        case 0xb16ba16c:  numBytes = 0; return gui_json;
        default: break;
    }

    numBytes = 0;
    return 0;
}

const char* namedResourceList[] =
{
    "settings_json",
    "gui_json"
};

}
