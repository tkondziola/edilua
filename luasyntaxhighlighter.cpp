#include <QtCore/QDebug>

// Locale headers
#include "luasyntaxhighlighter.h"


LuaSyntaxHighlighter::LuaSyntaxHighlighter(QObject *parent) :
    QSyntaxHighlighter(parent)
{
    qDebug() << "Construction of LuaSyntaxHighlighter";
}


LuaSyntaxHighlighter::~LuaSyntaxHighlighter()
{
    qDebug() << "Destruction of LuaSyntaxHighlighter";
}
