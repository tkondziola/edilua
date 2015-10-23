#ifndef LUAGRAMMAR_H
#define LUAGRAMMAR_H

#include <QSyntaxHighlighter>

class LuaSyntaxHighlighter : public QSyntaxHighlighter
{
    Q_OBJECT

public:
    explicit LuaSyntaxHighlighter(QObject *parent = 0);
    ~LuaSyntaxHighlighter();
};

#endif // LUAGRAMMAR_H

