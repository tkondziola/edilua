#ifndef LUAENGINE_H
#define LUAENGINE_H

#include <QObject>

// Lua headers
#include <lua5.1/lua.h>
#include <lua5.1/lauxlib.h>
#include <lua5.1/lualib.h>

class LuaEngine : public QObject {

    Q_OBJECT

public:
    explicit LuaEngine(QObject *parent = 0);
    ~LuaEngine();

    void luaExecute();

signals:
    void luaEngineError(int error);

private:
    lua_State *L;
};

#endif // LUAENGINE_H

