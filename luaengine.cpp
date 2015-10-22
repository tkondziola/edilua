#include "luaengine.h"
#include <QDebug>


LuaEngine::LuaEngine(QObject *parent) : QObject(parent) {
    // Initialize Lua
    L = lua_open();
    luaL_openlibs(L);
}

LuaEngine::~LuaEngine() {
    lua_close(L);
    L = NULL;
}

void LuaEngine::luaExecute() {
    int rv = lua_load(L, NULL, NULL, "tmp");
    if (0 != rv) {
        emit luaEngineError(rv);
    }
}
