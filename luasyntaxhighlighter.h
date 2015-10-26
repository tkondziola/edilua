#ifndef LUASYNTAXHIGHLIGHTER_H
#define LUASYNTAXHIGHLIGHTER_H

#include <QtGui/QSyntaxHighlighter>

class LuaSyntaxHighlighter : public QSyntaxHighlighter
{
    Q_OBJECT

public:
    explicit LuaSyntaxHighlighter(QObject *parent = 0);
    ~LuaSyntaxHighlighter();
};

#endif // LUASYNTAXHIGHLIGHTER_H

